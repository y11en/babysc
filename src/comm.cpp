/*
	Author: y11en
	Data: 2020.4
*/

#include "one.h"
#include "sc.h"



void init_api(NativeApi* func)
{
	HMODULE kernel32;
	HMODULE ntdll;
	BYTE ntdll_dll[] = { 110, 116, 100, 108, 108, 46, 100, 108, 108, 0x00};
	BYTE str_kernel32[] = { 107, 101, 114, 110, 101, 108, 51, 50, 46, 100, 108, 108 , 0};

	func->kernel32 = kernel32 = (HMODULE)get_kernel32();

	GET_FUNC(kernel32, H_LoadLibraryA, func->loadlib, 0);
	GET_FUNC(kernel32, H_GetProcAddress, func->getproc, 0);
	GET_FUNC(kernel32, H_VirtualAlloc, func->allocmem, 0);
	GET_FUNC(kernel32, H_VirtualFree, func->freemem, 0);
	GET_FUNC(kernel32, H_ExitProcess, func->exitme, 0);

	ntdll = func->loadlib((LPCSTR)ntdll_dll);
	
	GET_FUNC(ntdll, H_RtlZeroMemory, func->zeromem, func->getproc);
	GET_FUNC(ntdll, H_RtlMoveMemory, func->movemem, func->getproc);
	GET_FUNC(kernel32, H_WinExec, func->winexec, 0);
}
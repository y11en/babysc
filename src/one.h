/*
	Author: y11en
	Data: 2020.4
*/

#pragma once

#pragma warning( disable:4995)
#pragma warning( disable:4996)

//Windows 
#include <windows.h>
#include <assert.h>
#include <tlhelp32.h>
#include <Psapi.h>
#include <Shlwapi.h>
#include <winioctl.h>
#include <strsafe.h>
#include <intrin.h>
#include <intsafe.h>
#include <Sfc.h>
#include <winsvc.h>
#include <winnt.h>
#include <bcrypt.h>



#include <iostream>


#include "kernel32_hash.h"


// helper
extern "C"
{
	uint32_t calc_hashW(wchar_t* wstr);
	uint32_t calc_hash(char* str);
	uint32_t get_rtoffset();
	LONG_PTR get_kernel32();
	LONG_PTR get_kernel32_tg();
	HMODULE get_import_module(DWORD hash, DWORD len);
	void* get_export_byhash(HMODULE module, uint32_t func_hash, T_GetProcAddress getproc);
	char* LoadFile(const char* filePath, size_t* fileSize);
}

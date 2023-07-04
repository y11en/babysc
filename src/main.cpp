/*
	Author: y11en
	Data: 2020.4
*/
#include "one.h"
#include "sc.h"



extern "C"
{
	void* _main();
	void* main_entry();
	void main_end();
}



// shellcode 开始
void* main_entry() { return _main(); }

// 实际的 SHELLCODE 入口函数
void* _main()
{
	//  你的 shellcode (梦)开始的地方

	sc_msgbox();


	return 0;
}

// shellcode  结束
void main_end() {}


void build_shellcode(char* outfile)
{
	uint8_t* start, * end;
	int size = 0;
	FILE* file;
	const char* buff = 0;
	size_t szbuff = 0;

	start = (uint8_t*)main_entry;
	end = (uint8_t*)main_end;
	size = end - start;

	printf("shellcode 大小=%d\n", size);

	fopen_s(&file, outfile, "wb");
	if (file)
	{
		// shellcode
		fwrite(start, size, 1, file);

		fflush(file);
		fclose(file);
		printf("succ\n");
	}
	else
	{
		printf("open %s failed\n", outfile);
	}

}


void exec_shellcode(const char* path)
{
	const char* buff = 0;
	void* Ep = 0;
	size_t szbuff = 0;

	buff = LoadFile(path, &szbuff);
	if (buff)
	{
		printf("buff = %p\n", buff);
		Ep = VirtualAlloc(0, szbuff, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
		if (Ep)
		{
			printf("Ep = %p\n", Ep);
			memcpy(Ep, buff, szbuff);
			((void(*)())Ep)();
		}
	}

}


void Help(const char* myself)
{
	printf("usage: %s -g|-e sc.bin\n", myself);
	puts("\t-g  : gen a shellcode");
	puts("\t-e  : run shellcode");
}

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		goto _Exit;
	}
	
	if (!strcmp(argv[1], "-g"))
	{
		build_shellcode(argv[2]);
	}

	else if (!strcmp(argv[1], "-e"))
	{
		exec_shellcode(argv[2]);
	}
	return 0;

_Exit:
	Help(argv[0]);
	return 0;
}


/*

下面这段话，复制来的

1. 编译时选择 realse版本 属性->C/C++->代码生成->运行库->多线程 (/MT)
2. 为了防止编译器自动生成的一系列代码造成的干扰 需要修改入口点 在属性->链接器->高级
3. 属性->C/C++->代码生成->禁用安全检查GS
4. 关闭生成清单 属性->链接器->清单文件->生成清单 选择否
5. 关闭调试信息 属性->链接器->生成调试信息->否
6. 取消SDL安全检查
7. 兼容XP 选择属性->常规->平台工具集->Visual Studio 2013 - Windows XP (v120_xp)
8. C/C++优化 优化->使大小最小化 (/O1) 优化大小或速度->代码大小优先 (/Os)

*/

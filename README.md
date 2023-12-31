# babysc
 自用的shellcode生成框架

## 用法
1. 自己写好功能函数，在`_main`函数体里调用下
2. 将函数名称放到 `order.txt` 文件里面`_main`前面即可
3. 编译下,确认生成了exe文件
4. 执行 `babysc -g shellcode导出文件`, 将功能函数提取出来
5. 通过 `babysc -e shellcode导出文件`，执行下观察是否符合预期

原理：将 `main_entry` `main_end` 两个函数地址之间的内存数据（opcode） dump出来（顺序在order.txt里面定义好了）作为shellcode

### 以`WinExec`方式命令执行为例说明

1. 先完成功能函数

```C
void* sc_exec()
{
	NativeApi func;	// 上下文，里面有需要用到的`全局`变量
	init_api(&func);	// 初始化下，一般在里面获取函数地址之类的
	
	// 方式一：硬编码你的命令
	char cmdline[] = { 109, 115, 112, 97, 105, 110, 116, 46, 101, 120, 101 , 0 };	// mspaint.exe
	
	// 方式二：将要执行的命令放在shellcode后面（需要你自己加到“shellcode导出文件”尾部），这样的好处就是，shellcode生成一次
	// 要执行的命令可以通过重新修改尾部数据达到动态修改功能的目的
	// 当然，放哪里都行，能找到地址就好
	// char* cmdline = (char*)main_end + (UINT32)get_rtoffset();
	
	
	func.winexec(cmdline, SW_SHOW);
	return 0;
}
```

2. 将 `sc_exec` 放到 `order.txt` 里面
```
main_entry
get_rtoffset
get_kernel32
get_export_byhash
get_import_module
calc_hash
init_api
strlen_me

sc_exec

_main
main_end

```

3. 在`_main`里面调用下，然后编译执行
```C

void* _main(){
	sc_exec();
	return 0;
}

```

![演示](demo.png)


## 其他
1. 批量提取kernel32, ntdll hash的工具有需要的话找找传上来
2. 代码生成 Release 版用 MT , 务必!



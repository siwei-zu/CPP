#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//namesapce---解决命名冲突
namespace zzz
{
	int rand = 0;
}

int main()
{
	//这里的变量rand跟stdlib库里的rand函数名冲突，当打印的时候rand会被全局搜索，最终定位到函数，从而rand是一个函数指针
	printf("%p", rand);
	//使用namespace解决命名冲突后，使用域作用限定符::可以对被解决的变量名进行使用，而在C语言中只能通过修改变量名使编译通过
	printf("%d", zzz::rand);
	return 0;
}

//#include<iostream>
//std是C++标准库的命名空间
//using namespace std;

//int main()
//{
//	cout << "hello world" << endl;
//
//	return 0;
//}
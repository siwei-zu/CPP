#include <iostream>
#include <assert.h>
using namespace std;

////重载函数：他的形参的个数、类型、类型的顺序不同
//// 为什么重载函数在c++中可以在C语言中不行？
////test.cpp编译文件
////1.预处理  展开头文件（拷贝的过程）/宏替换（不能调试）/去掉注释/条件编译
////test.i
////2.编译  检查语法/生成汇编代码（指令级代码）
////test.s
////汇编  将汇编代码生成二进制的机器码
////test.o
////链接，合并链接，生成可执行程序
//// 链接过程中C语言生成符号表会直接使用函数名，而c++中会使用函数名修饰规则中对函数名修饰之后，在进行纳入符号表
////a.out/xxx.exe
//
//
////函数的地址是函数定义第一句指令的地址
//
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int Add(double a, double b)
//{
//	return a + b;
//}
//
//int main()
//{
//	cout<<Add(1, 1)<<endl;
//
//	cout << Add(1.1, 1.1) << endl;
//
//	return 0;
//}

//引用
//int main()
//{
//	int a = 0;
//	int& b = a;//给a取了个别名，不会开空间
//
//	cout << &a << endl;
//	cout << &b << endl;//他们会打印同一地址
//
//	return 0;
//}

// //引用适用的场景，输出型参数
//typedef struct TreeNode {
//    int val;
//    struct TreeNode* left;
//    struct TreeNode* right;
//};
// 
// /*
//  * Note: The returned array must be malloced, assume caller calls free().
//  */
//
//int BinaryTreeSize(struct TreeNode* root)
//{
//    if (root == NULL)
//    {
//        return 0;
//    }
//    return BinaryTreeSize(root->left)
//        + BinaryTreeSize(root->right)
//        + 1;
//}
//
////使用引用
//void _preorderTraversal(struct TreeNode* root, int* ret, int& ri)
//{
//    if (root == NULL)
//        return;
//
//    ret[ri] = root->val;
//    (ri)++;
//    _preorderTraversal(root->left, ret, ri);
//    _preorderTraversal(root->right, ret, ri);
//}
////使用引用
//int* preorderTraversal(struct TreeNode* root, int& returnSize) {
//    int n = BinaryTreeSize(root);
//    int* ret = (int*)malloc(sizeof(int) * n);
//    returnSize = n;
//    int i = 0;
//    _preorderTraversal(root, ret, i);
//    return ret;
//}
//
////引用简化
//void Swap(int& a, int& b)
//{
//    int tmp = a;
//    a = b;
//    b = tmp;
//}
//
////引用可以处理链表尾插时链表中无节点的情况（简化代码）ListNode*& phead
//
//int main()
//{
//    int size = 0;
//    preorderTraversal(nullptr, size);
//
//    int x = 10;
//    int y = 20;
//    Swap(x, y);
//    cout << x << endl;
//    cout << y << endl;
//    return 0;
//}


//引用的特性
//1.引用必须在定义时初始化
//int main()
//{
//	int& a;
//	return 0;
//}
//2.一个变量可以有多个引用
//int main()
//{
//	int a = 0;
//	int& b = a;
//	int& n = a;
//	int& d = b;
//	
//	return 0;
//}
//3.引用一旦引用其他实体，再不能引用其他实体
//int main()
//{
//	int a = 0;
//	int& b = a;
//	int& n = a;
//	int& d = b;
//
//	int x = 1;
//	b = x;//这是一条赋值语句
//
//	return 0;
//}

//引用作为返回值

//int& Add(int a, int b)
//{
//	int z = a + b;
//	return z;
//}
//int main()
//{
//	int& add = Add(1, 2);
//	Add(3, 4);
//	cout << "Add = " << add << endl;//结果是7（如果在不清除栈帧的话）
//	return 0;
//}

//出了函数的作用域，如果返回对象还在，可以用引用返回，如果已经被被系统收回，则使用传值返回

//引用返回的使用
// 传引用传参（任何时候都可以用）
// 1、提高效率
// 2、输出型参数（形参的修改，影响的实参）

// 传引用返回（出了函数作用域对象还在才可以用）
// 1、提高效率
// 2、修改返回对象

//struct SeqList
//{
//	int a[10];
//	int size;
//};

// C的接口设计
// 读取第i个位置的值
//int SLAT(struct SeqList* ps, int i)
//{
//	assert(i < ps->size);
//	// ...
//	return ps->a[i];
//}
// 修改第i个位置的值
//void SLModify(struct SeqList* ps, int i, int x)
//{
//	assert(i < ps->size);
//
//	// ...
//	ps->a[i] = x;
//}

// CPP接口设计

// 读 or 修改第i个位置的值
// 17:30继续
//int& SLAT(struct SeqList& ps, int i)
//{
//	assert(i < ps.size);
//	// ...
//	return (ps.a[i]);
//}

//int main()
//{
//	struct SeqList s;
//	s.size = 3;
//	// ...
//	SLAT(s, 0) = 10;
//	SLAT(s, 1) = 20;
//	SLAT(s, 2) = 30;
//	cout << SLAT(s, 0) << endl;
//	cout << SLAT(s, 1) << endl;
//	cout << SLAT(s, 2) << endl;
//
//	return 0;
//}



////c++中结构体升级成了类
//#define N 10
//struct SeqList
//{
//	// 成员函数
//	int& at(int i)
//	{
//		assert(i < N);
//		return a[i];
//	}
//
//	int& operator[](int i)
//	{
//		assert(i < N);
//		return a[i];
//	}
//
//	// 成员变量
//	int a[N];
//};
//
//int main()
//{
//	//struct SeqList s;//C语言中的结构体
//	SeqList s2;
//
//	for (int i = 0; i < N; i++)
//	{
//		s2.at(i) = i;
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		cout << s2.at(i) << " ";
//	}
//	cout << endl;
//	return 0;
//}

// 在引用的过程中
// 权限可以平移
// 权限可以缩小
// 权限不能放大

//int func()
//{
//	int a = 0;
//
//	return a;
//}
//
//int main()
//{
//	const int& ret = func();
//
//	const int a = 0;
//
//	// 权限的放大
//	// int& b = a;
//
//	//int b = a; 可以的，因为这里是赋值拷贝，b修改不影响a
//
//	// 权限的平移
//	const int& c = a;
//
//	// 权限的缩小
//	int x = 0;
//	const int& y = x;
//
//	int i = 0;
//	const double& d = i;//变量类型转换时先生成临时变量，在将临时变量赋给左值，且临时变量具有常性
//
//	return 0;
//}

//引用和对象的区别
//1. 引用概念上定义一个变量的别名，指针存储一个变量地址。
//2. 引用在定义时必须初始化，指针没有要求
//3. 引用在初始化时引用一个实体后，就不能再引用其他实体，而指针可以在任何时候指向任何
//一个同类型实体
//4. 没有NULL引用，但有NULL指针
//5. 在sizeof中含义不同：引用结果为引用类型的大小，但指针始终是地址空间所占字节个数(32
//	位平台下占4个字节)
//6. 引用自加即引用的实体增加1，指针自加即指针向后偏移一个类型的大小
//7. 有多级指针，但是没有多级引用
//8. 访问实体方式不同，指针需要显式解引用，引用编译器自己处理
//9. 引用比指针使用起来相对更安全



//宏
//宏常数
#define N 10
//宏函数
#define ADD(x,y) ((x) + (y))

//宏的缺点
//1.容易出错，语法坑很多
//2.不能调试
//3.没有类型安全的检查
//优点
//效率高，不需要建立栈帧


//内联函数 inline，release版本下会将inline修饰的内联函数展开，在预处理阶段，也就不会建立栈帧，适用代码量小
//内联函数不允许声明和定义函数在两个文件，因为内联函数会在预处理阶段将函数展开，分文件声明定义会导致找不到函数。
//内联函数不会进入符号表，所以可以直接定义在.h文件中（定义在.h文件中，其他文件包含这个头文件，在编译过程中会直接将内联函数展开，
//并且内联函数不进入符号表，所以在链接过程中，不会产生链接冲突）
//inline int Add(int a, int b)
//{
//	return a + b; 
//}
//
//
//#include<string>
//#include <vector>
//
////auto关键字：自动推导右值的类型
//int main()
//{
//	int a = 0;
//	auto b = a;//
//	auto c = &a;
//	auto& d = a;
//	//普通场景没有价值，类型很长就有价值，简化代码。
//	//示例
//	std::vector<std::string> v;
//	//std::vector<std::string>::iterator it = v.begin();
//	auto it = v.begin();
//
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	cout << typeid(it).name() << endl;
//
//	return 0;
//}
//auto不能做函数参数，不能定义数组。



////for循环的优化
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		arr[i] *= 2;
//	}
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	//范围for ，基于范围去访问
//	//依次取数组中的数据赋值给e
//	//自动判定结束
//	//自动迭代
//
//	//这样会发现没有修改原数组，是因为是将数组的值赋给e
//	//for (auto e : arr)
//	//{
//	//	e *= 3;
//	//}
//	//引用即可
//	for (auto& e : arr)
//	{
//		e *= 2;
//	}
//	for (auto e : arr)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

//空指针
void f(int a)
{
	cout << "void f(int a)" << endl;
}

void f(int* a)
{
	cout << "void f(int* a)" << endl;
}
//1. 在使用nullptr表示指针空值时，不需要包含头文件，因为nullptr是C++11作为新关键字引入的。
//2. 在C++11中，sizeof(nullptr) 与 sizeof((void*)0)所占的字节数相同。
//3. 为了提高代码的健壮性，在后续表示指针空值时建议最好使用nullptr。

//c++中的失误的地方
//#ifndef NULL
//#ifdef __cplusplus
//#define NULL   0
//#else
//#define NULL   ((void *)0)
//#endif
//#endif
int main()
{
	f(0);
	f(NULL);
	f(nullptr);//关键字
	f((int*)NULL);


	return 0;
}

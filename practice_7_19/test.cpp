#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//namesapce---���������ͻ

namespace zzz
{
	// �����ռ��п��Զ������/����/����
	int rand = 10;

	int Add(int left, int right)
	{
		return left + right;
	}

	struct Node
	{
		struct Node* next;
		int val;
	};

	namespace xxx
	{
		int rand = 1;
	}
}

//int Add(int left, int right)
//{
//	return (left + right) * 10;
//}

//int main()
//{
//	printf("%d\n", zzz::rand);
//	printf("%d\n", zzz::Add(1,2));
//	printf("%d\n", Add(1, 2));
//
//	struct zzz::Node node;
//
//	return 0;
//}

 //ȫ��չ��(��Ȩ)
 //using namespace zzz;

 //����չ��(��Ȩ)
using zzz::Add;

int main()
{
	printf("%p\n", rand);
	printf("%d\n", zzz::rand);
	printf("%d\n", zzz::xxx::rand);

	printf("%d\n", Add(1, 2));
	printf("%d\n", Add(1, 2));
	printf("%d\n", Add(1, 2));
	printf("%d\n", Add(1, 2));
	printf("%d\n", Add(1, 2));

	struct zzz::Node node;

	return 0;
}

//namespace zzz
//{
//	int rand = 0;
//}

//int main()
//{
//	//����ı���rand��stdlib�����rand��������ͻ������ӡ��ʱ��rand�ᱻȫ�����������ն�λ���������Ӷ�rand��һ������ָ��
//	printf("%p", rand);
//	//ʹ��namespace���������ͻ��ʹ���������޶���::���ԶԱ�����ı���������ʹ�ã�����C������ֻ��ͨ���޸ı�����ʹ����ͨ��
//	printf("%d", zzz::rand);
//	return 0;
//}

//#include<iostream>
//std��C++��׼��������ռ�
//using namespace std;

//int main()
//{
//	cout << "hello world" << endl;
//
//	return 0;
//}
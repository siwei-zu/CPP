#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//namesapce---���������ͻ
namespace zzz
{
	int rand = 0;
}

int main()
{
	//����ı���rand��stdlib�����rand��������ͻ������ӡ��ʱ��rand�ᱻȫ�����������ն�λ���������Ӷ�rand��һ������ָ��
	printf("%p", rand);
	//ʹ��namespace���������ͻ��ʹ���������޶���::���ԶԱ�����ı���������ʹ�ã�����C������ֻ��ͨ���޸ı�����ʹ����ͨ��
	printf("%d", zzz::rand);
	return 0;
}

//#include<iostream>
//std��C++��׼��������ռ�
//using namespace std;

//int main()
//{
//	cout << "hello world" << endl;
//
//	return 0;
//}
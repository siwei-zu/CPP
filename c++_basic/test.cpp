#include <iostream>
#include <assert.h>
using namespace std;

////���غ����������βεĸ��������͡����͵�˳��ͬ
//// Ϊʲô���غ�����c++�п�����C�����в��У�
////test.cpp�����ļ�
////1.Ԥ����  չ��ͷ�ļ��������Ĺ��̣�/���滻�����ܵ��ԣ�/ȥ��ע��/��������
////test.i
////2.����  ����﷨/���ɻ����루ָ����룩
////test.s
////���  �����������ɶ����ƵĻ�����
////test.o
////���ӣ��ϲ����ӣ����ɿ�ִ�г���
//// ���ӹ�����C�������ɷ��ű��ֱ��ʹ�ú���������c++�л�ʹ�ú��������ι����жԺ���������֮���ڽ���������ű�
////a.out/xxx.exe
//
//
////�����ĵ�ַ�Ǻ��������һ��ָ��ĵ�ַ
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

//����
//int main()
//{
//	int a = 0;
//	int& b = a;//��aȡ�˸����������Ὺ�ռ�
//
//	cout << &a << endl;
//	cout << &b << endl;//���ǻ��ӡͬһ��ַ
//
//	return 0;
//}

// //�������õĳ���������Ͳ���
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
////ʹ������
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
////ʹ������
//int* preorderTraversal(struct TreeNode* root, int& returnSize) {
//    int n = BinaryTreeSize(root);
//    int* ret = (int*)malloc(sizeof(int) * n);
//    returnSize = n;
//    int i = 0;
//    _preorderTraversal(root, ret, i);
//    return ret;
//}
//
////���ü�
//void Swap(int& a, int& b)
//{
//    int tmp = a;
//    a = b;
//    b = tmp;
//}
//
////���ÿ��Դ�������β��ʱ�������޽ڵ��������򻯴��룩ListNode*& phead
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


//���õ�����
//1.���ñ����ڶ���ʱ��ʼ��
//int main()
//{
//	int& a;
//	return 0;
//}
//2.һ�����������ж������
//int main()
//{
//	int a = 0;
//	int& b = a;
//	int& n = a;
//	int& d = b;
//	
//	return 0;
//}
//3.����һ����������ʵ�壬�ٲ�����������ʵ��
//int main()
//{
//	int a = 0;
//	int& b = a;
//	int& n = a;
//	int& d = b;
//
//	int x = 1;
//	b = x;//����һ����ֵ���
//
//	return 0;
//}

//������Ϊ����ֵ

//int& Add(int a, int b)
//{
//	int z = a + b;
//	return z;
//}
//int main()
//{
//	int& add = Add(1, 2);
//	Add(3, 4);
//	cout << "Add = " << add << endl;//�����7������ڲ����ջ֡�Ļ���
//	return 0;
//}

//���˺�����������������ض����ڣ����������÷��أ�����Ѿ�����ϵͳ�ջأ���ʹ�ô�ֵ����

//���÷��ص�ʹ��
// �����ô��Σ��κ�ʱ�򶼿����ã�
// 1�����Ч��
// 2������Ͳ������βε��޸ģ�Ӱ���ʵ�Σ�

// �����÷��أ����˺�������������ڲſ����ã�
// 1�����Ч��
// 2���޸ķ��ض���

//struct SeqList
//{
//	int a[10];
//	int size;
//};

// C�Ľӿ����
// ��ȡ��i��λ�õ�ֵ
//int SLAT(struct SeqList* ps, int i)
//{
//	assert(i < ps->size);
//	// ...
//	return ps->a[i];
//}
// �޸ĵ�i��λ�õ�ֵ
//void SLModify(struct SeqList* ps, int i, int x)
//{
//	assert(i < ps->size);
//
//	// ...
//	ps->a[i] = x;
//}

// CPP�ӿ����

// �� or �޸ĵ�i��λ�õ�ֵ
// 17:30����
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



////c++�нṹ������������
//#define N 10
//struct SeqList
//{
//	// ��Ա����
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
//	// ��Ա����
//	int a[N];
//};
//
//int main()
//{
//	//struct SeqList s;//C�����еĽṹ��
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

// �����õĹ�����
// Ȩ�޿���ƽ��
// Ȩ�޿�����С
// Ȩ�޲��ܷŴ�

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
//	// Ȩ�޵ķŴ�
//	// int& b = a;
//
//	//int b = a; ���Եģ���Ϊ�����Ǹ�ֵ������b�޸Ĳ�Ӱ��a
//
//	// Ȩ�޵�ƽ��
//	const int& c = a;
//
//	// Ȩ�޵���С
//	int x = 0;
//	const int& y = x;
//
//	int i = 0;
//	const double& d = i;//��������ת��ʱ��������ʱ�������ڽ���ʱ����������ֵ������ʱ�������г���
//
//	return 0;
//}

//���úͶ��������
//1. ���ø����϶���һ�������ı�����ָ��洢һ��������ַ��
//2. �����ڶ���ʱ�����ʼ����ָ��û��Ҫ��
//3. �����ڳ�ʼ��ʱ����һ��ʵ��󣬾Ͳ�������������ʵ�壬��ָ��������κ�ʱ��ָ���κ�
//һ��ͬ����ʵ��
//4. û��NULL���ã�����NULLָ��
//5. ��sizeof�к��岻ͬ�����ý��Ϊ�������͵Ĵ�С����ָ��ʼ���ǵ�ַ�ռ���ռ�ֽڸ���(32
//	λƽ̨��ռ4���ֽ�)
//6. �����ԼӼ����õ�ʵ������1��ָ���ԼӼ�ָ�����ƫ��һ�����͵Ĵ�С
//7. �ж༶ָ�룬����û�ж༶����
//8. ����ʵ�巽ʽ��ͬ��ָ����Ҫ��ʽ�����ã����ñ������Լ�����
//9. ���ñ�ָ��ʹ��������Ը���ȫ



//��
//�곣��
#define N 10
//�꺯��
#define ADD(x,y) ((x) + (y))

//���ȱ��
//1.���׳����﷨�Ӻܶ�
//2.���ܵ���
//3.û�����Ͱ�ȫ�ļ��
//�ŵ�
//Ч�ʸߣ�����Ҫ����ջ֡


//�������� inline��release�汾�»Ὣinline���ε���������չ������Ԥ����׶Σ�Ҳ�Ͳ��Ὠ��ջ֡�����ô�����С
//�������������������Ͷ��庯���������ļ�����Ϊ������������Ԥ����׶ν�����չ�������ļ���������ᵼ���Ҳ���������
//�����������������ű����Կ���ֱ�Ӷ�����.h�ļ��У�������.h�ļ��У������ļ��������ͷ�ļ����ڱ�������л�ֱ�ӽ���������չ����
//��������������������ű����������ӹ����У�����������ӳ�ͻ��
//inline int Add(int a, int b)
//{
//	return a + b; 
//}
//
//
//#include<string>
//#include <vector>
//
////auto�ؼ��֣��Զ��Ƶ���ֵ������
//int main()
//{
//	int a = 0;
//	auto b = a;//
//	auto c = &a;
//	auto& d = a;
//	//��ͨ����û�м�ֵ�����ͺܳ����м�ֵ���򻯴��롣
//	//ʾ��
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
//auto�������������������ܶ������顣



////forѭ�����Ż�
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
//	//��Χfor �����ڷ�Χȥ����
//	//����ȡ�����е����ݸ�ֵ��e
//	//�Զ��ж�����
//	//�Զ�����
//
//	//�����ᷢ��û���޸�ԭ���飬����Ϊ�ǽ������ֵ����e
//	//for (auto e : arr)
//	//{
//	//	e *= 3;
//	//}
//	//���ü���
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

//��ָ��
void f(int a)
{
	cout << "void f(int a)" << endl;
}

void f(int* a)
{
	cout << "void f(int* a)" << endl;
}
//1. ��ʹ��nullptr��ʾָ���ֵʱ������Ҫ����ͷ�ļ�����Ϊnullptr��C++11��Ϊ�¹ؼ�������ġ�
//2. ��C++11�У�sizeof(nullptr) �� sizeof((void*)0)��ռ���ֽ�����ͬ��
//3. Ϊ����ߴ���Ľ�׳�ԣ��ں�����ʾָ���ֵʱ�������ʹ��nullptr��

//c++�е�ʧ��ĵط�
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
	f(nullptr);//�ؼ���
	f((int*)NULL);


	return 0;
}

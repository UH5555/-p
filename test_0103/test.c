#define _CRT_SECURE_NO_WAR
#include <stdio.h>
#include <string.h>

int main()
{
	int a = 10;//4���ֽ�
	int* p = &a;//ȡ��ַ
	printf("%p\n", &a);
	printf("%p\n", p);
	printf("%p\n", &p);
	printf("%d\n", sizeof(p));
	*p = 20;//*---�����ò�������Ȼ���ֵ����a��
	printf("%d\n", a);
	return 0;
}
//�궨��
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a,b);
//	printf("%d\n", max);
//	return 0;
//}

//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("��=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	extern int g_val;
//	printf("gval=%d\n", g_val);
//	return 0;
//}

//void test()
//{
//	//int a = 1;
//	static int a = 1;//a  ��һ����̬�ľֲ�����
//	//static���ξֲ��������ֲ��������������ڱ䳤
//  //static����ȫ�ֱ������ı��˱����������� - �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ����޷�ʹ��
//  //static���κ������ı��˺������������ԡ��ⲿ���Ӻ���>>>>>�ڲ����Ӻ���
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	typedef unsigned int u_int;
//	u_int num = -120;
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//	register int a = 10;//�����a�ŵ��Ĵ�������ζ�ȡ��
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", arr[4]);//[]-----�±�����
//	return 0;
//}

//int main()
//{
//	//��----��0����-----0��
//	//&&----�߼��룻||-----�߼���
//	int a = 3;
//	int b = 4;
//	int c = a &&b;
//	int d = a || b;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("c=%d\n d=%d\n max=%d\n", c, d,max);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//double--->int;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//����++,��ʹ�ã���++
//	int c = ++a;//ǰ��++����++����ʹ��
//	int d = --a;//ǰ��--����--����ʹ��
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b,c,d);
//	return 0;
//}

//int main()
//{
//	int a = 0;//4���ֽڣ�32bitλ
//	int b = ~a;
//	//~---��λȡ����2���ƣ�
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	printf("%d\n", b);
//	//ԭ�롢���롢����----���λΪ����λ��0��ʾ������1��ʾ������
//  //ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ��롣
//	//���λ���䣬����ȡ��Ϊ���룬����+1Ϊ���롣
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

//����
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 11;
//	int num2 = 10;
//	int max = 0;
//	max = Max(num1, num2);//()-----��������
//	printf("max=%d\n", max);
//	return 0;
//}
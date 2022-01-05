#define _CRT_SECURE_NO_WAR
#include <stdio.h>
#include <string.h>

int main()
{
	int a = 10;//4个字节
	int* p = &a;//取地址
	printf("%p\n", &a);
	printf("%p\n", p);
	printf("%p\n", &p);
	printf("%d\n", sizeof(p));
	*p = 20;//*---解引用操作符，然后把值付给a。
	printf("%d\n", a);
	return 0;
}
//宏定义
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
//	printf("和=%d\n", sum);
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
//	static int a = 1;//a  是一个静态的局部变量
//	//static修饰局部变量，局部变量的生命周期变长
//  //static修饰全局变量，改变了变量的作用域 - 让静态的全局变量只能再自己所在的源文件内部使用，除了源文件就无法使用
//  //static修饰函数，改变了函数的链接属性。外部链接函数>>>>>内部链接函数
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
//	register int a = 10;//建议把a放到寄存器，多次读取。
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", arr[4]);//[]-----下标引用
//	return 0;
//}

//int main()
//{
//	//真----非0；假-----0；
//	//&&----逻辑与；||-----逻辑与
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
//	int b = a++;//后置++,先使用，后++
//	int c = ++a;//前置++，先++，后使用
//	int d = --a;//前置--，先--，后使用
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b,c,d);
//	return 0;
//}

//int main()
//{
//	int a = 0;//4个字节，32bit位
//	int b = ~a;
//	//~---按位取反（2进制）
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	printf("%d\n", b);
//	//原码、反码、补码----最高位为符号位：0表示正数，1表示负数。
//  //只要是整数，内存中存储的都是二进制的补码。
//	//最高位不变，其余取反为反码，反码+1为补码。
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

//函数
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
//	max = Max(num1, num2);//()-----函数引用
//	printf("max=%d\n", max);
//	return 0;
//}
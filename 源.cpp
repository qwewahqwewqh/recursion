#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//函数递归
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
// 
// 
//计算字符串长度
//int strlen(char* str)
//{
//	int count = 0;
//	while (*str != 0)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//递归的方法
//int strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("%d", len);
//	return 0;
//}
// 
// 
// 
//n的阶乘
//int facl(int i)
//{
//	int n = 0;
//	int sum = 1;
//	for (n = 1; n <= i; n++)
//	{
//		sum = sum * n;
//	}
//	return sum;
//}
//递归方法
//int Facl(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Facl(n - 1);
//}
//
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	scanf("%d", &i);
//	ret = Facl(i);
//	printf("%d", ret);
//	return 0;
//}
//斐波那契数列：前两个数之和等于第三个数
// 递归
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);

//循环
 /*int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("%d", ret);
	return 0;
}*/
//汉诺塔
//青蛙跳台阶
//n个台阶
//1次可以跳1个或两个台阶
//这只青蛙要跳到第n个台阶，有多少种跳法。
//《剑指offer》
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
#include<math.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("完成%d层汉诺塔需要%d步", i, (int)pow(2, i) - 1);
//	return 0;
//}
//递归
//int Step(int n)
//{
//	if (1 == n)
//		return 1;
//	else
//		return 2 * Step(n - 1) + 1;
//}
//int main()
//{
//	int i, num;
//	scanf("%d", &i);
//	num = Step(i);
//	printf("完成%d层汉诺塔需要%d步",i, num);
//	return 0;
//}

//青蛙跳台阶
//n个台阶
//1次可以跳1个或两个台阶
//这只青蛙要跳到第n个台阶，有多少种跳法。
//我们设台阶数位N;
//当N = 1时，当然只有1种跳法；
//当N = 2时，青蛙可以跳2次1层和跳1次2层；
//当N = 3时，当有3层台阶时，青蛙可以选择先跳1层，剩下2层台阶，所以此时就是有2层台阶时的跳法，有2种；当青蛙选择第一次跳2层台阶时，剩下1层台阶，此时有1层台阶时的跳法，所以3层台阶时的方法是：2层台阶的方法 + 1层台阶的方法。
//当N = 4时，具体跳法为: 1、先跳1层 若先跳1层，则剩下3层，接下来就是3层台阶的跳法。 2、先跳2层 若先跳2层，则剩下2层，接下俩就是2层台阶的跳法，所以4层台阶的方法为：3层台阶的方法 + 2层台阶的方法。
//
//以此类推，当N = n时，n层台阶的方法为 : (n - 1)层台阶的方法 +( n - 2 )层台阶的方法。
//int Step(int n)
//{
//	if (1 == n)
//		return 1;
//	if (2 == n)
//		return 2;
//	else
//		return Step(n - 1) + Step(n - 2);
//}
//int main()
//{
//	int n, ret;
//	scanf("%d", &n);
//	ret = Step(n);
//	printf("%d", ret);
//	return 0;
//}
//《剑指offer》

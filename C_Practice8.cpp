//递归和非递归分别实现求第n个斐波那契数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
   //递归
int fib(int n){
	if (n == 1 || n == 2){
		return 1;
	}
	else
		return fib(n - 1) + fib(n - 2);
}
   //非递归
int fib(int n){
	int num1 = 1, num2 = 2, result;
	if (n == 1 || n == 2){
		return 1;
	}
	for (int i = 3; i <= n; i++){
		result = num1 + num2;
		num1 = num2;
		num2 = result;
	}
	return result;
}
int main(){
	int n;
	printf("请输入您想要求的斐波那契数:");
	scanf("%d", &n);
	printf("第%d个斐波那契数是%d\n", n, fib(n));
	system("pause");
	return 0;
}
//编写一个函数实现n^k,使用递归实现
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Fun(int n, int k){
	if (k == 1){
		return n;
	}
	else
		return Fun(n, k - 1)*n;
}
int main(){
	int n = 0, k = 0;
	printf("please enter two numbers:");
	scanf("%d %d", &n, &k);
	printf("the result is %d\n", Fun(n, k));
	system("pause");
	return 0;
}
//写一个递归函数DigitSum(n),输入一个非负整数，返回组成它的数字之和，列如，调用DigitSum(1792),则应该返回1+7+2+9，它的和是19
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int DigitSum(n){
	if (n < 10){
		return n;
	}
	return n % 10 + DigitSum(n / 10);
}
int main(){
	int n = 0;
	printf("please enter a number:");
	scanf("%d", &n);
	printf("the result is %d\n", DigitSum(n));
	system("pause");
	return 0;
}
//编写一个函数reverse_string(char*string)(递归实现)
   //实现:将参数字符串的字符反向排列
   //要求 : 不能使用C函数库中的字符串操作函数
#include<stdio.h>
#include<stdlib.h>
void reverse_string(char*string){
	if (*string != '\0'){
		reverse_string(string + 1);
		printf("%c", *string);
	}
}
int main(){
	char *string = "bit";
	reverse_string(string);
	printf("\n");
	system("pause");
	return 0;
}
//递归和非递归分别实现strlen
#include<stdio.h>
#include<stdlib.h>
   //递归
int strlen(char* string){
	if (*string == '\0'){
		return 0;
	}
	return strlen(string + 1) + 1;
}
   //非递归
int strlen(char* string){
	int count = 0;
	while (*string != '\0'){
		count++;
		string++;
	}
	return count;
}
int main(){
	char* string = "bit";
	int len = strlen(string);
	printf("%d\n", len);
	system("pause");
	return 0;
}
//递归和非递归分别实现n的阶乘
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
   //递归
int fac(int n){
	int f;
	if (n < 0){
		printf("the data is error");
	}
	else if (n == 0 || n == 1){
		f = 1;
	}
	else f = fac(n - 1)*n;
	return f;
}
   //非递归
int fac(int n){
	int result = 1;
	for (int i = 1; i <= n; i++){
		result = result*i;
	}
	return result;
}
int main(){
	int n = 0;
	printf("please enter a number : ", n);
	scanf("%d", &n);
	printf("%d! is %d\n", n, fac(n));
	system("pause");
	return 0;
}
//递归方式实现打印一个整数的每一位
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void print(int n){
	if (n > 9){
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main(){
	int n = 0;
	printf("please enter a number : ", n);
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}

//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
   //�ݹ�
int fib(int n){
	if (n == 1 || n == 2){
		return 1;
	}
	else
		return fib(n - 1) + fib(n - 2);
}
   //�ǵݹ�
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
	printf("����������Ҫ���쳲�������:");
	scanf("%d", &n);
	printf("��%d��쳲���������%d\n", n, fib(n));
	system("pause");
	return 0;
}
//��дһ������ʵ��n^k,ʹ�õݹ�ʵ��
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
//дһ���ݹ麯��DigitSum(n),����һ���Ǹ����������������������֮�ͣ����磬����DigitSum(1792),��Ӧ�÷���1+7+2+9�����ĺ���19
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
//��дһ������reverse_string(char*string)(�ݹ�ʵ��)
   //ʵ��:�������ַ������ַ���������
   //Ҫ�� : ����ʹ��C�������е��ַ�����������
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
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
#include<stdio.h>
#include<stdlib.h>
   //�ݹ�
int strlen(char* string){
	if (*string == '\0'){
		return 0;
	}
	return strlen(string + 1) + 1;
}
   //�ǵݹ�
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
//�ݹ�ͷǵݹ�ֱ�ʵ��n�Ľ׳�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
   //�ݹ�
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
   //�ǵݹ�
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
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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

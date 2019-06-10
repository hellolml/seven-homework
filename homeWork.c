#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
int fib(int n){
	if (n <= 2){
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}
int ffib(int n){
	int an, an_1 = 1, an_2 = 1;
	if (n <= 2){
		return 1;
	}
	for (int i = 2; i < n; i++){
		an = an_1 + an_2;
		an_2 = an_1;
		an_1 = an;
	}
	return an;
}
int main0(){
	int n;
	printf("请输入要求的多少位非波拉契数:");
	scanf("%d", &n);
	printf("递归求得为:%d\n", fib(n));
	printf("非递归求得为:%d\n", ffib(n));
	system("pause");
	return 0;
}

int Mul(int n,int k){
	k--;
	if (k == 0){
		return n;
	}
	return n*Mul(n, k);
}
int main1(){
	int n, k;
	scanf("%d %d", &n,&k);
	printf("%d^%d=%d\n",n,k, Mul(n,k));
	system("pause");
	return 0;
}

int DigitSum(n){
	if (n <= 9){
		return n;
	}
	return n%10+DigitSum(n / 10);
}
int main2(){
	int n;
	scanf("%d", &n);
	printf("%d", DigitSum(n));
	system("pause");
	return 0;
}

void reverse_string(char * string){
	int lent = strlen(string);
	if (lent <= 1){
		return 0;
	}
	else{
		int temp = string[0];
		string[0] = string[lent - 1];
		string[lent - 1] = '\0';
		reverse_string(string + 1);
		string[lent - 1] = temp;
	}
}
int main3(){
	char str[] = "abcde";
	reverse_string(str);
	printf("%s", str);
	system("pause");
	return 0;
}

int Strlen(char str[]){
	return (*str != NULL) && (*str != "\0") ? 1 + Strlen(str + 1) : 0;
}
int Strlen1(char str[]){
	int count;
	for (count = 0; (*str != "\0")&&(*str != NULL); str++){
		count++;
	}
	return count;
}
int main4(){
	char str[] = "abcde";
	printf("%d\n", Strlen(str));
	printf("%d\n", Strlen1(str));
	system("pause");
	return 0;
}


int JMul(int n){
	if (n == 1){
		return 1;
	}
	return n*JMul(n - 1);
}
int JMul1(int n){
	int sum = 1;
	for (int i = 1; i <= n; i++){
		sum *= i;
	}
	return sum;
}
int main5(){
	int n=0;
	printf("请输入一个数:");
	scanf("%d", &n);
	printf("递归求得阶乘为:%d\n",JMul(n));
	printf("非递归求得阶乘为:%d\n",JMul1(n));
	system("pause");
	return 0;
}

int Num(int n){
	if (n > 9){
		Num(n/10);
	}
	printf("%d\n", n % 10);
}
int main(){
	int n=0;
	scanf("%d", &n);
	printf("%d", Num(n));
	system("pause");
}
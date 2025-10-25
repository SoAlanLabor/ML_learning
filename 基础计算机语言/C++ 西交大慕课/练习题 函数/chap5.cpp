/*#include<iostream>
using namespace std;
double mysum(double a, double b) {
	double c = a + b;
	return c;
}

int main() {
	double a, b;
	cin >> a >> b;
	cout << mysum(a, b);
	system("pause");
	return 0;
}
//编写函数，求两个实数的和。编写主函数，输入两个数，调用函数求和，在主函数中显示结果。建议函数名mysum。
*/

/*
#include<iostream>
using namespace std;
double mypow(double a,int b) {
	double pow = 1;
	if (b > 0 && a != 0) {
		for (int i = 0; i < b; ++i) {
			pow *= a;
		}
	}
	else if(b < 0 && a != 0)
	{
		for (int i = 0; i > b; --i) {
			pow /= a;
		}
	}
	else if (a == 0) { pow = 0; }
	return pow;
}

int main() {
	double a;
	int b;
	cin >> a >> b;
	cout << mypow(a,b);
	system("pause");
	return 0;
}
//求x的k次方
*/

/*
#include<iostream>
using namespace std;
double myfabs(double a) {
	if (a < 0) {
		a = -a;
	}
	return a;
}

int main() {
	double a;
	cin >> a;
	cout << myfabs(a);
	system("pause");
	return 0;
}
//求x的绝对值
*/

/*
#include<iostream>
using namespace std;
int myjie(int a) {
	int sum = 1;
	for (int i = 1; i <= a; i++) {
		sum *= i;
	}
	return sum;
}

int main() {
	int a;
	cin >> a;
	cout << myjie(a);
	system("pause");
	return 0;
}
//求n！
*/

/*
#include<iostream>
using namespace std;
void ver(int a[100],int i) {
	int temp;
	for (int k = 0; k < i / 2; k++) {
		temp = a[k];
		a[k] = a[i - k - 1];
		a[i - k - 1] = temp;
	}
	for (int k = 0; k < i; k++) {
		cout << a[k] << ((k == i-1) ? ("") : (" "));
	}
}

int main() {
	int a[100];
	int i = 0;
	int m = 0;
	while (m != -9999) {
		cin >> m;
		if (m != -9999) {
			a[i] = m;
			++i;
		}
	}
	ver(a,i);
	system("pause");
	return 0;
}
//利用函数实现数组倒序
*/

/*
#include<iostream>
using namespace std;
int input(int a[100]) {
	int m = 0;
	int i = 0;
	while (true) {
		cin >> m;
		if (m != -9999) {
			a[i] = m;
			++i;
		}
		else {
			return i;
		}
	}
}

void output(int a[100], int i) {
	for (int k = 0; k < i; k++) {
		cout << a[k] << ((k == i - 1) ? ("") : (" "));
	}
}

void ver(int a[100], int i) {
	int temp;
	for (int k = 0; k < i / 2; k++) {
		temp = a[k];
		a[k] = a[i - k - 1];
		a[i - k - 1] = temp;
	}
	output(a, i);
}

int main() {
	int a[100];
	int i = 0;
	int m = 0;
	int size = input(a);
	ver(a, size);
	system("pause");
	return 0;
}
//全函数实现输出、输出
*/

/*
#include<iostream>
using namespace std;

int input(int a[]) {
	int m = 0;
	int i = 0;
	while (true) {
		cin >> m;
		if (m != -9999) {
			a[i] = m;
			++i;
		}
		else {
			return i;
		}
	}
}

int sumarr(int a[], int i) {
	int sum = 0;
	for (int k = 0; k < i; k++) {
		sum += a[k];
	}
	return sum;
}

int main() {
	int a[100];
	int size = input(a);
	cout << sumarr(a, size);
	system("pause");
	return 0;
}
//数组求和
*/

/*
#include<iostream>
using namespace std;

int input(char s[]) {
	cin.getline(s, 100);
	int i = 0;
	while (s[i] != '\0') {
		i++;
	}
	return i;
}

int main() {
	char s[100];
	int size = input(s);
	cout << size;
	system("pause");
	return 0;
}
//字符串长度
*/

/*
#include<iostream>
using namespace std;

int input(char s[]) {
	cin.getline(s, 100);
	int i = 0;
	while (s[i] != '\0') {
		i++;
	}
	return i;
}

void largers(char s[], int i) {
	for (int j = 0; j < i; j++) {
		if (s[j] <= 'z' && s[j] >= 'a') {
			s[j] = char(s[j] - 32);
		}
	}
	cout << s;
}

int main() {
	char s[200];
	int size = input(s);
	largers(s,size);
	system("pause");
	return 0;
}
//字符串小写转入大写
*/

/*
#include<iostream>
using namespace std;

void input(char s[]) {
	cin.getline(s, 100);
}

void mystrcpy(char s[], char cpy[]) {
	int i = 0;
	while (s[i] != '\0') {
		i++;
	}
	for (int j = 0; j < i; j++) {
		cpy[j] = s[j];
	}
	cpy[i] = '\0';
}

int main() {
	char s[100],scopy[100];
	input(s);
	mystrcpy(s, scopy);
	cout << scopy;
	system("pause");
	return 0;
}
//函数复制字符串
*/

/*
#include<iostream>
using namespace std;

void input(char s[]) {
	cin >> s;
}

void mystrcom(char s1[], char s2[]) {
	int m[3] = {0,0,0};
	bool com = false;
	while (s1[m[0]] != '\0') {
		m[0]++;
	}
	while (s2[m[1]] != '\0') {
		m[1]++;
	}
	m[2] = ((m[0] <= m[1]) ? (m[0]) : (m[1]));
	for (int i = 0; i < m[2]; i++) {
		if (int(s1[i]) < int(s2[i])) { cout << -1; break; }
		else if (int(s1[i]) > int(s2[i])) { cout << 1; break;}
		if (i == m[2]-1) {
			cout << ((m[0]==m[1]) ?(0):((m[0]>=m[1]) ? (1) : (-1)));
		}
	}
}

int main() {
	char s1[200], s2[200];
	input(s1);
	input(s2);
	mystrcom(s1, s2);
	system("pause");
	return 0;
}
//字符串比较函数
*/

/*
#include<iostream>
using namespace std;

void input(char s[]) {
	cin >> s;
}

void mystrcom(char s1[], char s2[]) {
	int m[3] = { 0,0,0 };
	bool com = false;
	while (s1[m[0]] != '\0') {
		m[0]++;
	}
	while (s2[m[1]] != '\0') {
		m[1]++;
	}
	m[2] = ((m[0] <= m[1]) ? (m[0]) : (m[1]));
	for (int i = 0; i < m[2]; i++) {
		if (s1[i] < 'a') {
			s1[i] = char(s1[i] + 32);
		}
		if (s2[i] < 'a') {
			s2[i] = char(s2[i] + 32);
		}
		if (int(s1[i]) < int(s2[i])) { cout << -1; break; }
		else if (int(s1[i]) > int(s2[i])) { cout << 1; break; }
		if (i == m[2] - 1) {
			cout << ((m[0] == m[1]) ? (0) : ((m[0] >= m[1]) ? (1) : (-1)));
		}
	}
}

int main() {
	char s1[200], s2[200];
	input(s1);
	input(s2);
	mystrcom(s1, s2);
	system("pause");
	return 0;
}
//不区分大小写比较字符串
*/


#include <iostream>
#include <cstdio>
using namespace std;
int fun1(char* p, int* p2)	//功能为收集该字符串中的数字字符
{
	int i, flag = 1, count = 0, sum = 0, tmp = 0, j = 0, flag2 = 0; //flag用来决定整数的正负号,tmp用来决定该字符是否可以被添加为整数 
	if (p[0] >= '0' && p[0] <= '9') { //防止后面判断p[0-1]的时候越界访问 
		sum = sum * 10 + p[0] - 48;
	}

	for (i = 1; p[i] != '\0'; i++)
	{
		if (p[i] >= '0' && p[i] <= '9') {
			sum = sum * 10 + p[i] - 48;
			if (p[i - 1] == '-') flag = -1;
			tmp = 1;
		}
		else {
			if (tmp) {
				p2[j++] = flag * sum;
				count++;
				flag = 1;  //重置flag、tmp 和 sum 
				tmp = 0;
				sum = 0;
			}
		}
	}
	if (tmp) {
		p2[j++] = flag * sum;
		count++;
	}
	return count; //返回整数的个数 
}

void fun2(int* p, int n)
{
	if (n == 0) return;
	cout << p[0];
	int i;
	for (i = 1; i < n; i++)
	{
		cout << ' ' << p[i];
	}
	return;
}

int main()
{
	char str[1000] = { '\0' };
	int integer[1000] = { 0 };
	cin.getline(str, 10000);
	int len = fun1(str, integer);
	fun2(integer, len);
	return 0;
}

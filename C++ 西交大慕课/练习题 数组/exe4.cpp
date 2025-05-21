//简单题 3~333
//中级题 335~

/*#include<iostream>
using namespace std;

 编写程序，先输入n，再输入n个整数，按相反的顺序输出这n个整数。如输入5个整数：1 2 3 4 5，输出为：5 4 3 2 1。数据个数不超过100个。
int main() {
	int m[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m[i];
	}
	for (int i = 0; i < n; i++) {
		cout << m[n - i - 1] << ((i==(n-1))?("") :(" "));
	}
	system("pause");
	return 0;
}
*/

/*#include<iostream>
using namespace std;

 编写程序，输入若干整数到一维数组中，输入-9999时表示结束，求数组元素的最大值。数组元素个数不超过100
int main() {
	int m[100];
	int n;
	int i = 0;
	int max;
	while (true) {
		cin >> n;
		if (n != -9999) {
			m[i] = n;
			if (i == 0) {
				max = n;
			}
			else if (max < n) {
				max = n;
			}
			i++;
		}
		else {
			break;
		}
	}
	cout << max;
	system("pause");
	return 0;
}
*/

/*#include<iostream>
using namespace std;

// 有固定数组，编写程序，输入起始下标i和终止下标j，求下标在[i,j)之间的元素的最大值、最小值、总和和平均值。平均值为double。数组元素为{-1,15,-40,-180,99,-122,-124,27,192,128,-165,95,161,-138, -183,51,107,39,-184,113,-63,9,107,188,-11,-13,151,-52,7,6}，元素个数为30个。
int main() {
	int m[30] = { -1,15,-40,-180,99,-122,-124,27,192,128,-165,95,161,-138, -183,51,107,39,-184,113,-63,9,107,188,-11,-13,151,-52,7,6 };
	int i,j;
	cin >> i >> j;
	int max = m[i];
	int min = m[i];
	double average = 0;
	double sum = 0;
	if ((j-i) > 0) {
		for (int k = i; k < j; k++) {
			//求最大值
			if (max < m[k]) {
				max = m[k];
			}
			//求最小值
			if (min > m[k]) {
				min = m[k];
			}
			//求总和
			sum += m[k];
		}
		average = sum / (j - i);
	}
	else {
		max = 0;
		min = 0;
		sum = 0;
		average = 0;
	}
	cout << max << " " << min << " " << sum << " " << average;
	system("pause");
	return 0;
}
*/

/*#include<iostream>
using namespace std;

// 编写程序，输入行数n、列数m，然后输入n行m列的矩阵，求矩阵每行元素的最大值。行数、列数在[1,20]之间。矩阵元素为整数。输入:行数n、列数m及n行m列的整数，按行输入，一行的数据间用空格隔开。输出：每行的最大元组，每个数占1行。
int main() {
	int n, m;
	cin >> n >> m;
	int mar[20][20];
	int max[20];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mar[i][j];
			if (j == 0) {
				max[i] = mar[i][j];
			}
			else if (max[i] < mar[i][j]) {
				max[i] = mar[i][j];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << max[i] << endl;
	}
	system("pause");
	return 0;
}
*/

/*#include<iostream>
using namespace std;

// 编写程序，输入行数n、列数m，然后输入n行m列的矩阵，求矩阵每列元素的最大值。行数、列数在[1,20]之间。矩阵元素为整数。输入:行数n、列数m及n行m列的整数，按行输入，一行的数据间用空格隔开。输出：每行的最大元组，每个数占1行。
int main() {
	int n, m;
	cin >> n >> m;
	int mar[20][20];
	int max[20];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mar[i][j];
			if (i == 0) {
				max[j] = mar[i][j];
			}
			else if (max[j] < mar[i][j]) {
				max[j] = mar[i][j];
			}
		}
	}
	for (int i = 0; i < m; i++) {
		cout << max[i] << ((i == (m-1))?("") : (" "));
	}
	system("pause");
	return 0;
}
*/

/*#include<iostream>
using namespace std;

// 编写程序，输入n，然后输入两个n维向量，计算并输出它们的和。例如输入4，然后输入两个4维向量(1,2,3,4),(5,6,7,8)，它们的和就是对应元素相加，结果为(6,,8,10,12)。设向量的元素为整数。维数不超过100.
int main() {
	int dimension;
	int vec1[100], vec2[100], vec3[100];
	cin >> dimension;
	for (int i = 0; i < 2*dimension; i++) {
		if (i < dimension) {
			cin >> vec1[i];
		}
		else {
			cin >> vec2[i-dimension];
			vec3[i-dimension] = vec1[i - dimension] + vec2[i - dimension];
			cout << vec3[i - dimension] << ((i == (2*dimension - 1)) ? ("") : (" "));
		}
	}
	system("pause");
	return 0;
}
*/

/*#include<iostream>
using namespace std;

// 编写程序，输入n，然后输入两个n维向量，计算并输出它们的内积。
int main() {
	int dimension;
	int sum = 0;
	int vec1[100], vec2[100], vec3[100];
	cin >> dimension;
	for (int i = 0; i < 2 * dimension; i++) {
		if (i < dimension) {
			cin >> vec1[i];
		}
		else {
			cin >> vec2[i - dimension];
			vec3[i - dimension] = vec1[i - dimension] * vec2[i - dimension];
			sum += vec3[i - dimension];
		}
	}
	cout << sum;
	system("pause");
	return 0;
}
*/

/* #include<iostream>
#include<cmath>
using namespace std;

// 编写程序，输入n，然后输入一个n维向量，计算并输出它的范数。
int main() {
	int dimension;
	double digit = 0;
	double vec1[100];
	cin >> dimension;
	for (int i = 0; i < dimension; i++) {
		cin >> vec1[i];
		digit += (vec1[i] * vec1[i]);
	}
	cout << sqrt(digit);
	system("pause");
	return 0;
}
*/

/* #include<iostream>
#include<cmath>
using namespace std;

// 编写程序，输入n，然后输入一个n维向量，计算并输出它的范数。
int main() {
	int dimension;
	double digit = 0;
	double vec1[100],vec2[100];
	cin >> dimension;
	for (int i = 0; i < 2*dimension; i++) {
		if(i < dimension){
			cin >> vec1[i];
		}
		else {
			cin >> vec2[i - dimension];
			digit += ((vec1[i-dimension]- vec2[i - dimension]) * (vec1[i - dimension]-vec2[i-dimension]));
		}
	}
	cout << sqrt(digit);
	system("pause");
	return 0;
}
*/

/*#include<iostream>
#include<cmath>
using namespace std;

// 编写程序，矩阵求和
int main() {
	int n, m;//n行m列
	cin >> n >> m;
	double a[100][100], b[100][100],c[100][100];
	for (int i = 0; i < 2*n; i++) {
		if (i < n) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
			}
		}
		else{
			for (int j = 0; j < m; j++) {
				cin >> b[i-n][j]; 
				c[i - n][j] = a[i - n][j] + b[i - n][j];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << c[i][j] << ((j == m - 1) ? ("\n") : (" "));
		}
	}
	system("pause");
	return 0;
}
*/

/*
#include<iostream>
using namespace std;

// 编写程序，输入可能带空格的字符串，计算并输入其长度（即字符个数，含空格数）。字符串最大长度不超过100。使用字符数组实现，不使用字符串库函数。
int main() {
	char s[100];
	cin.getline(s, 100);
	int i = 0;
	while (s[i] != '\0') {
		i++;
	}
	cout << i;
	system("pause");
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
// 编写程序，输入可能带空格的字符串，计算并输入其大写字母个数。字符串最大长度不超过100。使用字符数组实现，不使用字符串库函数。
int main() {
	char s[100];
	cin.getline(s, 100);
	int i = 0;
	int bigger = 0;
	while (s[i] != '\0') {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			++bigger;
		}
		i++;
		}
cout << bigger << endl;
system("pause");
return 0;
}
*/


/*
#include<iostream>
using namespace std;
// 编写程序，输入可能带空格的字符串，并倒序复制
int main() {
	char s[100],copy[100];
	cin.getline(s, 100);
	int i = 0;
	while (s[i] != '\0') {
		i++;
	}
	for (int k = 0; k < i; k++) {
		copy[k] = s[i - k - 1];
	}
	copy[i] = '\0';
	cout << copy << endl;
	system("pause");
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
// 编写程序，将N（N<=10）阶方阵(整型)原地转置（只能使用一个二维数组），例如：转置前的方阵A
int main() {
	int dimension,temp;
	int a[10][10];
	cin >> dimension;
	for (int i = 0; i < dimension; i++) {
		for (int k = 0; k < dimension; k++) {
			cin >> a[k][i];
		}
	}
	for (int i = 0; i < dimension; i++) {
		for (int k = 0; k < dimension; k++) {
			cout << a[i][k] << ((k == dimension-1)?("\n") : (" "));
		}
	}
	system("pause");
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
// 判断对称矩阵
int main() {
	int dimension;
	int a[100];
	bool judgeEqual = true;
	cin >> dimension;
	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {
			cin >> a[i * dimension + j];
		}
	}
	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {
			if (a[i * dimension + j] != a[j * dimension + i]) {
				judgeEqual = false;
			}
		}
	}
	cout << (judgeEqual?("Yes"):("No"));
	system("pause");
	return 0;
}
*/

/*#include<iostream>
using namespace std;
// 去掉字符串末尾空格
int main() {
	char s[100],cut[100];
	cin.getline(s, 100);
	int i = 0;
	int space = 0;
	while (s[i] != '\0') {
		i++;
	}
	for (int j = 0; j < i; j++) {
		if (s[i - j - 1] == ' ') {
			++space;
		}
		else {
			break;
		}
	}
	for (int j = 0; j < i-space; j++) {
		cut[j] = s[j];
	}
	cut[i-space] = '\0';
	cout << "|"<< s << "|"<<endl;
	cout << "|" << cut << "|" << endl;;
	system("pause");
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
// 去掉字符串前面的空格
int main() {
	char s[100], cut[100];
	cin.getline(s, 100);
	int i = 0;
	int space = 0;
	while (s[i] != '\0') {
		i++;
	}
	for (int j = 0; j < i; j++) {
		if (s[j] == ' ') {
			++space;
		}
		else {
			break;
		}
	}
	for (int j = space; j < i; j++) {
		cut[j-space] = s[j];
	}
	cut[i - space] = '\0';
	cout << "|" << s << "|" << endl;
	cout << "|" << cut << "|" << endl;;
	system("pause");
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
// 去掉字符串中间的空格并保留前后
int main() {
	char s[100], cut[100];
	cin.getline(s, 100);
	int i = 0;
	int allspace = 0;
	int middlespace = 0;
	int beginspace = 0;
	int latespace = 0;
	//总长度和总空格
	while (s[i] != '\0') {
		if (s[i] == ' ') {
			++allspace;;
		}
		i++;
		
	}
	//头空格
	for (int j = 0; j < i; j++) {
		if (s[j] == ' ') {
			++beginspace;
		}
		else {
			break;
		}
	}
	//尾空格
	for (int j = 0; j < i; j++) {
		if (s[i-j-1] == ' ') {
			++latespace;
		}
		else {
			break;
		}
	}
	middlespace = allspace - latespace - beginspace;
	int digit = 0;
	//copy
	for (int j = 0; j < i; j++) {
		//中间	
		if (s[j] != ' ' && j >= beginspace && j < (i-latespace)) {
			cut[digit] = s[j];
			++digit;
		}
		else if (j < beginspace || j >= i-latespace) {
			cut[digit] = s[j];
			++digit;
		}
	}
	cut[digit] = '\0';
	cout << "|" << s << "|" << endl;
	cout << "|" << cut << "|" << endl;;
	system("pause");
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
// 找字串
int main() {
	char s[100], sub[100];
	cin.getline(s, 100);
	cin.getline(sub, 100);
	int i = 0;
	int j = 0;
	bool judgeSub = false;
	while (s[i] != '\0') {
		i++;
	}
	while (sub[j] != '\0') {
		j++;
	}
	int mainstr = 0;
	int substr = 0;
	while (s[mainstr] != '\0') {
		if (s[mainstr] != sub[substr]) {
			++mainstr;
			substr = 0;
		}
		else {
			if (substr == j-1) {
				judgeSub = true;
				break;
			}
			++mainstr;
			++substr;
		}
	}
	if (judgeSub) {
		cout << mainstr - substr+1;
	}
	else { cout << "没有该子串"; }
	system("pause");
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
//倒序数组
int main() {
	int arr[100];
	int n;
	int temp = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ((i==n-1) ? ("") : (" "));
	}
	system("pause");
	return 0;
}
*/

#include<iostream>
using namespace std;
//给从小到大排序，找二分查找
int main() {
	int arr[300];
	int n;
	int m = 0;
	int size = 0;
	int answer;
	bool find = false;
	for (int i = 0;;i++) {
		cin >> m;
		if (m != -9999) {
			arr[i] = m;
			++size;
		}
		else { break; }
	}
	cin >> n;
	//二分查找
	int left = 0;
	int right = size - 1;	// 定义了target在左闭右闭的区间内，[left, right]
	while (left <= right) {	//当left == right时，区间[left, right]仍然有效
		int middle = left + ((right - left) / 2);//等同于 (left + right) / 2，防止溢出
		if (arr[middle] > n) {
			right = middle - 1;	//target在左区间，所以[left, middle - 1]
		}
		else if (arr[middle] < n) {
			left = middle + 1;	//target在右区间，所以[middle + 1, right]
		}
		else {	//既不在左边，也不在右边，那就是找到答案了
			answer = middle;
			find = true;
			break;
		}
	}
	if (find) {
		cout << answer;
	}
	else { cout << -1; }
	system("pause");
	return 0;
}
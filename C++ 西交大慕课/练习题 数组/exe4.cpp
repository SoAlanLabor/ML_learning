//���� 3~333
//�м��� 335~

/*#include<iostream>
using namespace std;

 ��д����������n��������n�����������෴��˳�������n��������������5��������1 2 3 4 5�����Ϊ��5 4 3 2 1�����ݸ���������100����
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

 ��д������������������һά�����У�����-9999ʱ��ʾ������������Ԫ�ص����ֵ������Ԫ�ظ���������100
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

// �й̶����飬��д����������ʼ�±�i����ֹ�±�j�����±���[i,j)֮���Ԫ�ص����ֵ����Сֵ���ܺͺ�ƽ��ֵ��ƽ��ֵΪdouble������Ԫ��Ϊ{-1,15,-40,-180,99,-122,-124,27,192,128,-165,95,161,-138, -183,51,107,39,-184,113,-63,9,107,188,-11,-13,151,-52,7,6}��Ԫ�ظ���Ϊ30����
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
			//�����ֵ
			if (max < m[k]) {
				max = m[k];
			}
			//����Сֵ
			if (min > m[k]) {
				min = m[k];
			}
			//���ܺ�
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

// ��д������������n������m��Ȼ������n��m�еľ��������ÿ��Ԫ�ص����ֵ��������������[1,20]֮�䡣����Ԫ��Ϊ����������:����n������m��n��m�е��������������룬һ�е����ݼ��ÿո�����������ÿ�е����Ԫ�飬ÿ����ռ1�С�
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

// ��д������������n������m��Ȼ������n��m�еľ��������ÿ��Ԫ�ص����ֵ��������������[1,20]֮�䡣����Ԫ��Ϊ����������:����n������m��n��m�е��������������룬һ�е����ݼ��ÿո�����������ÿ�е����Ԫ�飬ÿ����ռ1�С�
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

// ��д��������n��Ȼ����������nά���������㲢������ǵĺ͡���������4��Ȼ����������4ά����(1,2,3,4),(5,6,7,8)�����ǵĺ;��Ƕ�ӦԪ����ӣ����Ϊ(6,,8,10,12)����������Ԫ��Ϊ������ά��������100.
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

// ��д��������n��Ȼ����������nά���������㲢������ǵ��ڻ���
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

// ��д��������n��Ȼ������һ��nά���������㲢������ķ�����
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

// ��д��������n��Ȼ������һ��nά���������㲢������ķ�����
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

// ��д���򣬾������
int main() {
	int n, m;//n��m��
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

// ��д����������ܴ��ո���ַ��������㲢�����䳤�ȣ����ַ����������ո��������ַ�����󳤶Ȳ�����100��ʹ���ַ�����ʵ�֣���ʹ���ַ����⺯����
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
// ��д����������ܴ��ո���ַ��������㲢�������д��ĸ�������ַ�����󳤶Ȳ�����100��ʹ���ַ�����ʵ�֣���ʹ���ַ����⺯����
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
// ��д����������ܴ��ո���ַ�������������
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
// ��д���򣬽�N��N<=10���׷���(����)ԭ��ת�ã�ֻ��ʹ��һ����ά���飩�����磺ת��ǰ�ķ���A
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
// �ж϶Գƾ���
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
// ȥ���ַ���ĩβ�ո�
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
// ȥ���ַ���ǰ��Ŀո�
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
// ȥ���ַ����м�Ŀո񲢱���ǰ��
int main() {
	char s[100], cut[100];
	cin.getline(s, 100);
	int i = 0;
	int allspace = 0;
	int middlespace = 0;
	int beginspace = 0;
	int latespace = 0;
	//�ܳ��Ⱥ��ܿո�
	while (s[i] != '\0') {
		if (s[i] == ' ') {
			++allspace;;
		}
		i++;
		
	}
	//ͷ�ո�
	for (int j = 0; j < i; j++) {
		if (s[j] == ' ') {
			++beginspace;
		}
		else {
			break;
		}
	}
	//β�ո�
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
		//�м�	
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
// ���ִ�
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
	else { cout << "û�и��Ӵ�"; }
	system("pause");
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
//��������
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
//����С���������Ҷ��ֲ���
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
	//���ֲ���
	int left = 0;
	int right = size - 1;	// ������target������ұյ������ڣ�[left, right]
	while (left <= right) {	//��left == rightʱ������[left, right]��Ȼ��Ч
		int middle = left + ((right - left) / 2);//��ͬ�� (left + right) / 2����ֹ���
		if (arr[middle] > n) {
			right = middle - 1;	//target�������䣬����[left, middle - 1]
		}
		else if (arr[middle] < n) {
			left = middle + 1;	//target�������䣬����[middle + 1, right]
		}
		else {	//�Ȳ�����ߣ�Ҳ�����ұߣ��Ǿ����ҵ�����
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
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
/*
int factorialPlus(int n){
	int fac = 1;
	int sum = 0;
	for(int i=1;i<=n;i++){
		fac *= i;
		sum += fac;
	}
	return sum;
}

int factorialPlus2(int n, int i = 1, long long fac = 1, long long sum = 0) {
	if (i > n) return sum;                     // �ݹ���ֹ����
	fac *= i;                                  // ���㵱ǰ�׳�
	sum += fac;                                // �ۼӵ��ܺ�
	return factorialPlus2(n, i + 1, fac, sum);   // �ݹ����
}


int main(){
	int n;
	cout << "������һ��0<n<13������" <<endl;
	cin >> n ;
	cout << factorialPlus(n)<< endl;
	cout << factorialPlus2(n)<< endl;
	system("pause");
	return 0;
}
*/
//�м��������Q1 ����n�Ľ׳˵ĺ�

/*
int multiplus(int a,int n){
	int fac = 0;
	int sum = 0;
	for(int i=1;i<=n;i++){
		fac += (a*(int)pow((float)10, (int)(i-1)));
		sum += fac;
	}
	return sum;
}

int multiplus2(int a,int n, int i =1, int fac=0, int sum=0){
	if(i>n) return sum;
	fac += (a*(int)pow((float)10, (int)(i-1)));
	sum += fac;
	return multiplus2(a, n, i+1, fac, sum);
}

int calculateSeries(int a, int n) {
	int sum = 0;
	int current_term = 0;  // ���浱ǰ���ֵ
	for (int i = 0; i < n; i++) {
		current_term = current_term * 10 + a;  // �������ɵ�ǰ��
		sum += current_term;
	}
	return sum;
}

int main(){
	int n,a;
	cin >> a >> n ;
	cout << multiplus(a,n)<< endl;
	cout << multiplus2(a,n)<< endl;
	cout << calculateSeries(a,n)<< endl;
	system("pause");
	return 0;
}
*/
//�м��������Q2 ����a+aa+aaa+...

/*
double arcsinCalculator(double n){
	double fac1,fac2,pown,plus,fourpown;
	double sum = 0;
	for(double i=0;;i++){
		double fac1 = 1;
		double fac2 = 1;
		double pown = 1;
		double fourpown = 1;
		for(double j=0; j< 2*i; j++){ // (2n)! 2
			fac1 *= (j+1);
		}
		for(double j=0; j<(2*i+1); j++){ // x^(2n+1)
			pown *= n;
		}
		for(double j=0; j<i; j++){ // n!
			fac2 *= j+1;
		}
		for(double j=0; j<i; j++){ // 4^n
			fourpown *= 4; ;
		}
		plus = 2*i+1;
		if((double)(fac1*pown)/(fac2*fac2*plus*fourpown)< 1E-08 && ((double)fac1*pown)/(fac2*fac2*plus*fourpown)> -(1E-08)){
			return sum;
		}
		sum += (fac1*pown)/(fac2*fac2*plus*fourpown);
	}
}

double arcsinCalculator(double x) {
	// ����Ϸ��Լ��
	if (x < -1.0 || x > 1.0) {
		return 0;  // ���ط�����ֵ
	}

	const double epsilon = 1e-8;  // ���ȿ�����ֵ
	double sum = x;                 // ��ʼ�� (n=0)
	double term = x;                // ��ǰ��ֵ
	int n = 1;                      // �ӵ�һ�ʼ����

	while (true) {
		// ���ƹ�ʽϵ������
		double coeff = (2 * n - 1) * x * x;  // ���Ӳ���
		coeff /= (2 * n * (2 * n + 1));       // ��ĸ����

		term *= coeff;     // ��������ֵ
		sum += term;       // �ۼӵ��ܺ�

		// ��ֹ�����ж�
		if (fabs(term) < epsilon) {
			break;
		}
		n++;
	}
	return sum;
}

int main(){
	double n;
	cin >> n ;
	if(-1 < n && n < 1){
		cout << arcsinCalculator(n)<< endl;}
	system("pause");
	return 0;
}
*/
//�м��������Q3 ����arcsin(x)

/*
bool isPalindrome(int num) {
	if (num < 0) return false;  // �������ǻ�����
	int original = num;
	long reversed = 0;         // ��ֹ��תʱ���
	while (num > 0) {
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}
	return original == reversed;
}

int main(){
	int len;
	string s;
	cin >> s;
	len = s.length();
	string temp = s;
	for(int i=0; i<(len/2); i++){
		temp[i] = s[len-i-1];
	}
	cout << ((temp == s)? "YES":"NO") << endl;
	system("pause");
	return 0;
}
*/
//�м��������Q4 �ҵ�������

/*
void prime_cal(int a){
	int v = 2;
	if(a >= v*v){
		cout << a << "=";
		while(a>1){
			if(a%v == 0){
				a = a/v;
				cout << v << (a==1?(""):("*"));
			}else{
				v++;
			}
	}
	}
	else{
		cout << a << "=" << a <<endl;
	}
}

int main(){
	int i;
	cin >> i;
	prime_cal(i);
	system("pause");
	return 0;
}
*/
//�м��������Q5 �����ֽ�

/*
int main(){
	int a;
	cin >> a;
	for(int i=1; i<=a; i++){
		cout << ((i%2 != 0)? (1):(-1)) << ((i != a)? " ":"");
	}
	system("pause");
	return 0;
}
*/
// ����1������� ������Q11

/* ���߲���cmath log10(a)+1Ҳ���Լ���λ�� ��Ҫ��������a=0���
int main(){
	int a;
	int m=0;
	cin >> a;
	if(a >= 0){
		m += (a==0? 1:0);
		for(;a != 0;){
			a /= 10;
			m++;
		}
		cout << m << endl;
	}
	system("pause");
	return 0;
}
*/
// ĳ����λ�� ������Q12

/*
int main(){
	int a;
	cin >> a;
	int sum = 0;
	for(;a != 0;){
		sum += a%10;
		a /= 10;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}
*/
// ĳ��������λ���ĺ� ������Q13

/*
int main(){
	int a;
	cin >> a;
	for(int i=1; i<=a; i++){
		for(int j=1; j<=i; j++){
			cout << i << "*" << j << "=" << i*j << (i != j? " ":"\n");
		}
	}
	system("pause");
	return 0;
}
*/
// �˷��� ������Q14


int main() {
	int a;
	cin >> a;
	for (int i = a; i >= 0; i--) {
		for (int j = 1; j <= i; j++) {
			cout << i << "*" << j << "=" << i * j << (i != j ? " " : "\n");
		}
	}
	system("pause");
	return 0;
}

// ����˷��� ������Q15

/* ��������̫�� ��ѭ��
int fibnaci(int a){
	int fab;
	if(a <= 1){
		fab = (a==0?0:1);
		return fab;
	}
	fab = fibnaci(a-1) + fibnaci(a-2);
	return fab;
}

int main(){
	int a,fab;
	int fab1 =0;
	int fab2 =1;
	cin >> a;
	for(int i=0; i<=a; i++){
		if(i <= 1){
		fab2 = (i==0?0:1);
		cout << fab2 << (i==a?"":" ");
	}else{
		fab = fab1 + fab2;
		fab1 = fab2;
		fab2 = fab;
		cout << fab << (i==a?"":" ");
	}
	}
	system("pause");
	return 0;
}
*/
// 쳲��������� ������ʾ ������Q16
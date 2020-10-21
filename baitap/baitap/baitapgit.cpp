#include "iostream"
using namespace std;
int congtrunhanchia(int a, int b)
{
	cout << "nhap 2 so nguyen:"
		cin >> a >> b;


	cout << "tong la: " << a + b;
	cout << "hieu la: " << a - b;
	cout << "tich la: " << a * b;
	if (b != 0)
		cout << "tong la: " << a / b;
	return 0;
}
//chuvidientich
void main()
{
	int n;
	float a, b, c;
	float R;
	float P;
	float S;
	cout << "\n 1. Tinh chu vi & dien tich tam giac";
	cout << "\n 2. Tinh chu vi & dien tich hinh chu nhat";
	cout << "\n 3. Tinh chu vi & dien tich tron";
	cout << "\n Ban chon phuong an nao(1, 2 hay 3) = ";
	cin >> n;
	switch (n)
	{
	case 1:
	{
		do
		{
			cout << "\n Nhap cac canh cua tam giac:\n";
			cin >> a, b, c;
		} while (a < 0 || b < 0 || c < 0 || (a + b) <= c || (a + c) <= b || (b + c) <= a);
		P = (a + b + c);
		S = sqrt(P*(P / 2 - a)*(P / 2 - b)*(P / 2 - c) / 2);
		cout << "\n Chu vi tam giac :" << P;
		cout << "\n Dien tich tam giac :" << S;
		break;
	}
	case 2:
		do
		{
			cout << "\n Nhap chieu rong hcn: ";
			cin >> a;
			cout << ("\n Nhap chieu dai hcn: ");
			cin >> b;
		} while (a < 0 || b < 0);
		P = (a + b) * 2;
		S = a * b;
		cout << "\n Chu vi hinh vuong :" << P;
		cout << "\n Dien tich hinh vuong: " << S;
		break;
	case 3:
		do
		{
			cout << "\n Nhap ban kinh duong tron:";
			cin >> R;
		} while (R <= 0);
		P = 2 * PI * R;
		S = PI * R * R;
		cout << "\n Chu vi hinh tron :" << P;
		cout << "\n Dien tich hinh tron : " << S;
		break;
	default:
		cout << ("\n Exit");
		break;
	}
}
//phepcongrandom
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;

int random(int minN, int maxN) {
	return minN + rand() % (maxN + 1 - minN);
}

int main() {
	srand((int)time(0));
	int r;
	for (int i = 0; i < 2; ++i) {
		r = random(1, 100);
		printf("%d ", r);
	}
}


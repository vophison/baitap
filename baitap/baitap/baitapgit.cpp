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
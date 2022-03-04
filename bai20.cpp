#include<iostream>
using namespace std;
bool ktsnt(int n) {
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt((float)n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
bool ktscp(int n) {
	int i = 0;
	while (i * i <= n) {
		if (i * i == n) {
			return 1;
		}
		++i;
	}
	return 0;
}
bool ktsht(int n) {
	int S = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			S += i; 
	if (S == n)
		return 1; 
	return 0;
}
bool ktdx(int n) {
	int sodaonguoc = 0, chuso, tam = n;
	while (tam != 0) {
		chuso = tam % 10;
		sodaonguoc = sodaonguoc * 10 + chuso;
		tam /= 10;
	}
	if (sodaonguoc == n) return 1;
	else return 0;
}
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (ktsnt(n)) cout << n << " la so nguyen to." << endl;
	else cout << n << " khong la so nguyen to." << endl;
	if (ktscp(n)) cout << n << " la so chinh phuong." << endl;
	else cout << n << " khong la so chinh phuong." << endl;
	if (ktsht(n)) cout << n << " la so hoan thien." << endl;
	else cout << n << " khong la so hoan thien." << endl;
	if (ktdx(n)) cout << n << " la so doi xung." << endl;
	else cout << n << " khong la so doi xung." << endl;
	return 0;
}
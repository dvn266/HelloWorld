#include<iostream>
using namespace std;
int main() {
	char kv;
	int dt;
	double diemchuan, mon1 , mon2, mon3, tong;
	cout << "Cho biet khu vuc: " << endl;
	cin >> kv;
	cout << "Cho biet doi tuong: " << endl;
	cin >> dt;
	cout << "Nhap diem chuan: ";
	cin >> diemchuan;
	cout << "\nNhap diem cac mon: " << endl;
	cout << "Mon 1: ";
	cin >> mon1;
	cout << "Mon 2: ";
	cin >> mon2;
	cout << "Mon 3: ";
	cin >> mon3;
	tong = (mon1 + mon2 + mon3) / 3;
	switch (kv) {
	case 'A':tong = tong + 1.5;
	case 'B':tong = tong + 1.0;
	case 'C': tong = tong + 0.5;
	}
	switch (dt) {
	case 1: tong = tong + 1.5;
	case 2: tong = tong + 1.0;
	case 3: tong = tong + 0.5;
	}
	if ((tong >= diemchuan) && (mon1 != 0) && (mon2 != 0) && (mon3 != 0)) cout << "Trung tuyen!" << endl;
	else cout << "Khong trung tuyen!" << endl;
	return 0;
}
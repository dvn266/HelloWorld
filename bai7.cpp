#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int t, t500, t200, t100, t50, t20, t10;

    cout << "Nhap so tien: ";
    cin >> t;

    t500 = t / 500000;
    t = t - 500000 * t500;
    t200 = t / 200000;
    t = t - 200000 * t200;
    t100 = t / 100000;
    t = t - 100000 * t100;
    t50 = t / 50000;
    cout << ("So to tien cac loai:") << endl;
    cout << "Menh gia 500.000: " << t500 << endl;
    cout << "Menh gia 200.000: " << t200 << endl;
    cout << "Menh gia 100.000: " << t100 << endl;
    cout << "Menh gia 50.000: " << t50 << endl;
}

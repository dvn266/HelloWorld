#include <iostream>
#include <cstdlib>
using namespace std;
int Khoitaosongaunhien()
{
    return rand() % 500 + 1;
}
int Nguoichoidoan()
{
    int so;
    cout << endl << "Chon mot so ngau nhien tu 1 den 500: ";
    cin >> so;
    return so;
}
void Ketqua(int so, int songaunhien)
{
    if (so > songaunhien) {
        cout << "So cua ban lon hon." << endl;
    }
    else if (so < songaunhien) {
        cout << "So cua ban nho hon." << endl;
    }
    else {
        cout << "Chinh xac." << endl;
    }
}
int main()
{
    int songaunhien = Khoitaosongaunhien();
    int so;
    do {
        so = Nguoichoidoan();
        Ketqua(so, songaunhien);
    } while (so != songaunhien);
    return 0;
}

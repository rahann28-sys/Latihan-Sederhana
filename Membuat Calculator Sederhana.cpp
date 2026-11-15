#include <iostream>
using namespace std;

int main() {
    float a, b, c, hasil;
    char op1, op2;

    cout << "Selamat datang di calculator \n";
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan operator pertama (+, -, *, /): ";
    cin >> op1;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    cout << "Masukkan operator kedua (+, -, *, /): ";
    cin >> op2;
    cout << "Masukkan angka ketiga: ";
    cin >> c;

    // Menghitung angka pertama dan kedua (op1)
    if (op1 == '+') {
        hasil = a + b;
    } else if (op1 == '-') {
        hasil = a - b;
    } else if (op1 == '*') {
        hasil = a * b;
    } else if (op1 == '/') {
        hasil = a / b;
    } else {
        cout << "Operator pertama tidak ditemukan \n";
        return 0;
    }

    // Menghitung hasil sementara dengan angka ketiga (op2)
    if (op2 == '+') {
        hasil = hasil + c;
    } else if (op2 == '-') {
        hasil = hasil - c;
    } else if (op2 == '*') {
        hasil = hasil * c;
    } else if (op2 == '/') {
        hasil = hasil / c;
    } else {
        cout << "Operator kedua tidak ditemukan \n";
        return 0;
    }

    cout << "\nHasil perhitungan: " << a << " " << op1 << " " << b << " " << op2 << " " << c << " = " << hasil << endl;

    return 0;
}

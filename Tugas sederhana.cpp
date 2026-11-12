#include <iostream>

using namespace std;

int main() {
    int umur;

    cout << "Masukkan umur anda: ";
    cin >> umur;

    // Pengecekan kondisi dengan if-else if-else
    if (umur >= 0 and umur <= 5) {
        cout << "Balita" << endl;
    }
    else if (umur >= 6 and umur <= 12) {
        cout << "Anak-anak" << endl;
    }
    else if (umur >= 13 and umur <= 17) {
        cout << "Remaja" << endl;
    }
    else if (umur >= 18 and umur <= 59) {
        cout << "Dewasa" << endl;
    }
    else if (umur >= 60) {
        cout << "Lansia " << endl; 
    }
    else {
        cout << "Umur tidak valid " << endl;
    }
    
    return 0;

    
}

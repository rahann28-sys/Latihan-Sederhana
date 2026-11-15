#include <iostream>
using namespace std;
int main() {
    int n;
    int x;
    int y;
    int z;
    int hasil;
   cout << "Masukkan nilai ke n: ";
    cin >> n;
    x = 1;
    y = 0;
    z=0;
    cout << y << " " << x <<" ";
    for(int i=2; i < n; i++){
        hasil = x+y+z;
        z = y;
        y = x;
        x = hasil;
        cout << hasil << " ";
    }
    
    cin.get();
    return 0;
}
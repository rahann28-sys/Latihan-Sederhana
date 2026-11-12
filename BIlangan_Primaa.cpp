#include <iostream>
using namespace std;
int main(){
    for ( int i = 0; i <= 100; i++){
        int jumlah = 0;

        for ( int y = 1; y <= i; y++){
            if (i % y == 0){
                jumlah++;
            }
        }
        if (jumlah == 2){
            cout << i << " ";
        }
    }
    return 0;
}
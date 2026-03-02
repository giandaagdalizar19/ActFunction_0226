//library
#include <iostream>
using namespace std;
//deklarsi variabel
int p, l;
//implementasi fungsi dan prosedur
void input(){
    cout << "Masukkan Panjang : ";
    cin >> p;
    cout << "Masukkan Lebar : ";
    cin >> l;
}
int luasPersegi(){
    return p * l;
}
void output(){
    cout << "Hasilnya : " << luasPersegi();
}
int main(){ //mulai
    input();
    output();
 } //selesai
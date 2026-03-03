#include<iostream>
using namespace std;
 
int p, l;

void Input()
{
    cout << "Masukkan Panjang (dalam m): ";
    cin >> p;
    cout << "Masukkan Lebar (dalam m): ";
    cin >> l;
}

int Luas(int c, int n){
    return c*n;
}

int Jumlah(int a, int b, int c){
    return a+b+c;
}

void Output(){
    cout << "Panjang persegi: " << p << " m" << endl;
    cout << "Lebar persegi: " << l << " m" << endl;
    cout << "Luas persegi: " << Luas(p, l) << " m^2" << endl;  
}

int main(){
    Input();
    Output();
    cout << "Hasil penjumlahan: " << Jumlah(5, 6, 9);
}
#include<iostream>
using namespace std;
 
float p, l;

void Input()
{
    cout << "Masukkan Panjang (dalam cm): ";
    cin >> p;
    cout << "Masukkan Lebar (dalam cm): ";
    cin >> l;
}

float Luas(float c, float n){
    return c*n;
}

int Jumlah(int a, int b, int c){
    return a+b+c;
}

void Output(){
    cout << "Luas persegi: " << Luas(p, l) << " cm^2" << endl;  
}

int main(){
    Input();
    Output();
    cout << "Hasil penjumlahan: " << Jumlah(5, 6, 9);
}
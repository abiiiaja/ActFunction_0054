#include<iostream>
using namespace std;
 
float a,t;

void Input()
{
    cout << "Masukkan alas segitiga (dalam m): ";
    cin >> a;
    cout << "Masukkan tinggi segitiga (dalam m): ";
    cin >> t;
}

float Luas(float n, float y){
    return (n*y)/2;
}

void Output(){
    cout << "Luas segitiga: " << Luas(a, t) << " m^2" << endl;  
}

int main(){
    Input();
    Output();
}
#include<iostream>
using namespace std;
 
float a,t;

void Input()
{
    cout << "Masukkan alas segitiga (dalam cm): ";
    cin >> a;
    cout << "Masukkan tinggi segitiga (dalam cm): ";
    cin >> t;
}

float Luas(float n, float y){
    return 0.5*n*y;
}

void Output(){
    cout << "Luas segitiga: " << Luas(a, t) << " cm^2" << endl;  
}

int main(){
    Input();
    Output();
}
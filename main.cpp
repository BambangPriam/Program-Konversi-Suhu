#include <iostream>

using namespace std;

int main()
{
    float C,F,K,R;
    cout << "PROGRAM KONVERSI SUHU" << endl;
    cout << "Masukkan nilai Celcius : ";
    cin >> C;
    F = 1.8*C + 32;
    R = 0.8*C;
    cout << "Nilai Fahrenheit ="<<F<< endl<< "Nilai Reamur ="<<R;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int years[10];
    int i = 0;
    int a = 0;  
    while (i < 10) {
        int b = 0;
        cout << "Dato " << (i + 1) << ": ";
        cin >> b;

        if (b > a) {
            years[i] = b;
            a = b; 
            i++;
        } else {
            cout << "El dato es menor o igual que el anterior." << endl;
            cout << "Ingrese de nuevo." << endl;
        }
    }

    cout << "Datos ingresados:" << endl;
    for (int val : years) {
        cout << val << endl;
    }

    return 0;
}

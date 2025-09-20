#include <iostream>
using namespace std;

int main() {
    int h, m, s, t;
    cout<<"Horas: ";
    cin>>h;
    cout<<"Minutos: ";
    cin>>m;
    cout<<"Segundos: ";
    cin>>s;
    t = h * 3600 + m * 60 + s;
    cout << "Tiempo en segundos: " << t << endl;
    system("pause");
    return 0;
}

#include <iostream>
using namespace std;
float menor(float a, float b, float c) {
    float min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

int main() {
    float x, y, z;
    cout << "Ingrese 3 numeros: ";
    cin >> x >> y >> z;
    cout << "El menor es:" << menor(x, y, z) << endl;
    system("pause");
    return 0;
}

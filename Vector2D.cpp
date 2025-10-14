#include <iostream>
#include <cmath>

using namespace std;

class Vector2D{
    double x, y;

public:
    Vector2D(double x, double y):x(x), y(y){}
    Vector2D():x(0), y(0){}

    inline double magnitud() const { 
        return sqrt(x*x + y*y); 
    }
    void mostrar() const { 
        cout << "(" << x << ", " << y << ")\n"; 
    }
    Vector2D operator+(const Vector2D& v) const {
        return Vector2D(x + v.x, y + v.y);
    }
    friend double productoPunto(const Vector2D& a, const Vector2D& b);
};

double productoPunto(const Vector2D& a, const Vector2D& b) {

    return a.x * b.x + a.y * b.y;
}
int main(){
    Vector2D v1(3, 4), v2(1, 2);
    cout << "Magnitud: " << v1.magnitud() << endl;
    
    Vector2D v3 = v1 + v2;
    cout << "v1 + v2: "; v3.mostrar();

    cout << "Producto punto: " << productoPunto(v1, v2) << endl;

    auto superaUmbral = [](const Vector2D& v, double umbral)  -> bool{
        return v.magnitud() > umbral;
    };
    cout << "Ubral v1 > 5?: " << (superaUmbral(v1, 5) ? "Si" : "No") << endl;


    return 0;

} 

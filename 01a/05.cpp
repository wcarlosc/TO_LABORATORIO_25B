#include <iostream>
using namespace std;
double parkingCost(int h){
    if (h >= 19) return 12;
    return 0.5 * h + 3 - 0.5;
}

int main(){
    int h;
    cout<<"cantidad de horas:";
    cin>>h;
    cout<<"El costo del aparcamiento es: "<<parkingCost(h)<<endl;
    system("pause"); 
    return 0;
  
}

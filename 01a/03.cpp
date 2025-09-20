#include <iostream>
using namespace std;
#include <cstdlib>
int main(){
    int dice[6] = {0};
    int RandomNumber;
    for(int i = 0; i < 2000; i++){
        RandomNumber = rand() % 6 + 1;
        dice[RandomNumber - 1]++;
    }
    for(int i = 0; i < 6; i++){
        cout <<"Lado "<<(i+1)<<": "<< dice[i] << endl;
    }
    system("pause");
    return 0;
}

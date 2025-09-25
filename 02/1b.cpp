#include <iostream>
#include <vector>
using namespace std;

int countChange(int money, const vector<int>& coins, int i = 0) {
    if (money == 0) return 1;
    if (money < 0)  return 0;
    if (i == (int)coins.size()) return 0;
    
    return countChange(money - coins[i], coins, i) + countChange(money, coins, i + 1);
}

int main() {
    int money;
    const vector<int> coins = {20, 50, 100, 200};
    cout<<"monto:";
    cin>> money;
    cout << "Numero de maneras: " << countChange(money, coins) << endl; 
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    double hour, stavka, procent;
    cout <<"введите данные\n";
    cout << "кол-во отработанных часов "<<  endl;
    cin >> hour;
    
    cout << "ставка по часовой оплаты "<< endl;
    cin >> stavka;

    cout << "%премии"<< endl;
    cin >> procent;
    
    int summ=hour*stavka+hour*stavka*(procent*0.01);
    cout << "общая заработанная ставка S= " << summ << endl;
    return 0;
}


#include <iostream>
using namespace std;


void infa(int& hour,int& stavka, int& procent){
    cout << "кол-во отработанных часов"<<  endl;
    cin >> hour;
    
    cout << "ставка по часовой оплаты"<< endl;
    cin >> stavka;

    cout << "%премии"<< endl;
    cin >> procent;


}


int main() {
    int hour1, stavka1, procent1;
    infa(hour1,stavka1,procent1);
    double zarplata=hour1*stavka1+hour1*stavka1*(procent1*0.01);
    cout << zarplata;
    return 0;
}



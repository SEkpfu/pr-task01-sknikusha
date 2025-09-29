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

void summa(int& hour,int& stavka, int& procent){

    double zar_suma=hour*stavka+hour*stavka*(procent*0.01);
    int nalog=(hour*stavka+hour*stavka*(procent/100))*0.13;
    int pol_sum=(hour*stavka+hour*stavka*(procent/100))-nalog;

    cout << "общая заработная сумма " << zar_suma << endl;
    cout << "подоходный налог " << nalog << endl;
    cout << "сумма, получаемая работником на руки " << pol_sum << endl;

}

int main(){
    int hour, stavka, procent;
    cout <<"введите данные рабочего\n";
    infa(hour,stavka,procent);
    summa( hour, stavka, procent);

    return 0;
}
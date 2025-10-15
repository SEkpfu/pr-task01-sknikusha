#include <iostream>
using namespace std;


void infa(double& hour,double& stavka, double& procent){
    cout << "кол-во отработанных часов"<<  endl;
    cin >> hour;
    
    cout << "ставка по часовой оплаты"<< endl;
    cin >> stavka;

    cout << "%премии"<< endl;
    cin >> procent;

}

void summa(double& hour,double& stavka, double& procent, double& zar_sum, double& nalog,double& pol_sum){

    zar_sum=hour*stavka+hour*stavka*(procent*0.01);
    nalog=(hour*stavka+hour*stavka*(procent*0.01))*0.13;
    pol_sum=zar_sum-nalog;

}

int main(){
    double hour, stavka, procent;
    double zar_suma, nalog, pol_sum;
    cout <<"введите данные рабочего\n";
    infa(hour,stavka,procent);
    summa(hour, stavka, procent,zar_suma,nalog,pol_sum);

    cout << "общая заработная сумма " << zar_suma << endl;
    cout << "подоходный налог " << nalog << endl;
    cout << "сумма, получаемая работником на руки " << pol_sum << endl;

    return 0;
}


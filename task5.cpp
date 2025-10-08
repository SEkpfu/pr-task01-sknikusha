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

void summa(double& hour,double& stavka, double& procent, double& zar_sum, double& nalog){

    zar_sum=hour*stavka+hour*stavka*(procent*0.01);
    nalog=(hour*stavka+hour*stavka*(procent/100))*0.13;
    double pol_sum=(hour*stavka+hour*stavka*(procent/100))-nalog;

}

int main() {
    double hour1, stavka1,procent1, zar_sum1,nalog1;
    double hour2, stavka2,procent2, zar_sum2,nalog2;

    cout << "данные 1раб"<<  endl;
    infa(hour1,stavka1,procent1);
    summa(hour1,stavka1,procent1,zar_sum1,nalog1);


    cout << "данные 2раб"<<  endl;
    infa(hour2,stavka2,procent2);
    summa(hour2,stavka2,procent2,zar_sum2,nalog2);
    
    if((zar_sum1-nalog1)>(zar_sum2-nalog2)){
        cout<<"1rab"<< endl;
    }
    else{
        cout<<"2rab"<< endl;
    }

    cout << "сумма заработанная двумя s= " << (zar_sum1-nalog1)+(zar_sum2-nalog2) << endl;
    return 0;
}


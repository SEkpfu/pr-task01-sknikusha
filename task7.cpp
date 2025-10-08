#include<iostream>
using namespace std;

double hour, stavka,procent;

double nalog(double hour, double stavka, double procent){
    double nal=hour*stavka+hour*stavka*(procent*0.01);
    return nal*0.13 ;
  }

double sum(double hour, double stavka, double procent){
    double zarplata=hour*stavka+hour*stavka*(procent*0.01);
    return zarplata;
}

double finish(double hour, double stavka, double procent){
    double nal=nalog(hour,stavka,procent);
    double zar_sum=sum(hour,stavka,procent);
    return zar_sum-nal;
}

void infa(double& hour,double& stavka, double& procent){
    cout << "кол-во отработанных часов"<<  endl;
    cin >> hour;
    
    cout << "ставка по часовой оплаты"<< endl;
    cin >> stavka;

    cout << "%премии"<< endl;
    cin >> procent;
}

int main(){
    double summ=0;
    for(int i=1;i<6;++i){
        cout <<"введите данные раб номер " << i << endl;
        infa(hour,stavka,procent);
        summ+=finish(hour,stavka,procent);
    }


    cout << "общая заработанная сумма = " << summ << endl;

    cout << "средняя зп в бригаде = " << summ/5.0 << endl;
    return 0;
}

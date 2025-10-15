#include <iostream>
using namespace std;

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

 int main(){
    double hour,stavka,procent;
    cout <<"введите данные  рабочего\n";
    cout << "кол-во отработанных часов\n"<<  endl;
    cin >> hour;
    cout << "ставка по часовой оплаты\n"<< endl;
    cin >> stavka;
    cout << "%премии\n"<< endl;
    cin >> procent;
    cout << "общая заработанная ставка S= " << hour*stavka+hour*stavka*(procent*0.01) << endl;
    cout <<"налог = " << nalog(hour, stavka, procent) << endl;
    cout <<"сумма на руки " << finish(hour, stavka, procent) << endl;
    return 0;

 }

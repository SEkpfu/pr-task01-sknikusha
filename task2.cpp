#include <iostream>
using namespace std;

 double nalog(double hour, double stavka, double procent){
   double nal=hour*stavka+hour*stavka*(procent*0.01);
   return nal*0.13 ;
 }


 double suma(double hour, double stavka, double procent){
   double nal=nalog(hour,stavka,procent);
   return (hour*stavka+hour*stavka*(procent*0.01))-nal;
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
    double zarplata=suma(hour, stavka, procent);
    cout <<"сумма на руки " << zarplata << endl;
    return 0;

 }
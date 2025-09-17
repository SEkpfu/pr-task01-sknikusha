#include <iostream>
using namespace std;
#include <iomanip>


double nalog(double hour, double stavka, double procent){
    double nal=hour*stavka+hour*stavka*(procent*0.01);
    return nal*0.13 ;
  }
 
 
  double suma(double hour, double stavka, double procent){
    double nal=nalog(hour,stavka,procent);
    return (hour*stavka+hour*stavka*(procent*0.01))-nal;
  }


  void infa(int& hour,int& stavka, int& procent){
    cout << "кол-во отработанных часов"<<  endl;
    cin >> hour;
    
    cout << "ставка по часовой оплаты"<< endl;
    cin >> stavka;

    cout << "%премии"<< endl;
    cin >> procent;


}

int main(){
    int hour1, stavka1, procent1;
    int hour2, stavka2, procent2;

    string rab1;
    cout << "ВВедите имя рабочего1: ";
    cin >> rab1;
    cout <<"введите данные 1 рабочего\n";
    infa(hour1,stavka1,procent1);
    

    string rab2;
    cout << "ВВедите имя рабочего2: ";
    cin >> rab2;
    cout <<"введите данные 2 рабочего\n";
    infa(hour2,stavka2,procent2);
    

    

    double zarplata1 =suma(hour1,stavka1,procent1);
    double zarplata2 =suma(hour2,stavka2,procent2);

    

    if (zarplata1<1000){
        cout <<"зарплата меньше 1000" << rab1<< endl;
    }
    if (zarplata2<1000){
        cout <<"зарплата меньше 1000"<< rab2 << endl;
    }


    if (nalog(hour1, stavka1, procent1)>50){
        cout <<"налог больше 50 "<< rab1[0]<< "-"<< rab1[rab1.length()-1]<< endl;
    }
    if (nalog(hour2, stavka2, procent2)>50){
        cout <<"налог больше 50 "<< rab2[0]<< "-"<< rab2[rab2.length()-1]<< endl;
    }

    
    
    return 0;
}
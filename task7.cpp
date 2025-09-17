#include<iostream>
using namespace std;

int hour1, stavka1;
int hour2, stavka2;
int hour3, stavka3;
int hour4, stavka4;
int hour5, stavka5;

int sum(int hour, int stavka){
    int zarplata=hour*stavka;
    return zarplata;
}

void infa(int& hour,int& stavka){
    cout << "кол-во отработанных часов"<<  endl;
    cin >> hour;
    
    cout << "ставка по часовой оплаты"<< endl;
    cin >> stavka;

}

int main(){
    
    cout <<"введите данные 1раб"<< endl;
    infa(hour1,stavka1);
    int s1=sum(hour1,stavka1);
    
    cout <<"введите данные 2раб"<< endl;
    infa(hour2,stavka2);
    int s2=sum(hour2,stavka2);

    
    cout <<"введите данные 3раб"<< endl;
    infa(hour3,stavka3);
    int s3=sum(hour3,stavka3);

    
    cout <<"введите данные 4раб"<< endl;
    infa(hour4,stavka4);
    int s4=sum(hour4,stavka4);

    
    cout <<"введите данные 5раб"<< endl;
    infa(hour5,stavka5);
    int s5=sum(hour5,stavka5);

    double sr_zarplata=(s1+s2+s3+s4+s5)/5;

    cout << "общая заработанная сумма 1раб = " << s1 << endl;
    cout << "общая заработанная сумма 2раб = " << s2 << endl;
    cout << "общая заработанная сумма 3раб = " << s3 << endl;
    cout << "общая заработанная сумма 4раб = " << s4 << endl;
    cout << "общая заработанная сумма 5раб = " << s5 << endl;

    cout << "средняя зп в бригаде = " << sr_zarplata << endl;
    return 0;
}
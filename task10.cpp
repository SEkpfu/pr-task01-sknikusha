#include <iostream>
using namespace std;

double pays(double hours,double stavka){
    return hours*stavka;
}

double nal(double hours,double stavka){
    return hours*stavka*0.13;
}

double finish(double hours,double stavka){
    return pays(hours,stavka)-nal(hours,stavka);
}




int main(){
    const int MONTHS=3;
    const int RAB=4;
    const int FIELDS=4;

    float hours[RAB][MONTHS];
    float stavka[RAB];
    double data[RAB][MONTHS][FIELDS];


    for( int i=0; i<RAB;i++){
        cout << "Данные рабочего " << i+1;
        cout << "введите ставку оплаты работника №" << i+1 << endl;
        cin >> stavka[i];
        for(int j=0; j<MONTHS;j++){
            cout << "Количество часов в " << j+1 <<" месяце";
            cin >> hours[i][j];

        }
    }

    for (int i =0; i<RAB;i++){
        for (int j=0; j<MONTHS;j++){
            data[i][j][0] = finish(hours[i][j],stavka[i]); 
            data[i][j][1] = nal(hours[i][j],stavka[i]);
        }
    }

    cout << "Первый работник получил на руки во втором месяце: " << data[0][1][0]<< endl;

    double suma3;
    cout << "Общая сумма налога, удержанная у третьего работника за весь период: ";
    for (int i = 0; i < MONTHS; i++) {
        suma3 += data[2][i][2];
    }
    cout << suma3<<endl;

    cout << "Номер работника, заработавшего больше всех в третьем месяце: ";
    int bestrab3=0;
    double maxpays3=data[0][2][0];
    for(int i=0;i<RAB;i++){
        if(data[i][2][0]>maxpays3){
            maxpays3=data[i][2][0];
            bestrab3=i+1;
        }
    }
    cout << bestrab3+1<< endl;

    cout << "Общая сумма, заработанная всей бригадой за весь период: ";
    double allpays=0;
    for (int i=0; i<RAB;i++){
        for(int j=0;j<MONTHS;j++){
            allpays+=data[i][j][0];
        }
    }
    cout << allpays << endl;
    return 0;
    
}
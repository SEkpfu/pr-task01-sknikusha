#include <iostream>
using namespace std;
#include<vector>

int main(){
    
    cout << "введите кол-во рабочих" << endl;
    int k;
    cin >> k;

   

   vector<double> hours(k),stavka(k),pays(k),nal(k),finishsalary(k);

    for(int i=0;i<k;i++){
        cout << "введите кол-во часов работника №" << i+1 << endl;
        cin >> hours[i];
        cout << "введите ставку оплаты работника №" << i+1 << endl;
        cin >> stavka[i];
        pays[i]=hours[i]*stavka[i];
        nal[i]=pays[i]*0.13;
        finishsalary[i]=pays[i]-nal[i];

    }


    int nomerrabmin=0;
    double minzarplata=finishsalary[0];
    for(int i=1;i<k;++i){
        if(finishsalary[i]<minzarplata){
            minzarplata=finishsalary[i];
            nomerrabmin=i;
        }
    }
    cout << "номер работника, получившего меньше всех: " << nomerrabmin+1 << endl;


    int nomerrabmax=0;
    double maxzarplata=finishsalary[0];
    for(int i=1;i<k;++i){
        if(finishsalary[i]>maxzarplata){
            maxzarplata=finishsalary[i];
            nomerrabmax=i;
        }
    }
    cout << "максимальную из зарплат: " << maxzarplata << " и номер получившего ее работника: " << nomerrabmax+1 << endl;

    double vsay_sum_nal=0;
    for (int i=0;i<k;++i){
        vsay_sum_nal+=nal[i];
    }
    cout << "общую сумму налога, уплаченного всей бригадой: " << vsay_sum_nal << endl;

    cout << "номера рабочих, получивших на руки более 50000 руб: ";
    int rab_bolshe_50k=0;
    for (int i=0;i<k;++i){
        if((finishsalary[i])>50000){
            rab_bolshe_50k+=1;
            cout  << i+1<< " ";
        }
    }
    cout << "\nВcего таких рабочих: " <<  rab_bolshe_50k;

    return 0;

}



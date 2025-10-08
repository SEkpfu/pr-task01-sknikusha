#include <iostream>
using namespace std;
#include<vector>

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
    
    cout << "введите кол-во рабочих" << endl;
    int k;
    cin >> k;

   

   vector<double> hours(k),stavka(k),premiay(k),pays(k),nal(k),finishsalary(k);

    for(int i=0;i<k;++i){
        cout << "введите кол-во часов работника №" << i+1 << endl;
        cin >> hours[i];
        cout << "введите ставку оплаты работника №" << i+1 << endl;
        cin >> stavka[i];
        cout << "введите премию работника №" << i+1 << endl;
        cin >> premiay[i];
        pays[i]=sum(hours[i],stavka[i],premiay[i]);
        nal[i]=nalog(hours[i],stavka[i],premiay[i]);
        finishsalary[i]=finish(hours[i],stavka[i],premiay[i]);
    }


    int nomerrabmin=0;
    double minzarplata=finishsalary[0];
    int nomerrabmax=0;
    double maxzarplata=finishsalary[0];
    double vsay_sum_nal=0;
    
    for(int i=0;i<k;++i){
        if(finishsalary[i]<minzarplata){
            minzarplata=finishsalary[i];
            nomerrabmin=i;
        }

        if(finishsalary[i]>maxzarplata){
            maxzarplata=finishsalary[i];
            nomerrabmax=i;
        }

        vsay_sum_nal+=nal[i];
    }
    cout << "номер работника, получившего меньше всех: " << nomerrabmin+1 << endl;

    cout << "максимальную из зарплат: " << maxzarplata << " и номер получившего ее работника: " << nomerrabmax+1 << endl;

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




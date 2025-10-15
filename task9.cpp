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

double minelement(const vector<double>& arr, int size){

    int minindex=0;
    for (int i=1; i<size;i++){
        if(arr[i]<arr[minindex]){
            minindex=i;
        }
    }
    return minindex;
}

double maxelement(const vector<double>& arr, int size){

    int maxindex=0;
    int mxelement=arr[0];
    for (int i=1; i<size;i++){
        if(arr[i]>arr[maxindex]){
            maxindex=i;
        }
    }
    return maxindex;
}


int summ( const vector<double>& arr, int size){
    int count=0;
    for(int i=0; i<size;i++){
        count+=arr[i];

    }
    return count;
}



int main(){
    int k;
    cout<< "введите количество раб"<< endl;
    cin >> k;

    
    vector<double> hours(k),stavka(k),premiay(k),pays(k),nal(k),finishsalary(k);
    for(int i=0;i<k;i++){
        cout << "введите кол-во часов работника № " << i+1 << endl;
        cin >> hours[i];
        cout << "введите ставку оплаты работника № " << i+1 << endl;
        cin >> stavka[i];
        pays[i]=sum(hours[i],stavka[i],premiay[i]);
        nal[i]=nalog(hours[i],stavka[i],premiay[i]);
        finishsalary[i]=finish(hours[i],stavka[i],premiay[i]);

    }

    int nomerrabmin=minelement(finishsalary,k);
    cout << "номер работника, получившего меньше всех: " << nomerrabmin+1 << endl;

    int nomerrabmax=maxelement(finishsalary,k);
    cout << "номер работника, получившего больше всех: " << nomerrabmax+1 << endl;

    double vsay_sum_nal=summ(nal,k);
    cout << "общую сумму налога, уплаченного всей бригадой: " << vsay_sum_nal << endl;

    return 0;
}



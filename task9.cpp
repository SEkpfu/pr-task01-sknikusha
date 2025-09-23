#include <iostream>
using namespace std;
#include<vector>

double minelement(const vector<double>& arr, int size){

    int minindex=0;
    for (int i=0; i<size;i++){
        if(arr[i]<arr[minindex]){
            minindex=i;
        }
    }
    return minindex;
}

double maxelement(const vector<double>& arr, int size){

    int maxindex=0;
    int mxelement=arr[0];
    for (int i=0; i<size;i++){
        if(arr[i]>arr[maxindex]){
            maxindex=i;
        }
    }
    return maxindex,mxelement;
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

    
    vector<double> hours(k),stavka(k),pays(k),nal(k);
    for(int i=0;i<k;i++){
        cout << "введите кол-во часов работника № " << i+1 << endl;
        cin >> hours[i];
        cout << "введите ставку оплаты работника № " << i+1 << endl;
        cin >> stavka[i];
        pays[i]=hours[i]*stavka[i];
        nal[i]=pays[i]*0.13;

    }

    int nomerrabmin=minelement(pays,k);
    cout << "номер работника, получившего меньше всех: " << nomerrabmin+1 << endl;

    int nomerrabmax=maxelement(pays,k);
    cout << "номер работника, получившего меньше всех: " << nomerrabmax+1 << endl;

    double vsay_sum_nal=summ(nal,k);
    cout << "общую сумму налога, уплаченного всей бригадой: " << vsay_sum_nal << endl;

    return 0;
}
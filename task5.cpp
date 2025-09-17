#include <iostream>
using namespace std;

void infa(int& hour,int& stavka){
    cout << "кол-во отработанных часов"<<  endl;
    cin >> hour;
    
    cout << "ставка по часовой оплаты"<< endl;
    cin >> stavka;


}

int main() {
    int hour1, stavka1, sum1;
    int hour2, stavka2, sum2;

    cout << "данные 1раб"<<  endl;
    infa(hour1,stavka1);

    cout << "данные 2раб"<<  endl;
    infa(hour2,stavka2);

    sum1=hour1*stavka1;
    sum2=hour2*stavka2;
    
    if(sum1>sum2){
        cout<<"1rab"<< endl;
    }
    else{
        cout<<"2rab"<< endl;
    }

    cout << "сумма заработанная двумя s= " << sum1+sum2 << endl;
    return 0;
}

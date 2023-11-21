#include <iostream>
using namespace std;
int main () {
    int sharesbought = 800;
    int priceperShare = 37.00;
    double soldPershare = 32.45;
    int total_paid = sharesbought * priceperShare;
    int totalforSoldstock = sharesbought * soldPershare;
    int totalamontloss = total_paid - totalforSoldstock;

   cout << "Total amount paid for stock:$";
   cout << total_paid <<endl;
    cout <<"Total amount for selling stock:$";
    cout << totalforSoldstock <<endl;
    cout <<"-----------------"<<endl;
    cout <<"The total amount loss:$";
    cout << totalamontloss <<endl;

        return 0;
    }
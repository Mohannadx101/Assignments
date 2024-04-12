//Write a function that computes the balance of a bank account with a given initial balance
//and interest rate, after a given number of years. Assume interest is compounded yearly.

#include <iostream>
#include <cmath>
using namespace std;

double computeBalance(double ibalance, double intrst, int years) {

    double balance = ibalance;
    for (int i = 0; i < years; ++i) {
        balance *= (1 + intrst);
    }
    return balance;
}

int main() {
    //declare
    double ibalance;
    double intrst;
    int years;
   
    //request
    cout << "Please enter Initial balance, Interest rate, Years" << endl;
    
    cin >> ibalance;
    cin >> intrst;
    cin >> years;



    double final_balance = computeBalance(ibalance, intrst, years);

    cout << "Final balance after " << years << " years: $" << final_balance << std::endl;

    return 0;
}

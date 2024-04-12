#include <iostream>
using namespace std;

bool leap_year(int year) {
    if (year % 4 != 0) {
        return false; 
    }
    else if (year % 100 != 0) {
        return true;  
    }
    else if (year % 400 != 0) {
        return false;
    }
    else {
        return true;
    }
}

int main() {
        
    int year;
    cout << "please enter year : ";
    cin >> year;


    if (leap_year(year)) {
        cout << year << " is a leap year." << endl;
    }
    else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}

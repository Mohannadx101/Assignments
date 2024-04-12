//Write a program that reads an integer and displays, using asterisks, a filled and hollow
//square, placed next to each other. For example, if the side length is 5, the program
//should display

#include <iostream>
using namespace std;

int main() {
    int sideLength;

    cout << "Enter the side length of the square: ";
    cin >> sideLength;

    if (sideLength <= 0) {
        cout << "You must enter a postive number" << endl;
        return 1;
    }

    cout << "Filled Square    Hollow Square" << endl;
    for (int i = 0; i < sideLength; ++i) {
        for (int j = 0; j < sideLength; ++j) {
            cout << "*";
        }
        cout << "    ";

        for (int j = 0; j < sideLength; ++j) {
            if (i == 0 || i == sideLength - 1 || j == 0 || j == sideLength - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}



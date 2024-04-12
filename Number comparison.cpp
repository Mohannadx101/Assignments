#include <iostream>
#include <stdlib.h>
using namespace std;

bool all_the_same(double x, double y, double z) {
	if (x == y && y == z) {
		return true;
	}
	else {
		return false;
	}
}

bool all_different(double x, double y, double z) {
	if (x != y && y != z && x != z) {
		return true;
	}
	else {
		return false;
	}
}

bool sorted(double x, double y, double z) {
	if (x <= y && y <= z) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	double x, y, z;
	cout << "please enter x, y, z" << endl;
	cin >> x >> y >> z;
	


	cout << "% Testing %";
	cout << endl;
	if (all_the_same(x, y, z)) {
		cout << "All the same !" << endl;
	}
	if (all_different(x, y, z)) {
		cout << "All different !" << endl;

	}
	if (sorted(x, y, z)) {
		if (!all_the_same(x, y, z)) {
			cout << "Sorted !" << endl;
		}
		else {
			cout << "Not sorted !" << endl;
		}
	}



	return 0;
}

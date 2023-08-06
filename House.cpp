#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int stars = 1;
	if (n % 2==0){
		stars++;
	}
	int rooflenght = ceil(n/2.0);
	int padding = (n - stars) / 2;
	for (int i = 0; i < rooflenght; i++) {
		for (int i = 0; i < padding; i++) {
			cout << "-";
		}
		for (int i = 0; i < stars; i++) {
			cout << "*";
		}
		for (int i = 0; i < padding; i++) {
			cout << "-";
		}
		cout << endl;
		stars += 2;
		padding -= 1;
	}
	for (int i = 0; i < n / 2; i++) {
		cout << "|";
		for (int j = 0; j < n - 2; j++) {
			cout << "*";
		}
		cout << "|" << endl;
	}
	return 0;
}
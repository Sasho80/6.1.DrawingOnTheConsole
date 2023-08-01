#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	//Print the top part
	for (int i = 0; i < 2*n; i++){
		cout << "*";
	}
	for (int i = 0; i < n; i++){
		cout << " ";
	}
	for (int i = 0; i < 2*n; i++){
		cout << "*";
	}
	cout << endl;
	//print middle part
	for (int i = 0; i < n - 2; i++) {
		cout << "*";
		for (int j = 0; j < 2 * n - 2; j++) {
			cout << "/";
		}
		cout << "*";
		for (int r = 0; r < n; r++) {
			cout << ((i == (n - 1) / 2 - 1) ? '|' : ' ');
		}
		cout << "*";
		for (int j = 0; j < 2 * n - 2; j++) {
			cout << "/";
		}
		cout << "*";
		cout << endl;
	}
	//print bottom part
	for (int i = 0; i < 2*n; i++){
		cout << "*";
	}
	for (int i = 0; i < n; i++) {
		cout << " ";
	}
	for (int i = 0; i < 2 * n; i++) {
		cout << "*";
	}
	cout << endl;
}

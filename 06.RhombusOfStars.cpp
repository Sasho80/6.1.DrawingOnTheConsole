#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n <= 2) {
		for (int r = 0; r < n - 1; r++) {
			for (int c = 0; c < n - r - 1; c++) {
				cout << " ";  //Print top row
			}
			cout << "*";
		}
		cout << endl;
		for (int c = 0; c < n; c++) {
			cout << "*";  //Print mid row
			cout << " ";
		}
		cout << endl;
		for (int r = 0; r < n - 1; r++) {
			for (int c = 0; c < n - r - 1; c++) {
				cout << " "; //Print bottom row
			}
			cout << "*";
		}
		cout << endl;
	}
	if (n > 2) {
		for (int r = 0; r < n - (n - 1); r++) {
			for (int c = 0; c < n - r - 1; c++) {
				cout << " ";    //Print first row
			}
			cout << "*";
		}
		cout << endl;
		for (int r = 1; r <= n - (n - 1); r++) {
			for (int c = 0; c < n - r - 1; c++) {
				cout << " ";   //Print second row
			}
			cout << "*" << " " << "*";
		}
		cout << endl;
		if (n>3){
			for (int r = 2; r < n -1; r++) {
				for (int c = 0; c < n - r - 1; c++) {
					cout << " ";  
				}
				for (int c = 0; c <r+1; c++) {
					cout << "*"; 
					cout << " ";
				}
				cout << endl;
			}
		}
		for (int r = 0; r < n; r++) {
			cout << "*";  //Print mid row
			cout << " ";
		}
		if (n > 3) {
			cout << endl;
			for (int r = 2; r <n - 1; r++) {
				for (int c = 0; c < n - r - 1; c++) {
					cout << " ";   
				}
				for (int c = 0; c <r+1; c++) {
					cout << "*";
					cout << " ";
				}
				cout << endl;
			}
		}
		if (n==3) {
			cout << endl;
		}
		for (int r = 1; r <= n - (n - 1); r++) {
			for (int c = 0; c < n - r - 1; c++) {
				cout << " ";     //Print second row
			}
			cout << "*" << " " << "*";
		}
		cout << endl;
		for (int r = 0; r < n - (n - 1); r++) {
			for (int c = 0; c < n - r - 1; c++) {
				cout << " ";    //Print first row
			}
			cout << "*";
		}
		cout << endl;
	}
}

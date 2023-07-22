#include <iostream>
using namespace std;
int main() {
	int n;
    cin >> n;
	//print the top row + - - - +
	cout << "+";
	for (int i = 0; i < n-2;  i++){
		cout << " -";
	}
	cout << " +" << endl;
	//print the mid row | - - - |
	for (int  r= 0;  r < n-2; r++){
        cout<<"|";
		for (int c = 0; c < n-2; c++){
			cout << " -";
		}
		cout << " |"<<endl;
	}
	//print the bottom row + - - - +
	cout << "+";
	for (int i = 0; i < n - 2; i++) {
		cout << " -";
	}
	cout << " +" << endl;
}

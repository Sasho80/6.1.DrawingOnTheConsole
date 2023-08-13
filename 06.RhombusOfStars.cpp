#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	int colsCnt = 1;
	// first part
	for (int row = 0; row < n - 1; row++) {
		cout << string(n - colsCnt,' ');

		for (int col = 0; col < colsCnt; col++) {
			cout << "* ";
		}
		cout << endl;
		colsCnt++;
	}
	// middle part
	for (int col = 0; col < n; col++){
		cout << "* ";
	}
	cout << endl;
	//bottom part
	colsCnt = n-1;
	for (int row = 0; row < n-1 ; row++) {
		cout << string(n - colsCnt,' ');

		for (int col = 0; col < colsCnt; col++) {
			cout << "* ";
		}
		cout << endl;
		colsCnt--;
	}
	return 0;
}

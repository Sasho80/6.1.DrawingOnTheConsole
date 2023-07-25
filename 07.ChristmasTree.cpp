#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	n = n + 1;
	int r=0;
	for (; r < n; r++) {
		string spaces, stars;
		if (r == 0) {
			for (int i = 0; i < r; i++) {
				stars += '*';
			}
			for (int i = 0; i < n - r; i++) {
				spaces += ' ';
			}
			cout << spaces;
			cout << "|";
			cout << spaces << endl;
		}
		else if (r < n-1) {
			for (int i = 0; i < r; i++) {
				stars += '*';
			}
			for (int i = 0; i < n - r-1; i++) {
				spaces += ' ';
			}
			cout <<spaces<<stars;
			cout << " | ";
			cout <<stars<<spaces<< endl;
		}
		else if (r<n) {
			for (int i = 0; i < r; i++) {
				stars += '*';
			}
			for (int i = 0; i < n - r; i++) {
				spaces += ' ';
			}
			cout<<stars;
			cout << " | ";
			cout << stars << endl;
		}
	}
	return 0;
}

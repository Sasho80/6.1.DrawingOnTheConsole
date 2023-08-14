#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	//top part
	int left = (n-1) / 2;
	int right = n / 2;
	for (int row= 0; row < (n-1)/2; row++){
		for (int col = 0; col < n; col++){
			if (col==left||col==right){
				cout << '*';
			}
			else{
				cout << '-';
			}
		}
		cout << endl;
		left--;
		right++;
	}
	//middle part
	if (n>1)
	{
		cout << '*';
		cout << string(n - 2, '-');
		cout << '*';
		cout << endl;
	}
	else{
		cout << '*';
	}
	//bottom part
	left = 1;
	right = n - 2;
	for (int row = 0; row < (n-1) / 2; row++) {
		for (int col = 0; col < n; col++) {
			if (col == left || col == right) {
				cout << '*';
			}
			else {
				cout << '-';
			}
		}
		cout << endl;
		left++;
		right--;
	}
	return 0;
}

#include <iostream>
using namespace std;
int fact (int i) {
	int result = 1;
	while (i > 0) {
		result = result * i;
		i = i-1;
	}
	return(result);
}

int main() {
	int n;
	cout << "Enter number: ";
	cin >> n;
	while (N < 0 ) {
		cout << "Re enter: ";
		cin >> n;
	}
	cout << n << "! = " << fact(n) << endl;
	return(0);
}
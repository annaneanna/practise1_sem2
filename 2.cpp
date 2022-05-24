#include <iostream>
#include "windows.h"
using namespace std;


int main() {
	int n;
	cin >> n;
	while (n > 0) {
		cout << n << endl;
		n--;
		Sleep(1000);
	}
	return 0;
}

#include <iostream>
using namespace std;

double calculator(double a, double b, char operation) {
    switch (operation) {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    default:
        return -1;
    }
}

int main() {
    double a, b;
    char op;
    cin >> a >> b >> op;
	

    cout << calculator(a, b, op);
	return 0;
}
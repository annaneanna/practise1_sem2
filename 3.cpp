#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    if (n % 100 > 10 and n % 100 < 21)
        cout << n << " " << "yablok" << endl;
    else if (n % 10 == 0 or n % 10 > 4)
        cout << n << " " << "yablok" << endl;
    else if (n % 10 == 1)
        cout << n << " " << "yabloko" << endl;
    else if (n % 10 > 1 and n % 10 < 5)
        cout << n << " " << "yabloka" << endl;
    return 0;
}
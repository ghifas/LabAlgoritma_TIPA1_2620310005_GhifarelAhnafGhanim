#include <iostream>
using namespace std;

int main() {
    int a = 0;

    for (int i = 2; i <= 20; i += 2) {
        a += i;
        cout << i;
        if (i < 20) {
            cout << " + ";
        }
    }

    cout << " = " << a << endl;

    return 0;
}
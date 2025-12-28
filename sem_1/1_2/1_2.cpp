#include <iostream>
using namespace std;

int main() {
setlocale(LC_ALL, "RU");
    float a, b;
    cin >> a >> b;
    if (b == 0) {
        cout << "0 На 0 не делится!!!" << endl;
    }
    else {
        cout << a / b << endl;
        return 0;
    }
}
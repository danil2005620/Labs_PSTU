#include <iostream> 
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int N;
    cin >> N;
    if (N <= 2) {
        cout << "Введите число больше 2." << endl;
    }
    else {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
    return 0;

}

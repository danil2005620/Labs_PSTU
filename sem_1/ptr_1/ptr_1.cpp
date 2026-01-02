#include <iostream> 
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int N;
    cout << "¬ведите изначальное число: ";
    cin >> N;
    int* ptr = &N;
    cout << "¬ведите измененное число: ";
    cin >> *ptr;
    cout << N << endl;
    return 0;
}
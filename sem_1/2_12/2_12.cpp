#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int N, max, min, tmp;
    cout << "Введите количество элементов:";
    cin >> N;
    cin >> min;
    max = min;
    for (int i = 2; i <= N; i++) {
        cin >> tmp;
        if (max < tmp) { max = tmp; }
        if (min > tmp) { min = tmp; }
    }
    cout << "Сумма максимального и минимального члена последовательности: " << max + min << endl;
    return 0;
}
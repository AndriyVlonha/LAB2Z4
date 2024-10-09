#include <iostream>
#include <bitset>
#include <windows.h>
using namespace std;

struct CompactData {
    unsigned int a : 4; // 4 біти для a
    unsigned int b : 4; // 4 біти для b
    unsigned int c : 7; // 7 біт для c
    unsigned int d : 5; // 5 біт для d
    unsigned int e : 1; // 1 біт для e
    unsigned int padding : 3; // 3 біти залишаються невикористаними (запас)
};

int main() {
    SetConsoleOutputCP(1251);
    CompactData data;

    data.a = 12; // Максимальне значення для a
    data.b = 9;  // Максимальне значення для b
    data.c = 1940 - 1940;  // Мінімальне значення для c
    data.d = 31; // Максимальне значення для d
    data.e = 1;  // Максимальне значення для e

    cout << "Результат (бінарно): " << endl;
    cout << bitset<4>(data.a) << " " << bitset<4>(data.b) << " "
        << bitset<7>(data.c) << " " << bitset<5>(data.d) << " " << bitset<1>(data.e) << endl;

    return 0;
}

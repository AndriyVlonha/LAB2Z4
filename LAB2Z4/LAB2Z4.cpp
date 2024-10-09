#include <iostream>
#include <bitset>
#include <windows.h>
using namespace std;

struct CompactData {
    unsigned int a : 4; // 4 ��� ��� a
    unsigned int b : 4; // 4 ��� ��� b
    unsigned int c : 7; // 7 �� ��� c
    unsigned int d : 5; // 5 �� ��� d
    unsigned int e : 1; // 1 �� ��� e
    unsigned int padding : 3; // 3 ��� ����������� ��������������� (�����)
};

int main() {
    SetConsoleOutputCP(1251);
    CompactData data;

    data.a = 12; // ����������� �������� ��� a
    data.b = 9;  // ����������� �������� ��� b
    data.c = 1940 - 1940;  // ̳������� �������� ��� c
    data.d = 31; // ����������� �������� ��� d
    data.e = 1;  // ����������� �������� ��� e

    cout << "��������� (������): " << endl;
    cout << bitset<4>(data.a) << " " << bitset<4>(data.b) << " "
        << bitset<7>(data.c) << " " << bitset<5>(data.d) << " " << bitset<1>(data.e) << endl;

    return 0;
}

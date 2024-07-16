#include <iostream>
using namespace std;

int main() {
    float amt, vala, valb, valc, vald;
    vald = 0;
    vala = 0;
    valc = 0;
    valb = 0;
    cout << "投注金額： ";
    cin >> amt;
    cout << "賭幾號馬贏 (一至六號): ";
    cin >> vala;
    cout << "總投注次數： ";
    cin >> vald;
    if (amt < 1500) {
        cout << "投注" << amt << "元，賭" << vala << "號馬贏。\n";
        int N = 7; 
        int i = 1;
        while (i < vald) {
            for (int i = 1; i < vald + 1; i++)
            valb = rand() % N;
            cout << "比賽結果是 " << valb << "號馬贏了。\n";
            i = i + 1;
        }
    }
    while (amt >= 1500) {
        cout << "投注" << amt << "元，賭" << vala << "號馬贏。\n";
        int N = 7; 
        for (int i = 1; i < vald + 2; i++)
        valb = rand() % N;
        int j = 1;
        while (j < vald) {
            int i = 1;
            for (int i = 1; i < vald + 1; i++)
            valb = rand() % N;
            while (vala != valb) {
                cout << "比賽結果是 " << valb << "號馬贏了。\n";
                for (int i = 1; i < vald + 1; i++)
                valb = rand() % N;
                j = j + 1;
            }
        }
        break;
    }
}
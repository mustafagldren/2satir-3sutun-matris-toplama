﻿// 

#include <iostream>
using namespace std;

int main(void)
{
    setlocale(LC_ALL, "Turkish");
    int a[2][3], b[2][3], c[2][3];
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            cout << "A MATRİSİ " << i << "-" << j << ":";
            cin >> a[i][j];
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            cout << "B MATRİSİ " << i << "-" << j << ":";
            cin >> b[i][j];
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "\n\n";

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }


    system("pause");
    return 0;
}


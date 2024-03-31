#include <iostream>
using namespace std;
int main() {
    const int kol = 5;
    int a[kol], b[kol], c[kol + kol], i, j, k;
    cout << "Input first massive(5 elements)";
    for (i = 0; i < kol; i++)
        cin >> a[i];
    cout << "input second massive(5 elements)";
    for (i = 0; i < kol; i++)
        cin >> b[i];
    i = 0, j = 0, k = 0;
    do {
        while (a[i] < b[j] && i < kol)
        {
            c[k++] = a[i];
            i++;
        }
        while (a[i] > b[j] && j < kol)
        {
            c[k++] = b[j];
            j++;
        }
        while (a[i] == b[i] && i < kol && j < kol)
        {
            c[k++] = a[i++];
            c[k++] = b[j++];
        }
        if (i == kol)
            while (j < kol)
                c[k++] = b[j++];
        if (j == kol)
            while (i < kol)
                c[k++] = a[i++];
    } while (k < kol + kol);
        for (i = 0; i < kol + kol; i++) {
            cout << c[i] << ' ';
        
    }
}
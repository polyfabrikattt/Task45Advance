#include <iostream>
using namespace std;
int main() {
    const int kol = 5;
    int a[kol], b[kol], c[kol + kol], i, ii, iii;
    cout << "Input first massive(5 elements)";
    for (i = 0; i < kol; i++)
        cin >> a[i];
    cout << "input second massive(5 elements)";
    for (i = 0; i < kol; i++)
        cin >> b[i];
    i = 0, ii = 0, iii = 0;
    do {
        while (a[i] < b[ii] && i < kol)
        {
            c[iii++] = a[i];
            i++;
        }
        while (a[i] > b[ii] && ii < kol)
        {
            c[iii++] = b[ii];
            ii++;
        }
        while (a[i] == b[i] && i < kol && ii < kol)
        {
            c[iii++] = a[i++];
            c[iii++] = b[ii++];
        }
        if (i == kol)
            while (ii < kol)
                c[iii++] = b[ii++];
        if (ii == kol)
            while (i < kol)
                c[iii++] = a[i++];
    } while (iii < kol + kol);
        for (i = 0; i < kol + kol; i++) {
            cout << c[i] << ' ';
        
    }
}
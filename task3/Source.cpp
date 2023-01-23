/*henerates two arrays and combines them into one*/

#include <iostream>
#include <conio.h>
using namespace std;
int i, n, k, f;
double a[12], b[12], c[25];
void main()
{
    cout << "Enter Num of Elements Mas1:" << endl; cin >> n;

    for (i = 0; i < n; i++)
        a[i] = rand() % 256;

    cout << endl << "Mas:" << endl;
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl << "Enter Num of Elements Mas2:" << endl;  cin >> k;

    for (i = 0; i < k; i++)
        b[i] = rand() % 128;

    cout << endl << "Mas2:" << endl;
    for (i = 0; i < k; i++)  cout << b[i] << " ";

    cout << endl << "Number elements of insert:" << endl; cin >> f;
    for (i = 0; i < f; i++) { c[i] = a[i]; }
    for (i = f; i < f + k; i++) { c[i] = b[i - f]; }
    for (i = f + k; i <= n + k; i++) { c[i] = a[i - k]; }

    cout << endl << "Result:" << endl;
    for (i = 0; i < n + k; i++)
        cout << c[i] << " ";
}
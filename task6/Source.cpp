/*array sorting by the shell method*/

#include <iostream>
#include <ctime>
using namespace std;
int i, j, n, d, s;


void Shell(int A[], int n)
{
    d = n;
    d = d / 2;
    while (d > 0)
    {
        for (i = 0; i < n - d; i++)
        {
            j = i;
            while (j >= 0 && A[j] > A[j + d])
            {
                s = A[j];
                A[j] = A[j + d];
                A[j + d] = s;
                j--;
            }
        }
        d = d / 2;
    }
    for (i = 0; i < n; i++) cout << A[i] << " ";
}

int main()
{
    srand(time(0));
    cout << "Array size > "; cin >> n;
    int* A = new int[n];
    for (i = 0; i < n; i++)
    {
        A[i] = rand() % 100;;
    }
    cout << "\nArray: \n";
    for (i = 0; i < n; i++)
        cout << A[i] << " ";

    cout << "\nSort array: \n";
    Shell(A, n);
    delete[] A;
    return(0);
}
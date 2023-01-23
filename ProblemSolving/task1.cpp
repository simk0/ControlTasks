
/*the program draws a rhombus according to the size specified on the keyboard*/
#include <iostream>
using namespace std;

int main()
{
	char r = '*', p = ' ';
	int n = 7, z = 1;
	cout << "enter size" << endl; cin >> n;
	for (int i = 0; i < n / 2 + 1; i++)
	{
		int prob = (n - z) / 2;
		for (int j = 0; j < prob; j++)
			cout << p;
		for (int k = 0; k < z; k++)
			cout << r;
		cout << endl;


		z = z + 2;
	}
	z = n - 2;

	for (int i = n / 2; i > 0; i--)
	{
		int prob = (n - z) / 2;
		for (int j = 0; j < prob; j++)
			cout << p;
		for (int k = 0; k < z; k++)
			cout << r;
		cout << endl;
		z = z - 2;
	}

	system("pause");
}



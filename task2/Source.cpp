/*the program calculates a discount on the purchased product*/

#include <iostream>
#include "windows.h"

using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    unsigned int count = 0;
    float cost = 0.0f;
    char discont = 'n';
    int valueDiscont[2] = { 1000, 500 };

    cout << "¬вед≥ть к≥льк≥сть товару: "; cin >> count;
    cout << "¬вед≥ть ц≥ну за одиницю: "; cin >> cost;

    cost *= count;

    if (cost > 500) {

        unsigned int i = 0;

        while (cost / valueDiscont[i++] <= 1);

        cout << "Discont - " << valueDiscont[--i] / 100 << "%" << endl;
        cost = cost - (cost * valueDiscont[i] / 10000);
    }
    cout << "—ума: " << cost << endl;


    system("PAUSE");
    return EXIT_SUCCESS;

}
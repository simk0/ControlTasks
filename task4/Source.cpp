/*the program reads data from a file about apartments and gives information about the best price*/

#include <iostream>
#include <fstream>
#include <conio.h>
#include <Windows.h>

using namespace std;

struct Rieltor
{
    char owner[20], place[20];
    int room;
    float cost;
};


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n = 0; float rem = 0;
    int min = 1000000;
    Rieltor* List; // �������� �� ���������
    ofstream fout;
    fout.open("dtxt.txt", ios::app);
    fout.close();
    ifstream fin("dtxt.txt"); // �������� ����� ��� ������� if(Ifin)
    if (!fin.is_open())
    {
        cout << "������� �������� ����� ��� �������";
    }
    else
    {
        fin >> n;
        List = new Rieltor[n]; // ��������� ���������� ������ �������� for(int i=0; i<n; i++)
        for (int i = 0; i < n; i++)
        {
            fin >> List[i].owner >> List[i].place >> List[i].room >> List[i].cost;

            if (rem < List[i].cost) // ����� �������������
            {
                rem = List[i].cost;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if ((min > List[i].cost))
            {
                min = List[i].cost;
            }
        }


        for (int i = 0; i < n; i++)

            cout << "\n��'� ��������: " << List[i].owner << " \n" << "̳��� ������������: "
            << List[i].place << "\n" "ʳ�-��� �����: " << List[i].room << "\n" "������� �����: "
            << List[i].cost << "���." << endl;


        for (int i = 0; i < n; i++)

            if (List[i].cost == rem)

                cout << "\n���������� ����\n" << "��'� ��������: " << List[i].owner << " \n"
                << "̳��� ������������: " << List[i].place << "\n" "ʳ�-��� �����: "
                << List[i].room << "\n" "������� �����: " << List[i].cost << "���." << endl;
        for (int i = 0; i < n; i++)

            if (List[i].cost == min)

                cout << "\n�������� ����\n" << "��'� ��������: "
                << List[i].owner << " \n" << "̳��� ������������: "
                << List[i].place << "\n" "ʳ�-��� �����: "
                << List[i].room << "\n" "������� �����: " << List[i].cost << "���." << endl;

        fin.close(); // �������� �����

    }
}
#include <windows.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    struct building
    {

        string inmate;

        string hostel;

        int floor;

        float price;

    };




    building room1;


    room1.inmate = "Максим";

    room1.hostel = "Внту";

    room1.floor = 6;

    room1.price = 100;



    cout << "Житель Гуртожитка: " << room1.inmate << endl;

    cout << "Гуртожиток: " << room1.hostel << endl;

    cout << "Поверх: " << room1.floor << endl;

    cout << "Ціна: " << room1.price << "$" << endl;



    return 0;
}
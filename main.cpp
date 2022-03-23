#include <iostream>
#include <fstream>
#include "vopros.h"
#include "Create.h"
#include "database.h"
#include "Use_test.h"

using namespace std;

// ====================================================================================================

const string Data = "C:/qt_creator/HomeWork_Ex10/";          // ПУТЬ ДО ПАПКИ ХРАНЕНИЯ. НЕ ФАЙЛА

// ====================================================================================================
int main()
{
    while(true)
    {

        int n;

        cout << "1.Create" << '\n' << "2. Use being test" << '\n';
        cout << ">>> ";
        cin >> n;
        system("cls");

        if (n == 1)
        {
            Create(Data);
        }
        else if (n == 2)
        {
            Use_test(Data);
        }
    }
}

#ifndef USE_TEST_H
#define USE_TEST_H
#include <iostream>
#include <fstream>
#include "database.h"

using namespace std;

void Use_test(string Data)
{
        ifstream F;
        int num, otvet, ball;
        F.open(Data+"quantity" ".txt");
        F >> num;
        F.close();
        Database Base[num];
        for(int i=0; i<num; i++)
        {
            Database Base[i];
        }

        for(int i=0; i<num; i++)
        {
            F.open(Data+"Vopross"+to_string(i+1)+".txt");
            getline(F >>ws, Base[i].string1);
            getline(F >>ws, Base[i].string2);
            getline(F >>ws, Base[i].string3);
            F >> Base[i].int1;
            F.close();

        }

        for(int i=0; i<num; i++)
        {

                cout << "Questions " << i+1<< ":" << '\n';
                cout << Base[i].string1 << '\n';
                cout << '\n';
                cout << "Answer options:" << '\n';
                cout << Base[i].string2 << '\n';
                cout << Base[i].string3 << '\n';
                cout << '\n';
                cout << "You answer? (1 or 2)" << '\n';
                cout << ">>> ";
                cin  >> otvet;
                if(otvet == Base[i].int1)
                {
                    ball += 1;
                }
                else
                {}
                system("cls");
        }
        cout << "You scored " << ball << " point from " << num << " points max" << '\n';
        cout << '\n';

}

#endif // USE_TEST_H

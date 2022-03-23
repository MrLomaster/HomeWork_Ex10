#ifndef CREATE_H
#define CREATE_H
#include "vopros.h"
#include <iostream>
#include <fstream>

using namespace std;
void Create(string Data)
{

    ofstream FilesVopros;
    string text, var1, var2;
    int n, trueanswer;

    cout << "Number of questions?" << '\n';
    cout << ">>> ";
    cin >> n;
    FilesVopros.open(Data+"quantity.txt");
    FilesVopros << n;
    FilesVopros.close();
    Vopros a[n];
    for(int i=0; i<n; i++)
    {
        Vopros a[i];
    }
    system("cls");
    cout << "Create massive complete" << '\n';
    cout << endl;
    for(int i=0; i<n; i++)
    {
       cout << "Fill " << i + 1 << " Question" << '\n';
       cout << endl;

       cout << "This question" << '\n' << ">>> ";
       getline(cin >>ws, text);
       a[i].Qtext = text;
       cout << endl;

       cout << "First Choice" << '\n' << ">>> ";
       getline(cin >>ws, var1);
       a[i].Var1 = var1;
       cout << endl;

       cout << "Second Choice" << '\n' << ">>> ";
       getline(cin >>ws, var2);
       a[i].Var2 = var2;
       cout << endl;

       cout << "True Choice (1 or 2)" << '\n' << ">>> ";
       cin >> trueanswer;
       a[i].Good = trueanswer;
       cout << endl;

       FilesVopros.open(Data+"Vopross"+to_string(i+1)+".txt");

       FilesVopros << a[i].Qtext+"\n";
       FilesVopros << a[i].Var1+"\n";
       FilesVopros << a[i].Var2+"\n";
       FilesVopros << to_string(trueanswer)+"\n";
       FilesVopros.close();

       system("cls");
       cout << "Continue...";
       cout << '\n';
     }
     cout << "Excellent, you create test!" << '\n';
     cout << '\n';
}
#endif // CREATE_H

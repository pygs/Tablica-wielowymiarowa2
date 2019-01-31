#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <conio.h>

using std::cin;
using std::cout;
using std::endl;
int i, j;

int main()
{
    srand(time(NULL));
    double tab[4][3];
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            tab[i][j] = (rand() % 10) + 1;
        }
    }
    for(j=0; j<3; j++)
    {
        for(i=0; i<4; i++)
        {
            cout << tab[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl << endl;
    for(i=1; i<4; ++i)
    {
        tab[0][0] += tab[i][0];
    }
    for(i=1; i<4; ++i)
    {
        tab[0][1] += tab[i][1];
    }
    for(i=1; i<4; ++i)
    {
        tab[0][2] += tab[i][2];
    }
    cout << "Nacisnij, aby sprawdzic ktory rzad ma wieksza sume...";
    getch();
    if(tab[0][0]>tab[0][1] && tab[0][0]>tab[0][2])
    {
        system("cls");
        cout << "Pierwszy rzad ma wieksza sume" << endl;
        cout << tab[0][0] << " > " << tab[0][1] << " & " << tab[0][2];
        getch();
    }
    else if(tab[0][1]>tab[0][0] && tab[0][1]>tab[0][2])
    {
        system("cls");
        cout << "Drugi rzad ma wieksza sume" << endl;
        cout << tab[0][1] << " > " << tab[0][0] << " & " << tab[0][2];
        getch();
    }
    else if(tab[0][2]>tab[0][0] && tab[0][2]>tab[0][1])
    {
        system("cls");
        cout << "Trzeci rzad ma wieksza sume" << endl;
        cout << tab[0][2] << " > " << tab[0][0] << " & " << tab[0][1];
        getch();
    }
}

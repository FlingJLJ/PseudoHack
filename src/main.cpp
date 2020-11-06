#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

static void showScene(unsigned char scene)
{
    if (scene == 0)
    {
        for (int i = 0; i < 50000; i++)
        {
            if (rand()% 3 == 0)
            {
                cout << " ";
            }
            else
            {
                cout << rand()% 2;
            }
        }
    }
    if (scene == 1)
    {
        for (int i = 0; i < 50; i++)
        {
            cout << "Stealing passwords from " << rand()% 255 << "." << rand()% 255 << "." << rand()% 255 << "." << rand()% 255 << "\n";
            Sleep(100);
        }
        
    }
}

int main()
{
    srand(time(0));
    while (1)
    {
        showScene(rand()% 3);
        system("cls");
    }
    return 0;
}
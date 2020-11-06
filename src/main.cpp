#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    while (1)
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
    return 0;
}
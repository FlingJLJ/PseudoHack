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
        if (rand()% 3 == 0)
        {
            cout << " ";
        }
        else
        {
            cout << rand()% 2;
        }
    }
    return 0;
}
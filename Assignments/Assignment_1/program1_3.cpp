#include<iostream>
#include<cstdlib>

using namespace std;

void Display()
{
    int i = 0;
    i = 5;
    while(i >= 1)
    {
        cout << i;
        i--;
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}
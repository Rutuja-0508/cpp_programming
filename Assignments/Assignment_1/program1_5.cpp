#include<iostream>
#include<cstdlib>

using namespace std ;

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout << "*";
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return EXIT_SUCCESS;
}

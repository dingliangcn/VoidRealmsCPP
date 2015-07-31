#ifndef TEST_H
#define TEST_H

#include <iostream>
using namespace std;


int GetAge()
{
    return 36;
}


void SayHallo()
{
    cout << "Hello" << endl;
}

void Testn(int &Number)
{
    cout << Number << endl;
    Number++;
    cout << Number << endl;
}

void Test18(int *mynum)
{
    cout << "mynum = " << mynum << endl;
    cout << "*mynum = " << *mynum << endl;
}



#endif

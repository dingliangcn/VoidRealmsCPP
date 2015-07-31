#include "cat.h"
#include <iostream>

using namespace std;

cat::cat(void)
{
    cout << "creating cat using default constructor" << endl;
    setAge(15);
}

cat::cat(int mAge)
{
    cout << "creating cat using constructor 1" << endl;
    setAge(mAge);
}

cat::~cat(void)
{

}

int cat::getAge()
{
    return Age;
}

void cat::setAge(int TheAge)
{
    Age = TheAge;
}

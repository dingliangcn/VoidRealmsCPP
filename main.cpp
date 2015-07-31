#include <iostream> // standard library use bracket
#include <string>
#include "test.h"  // used defined or from other sources use quote
#include "widget.h"
#include "cat.h"

using namespace std;

//class cat
//{
//private: // default
//    int Age;


//public:
//    int getAge()
//    {
//        return Age;
//    }

//    void setAge(int TheAge)
//    {
//        Age = TheAge;
//    }

//};

class cat2
{
public:
    int Age;
};

void DoSetAge(cat2 *pCat, int mAge)
{
    pCat->Age = mAge;
    cout << pCat->Age << " set at " << pCat <<endl;

}


class fridge
{
public:
    int Temp;
protected:
    bool HasFreeon;
};

class truck
{
    int Gas;
public:
    int Speed;
    void setGas(int mGas)
    {
        Gas = mGas;
    }
    int getGas()
    {
        return Gas;
    }
};

class freezertruck: public truck, public fridge
{
public:
    void setFreeon()
    {
        this->HasFreeon = true;
    }

};

typedef unsigned short int UShort;
//using namespace std::cout;

 // int GetAge(); // function prototypes

int main() // always starts here
{
    // used to get the age

    /* C++ 02 Hello World
    std::cout << "Hello World" << std::endl;
    */

    /* C++ 03 cout and cin
    int age = 0;
    cout << "Hello world" << endl;
    cout << "Enter you ageit work" << endl;
    cin >> age;
    cout << "You entered" << age << endl;
    */

    /* C++ 05 Varialbles and Data types
    unsigned short int Age = 0;
    int Eggs = 6;

    cout << Age << endl;
    Age = -23;
    cout << Age << endl;
    */


//    int Age;
//    Age = GetAge();
//    cout << Age <<endl;

//    // C++ 09 Arrays
//    int line[5];

//    //int line[5] = {1,2,3,4,5}; // initialization
//    line[0] = 3;
//    line[1] = 4;
//    line[2] = 5;
//    line[3] = 5;
//    line[4] = 6;
//    cout << " Person 2 has" << line[9] << endl;

//    // C++ 10 Multidimentional Array
//    int line[5][2];
//    // int line[5][2] = {0,1,2,3}; // initialization
//    line[0][0] = 99;
//    line[0][1] = 98;

//    line[1][0] = 97;
//    line[1][1] = 96;
//    line[1][4] = 94;

//    cout << line[1][0] << endl;

//    // C++ 11 If statement
//    int i = 6;
//    if (i > 1)
//    {
//        cout << "yes" << endl;
//        if(i < 5)
//        {
//            cout << "less than 5" << endl;
//        }
//        else
//        {
//            cout << "more than 5" << endl;
//        }

//    }
//    else
//    {
//        cout << "no" << endl;

//    }

//    // C++ 12 Switch statement
//    int i = 1;
//    int j = 99;
//    switch(i)
//    {
//        case 1:
//            cout << "one" << endl;
//            if(j > 0)
//            {
//                cout << "j > 0" << endl;
//            }
//            break;

//        case 2:
//            cout << "two" <<endl;
//            break;

//        default:
//            cout << " other " << endl;
//            break;

//    }

//    // C++ 13 Do While loop
//    int i = 0;
//    do
//    {
//        cout << i << endl;
//        i++; // i = i + 1;

//    }while(i < 100);

//    // C++ 14 For loop
//    for(i = 0; i < 100; i++)
//    {
//        cout << "i" << endl;
//        if( i == 2)
//        {
//            cout << "YAY" << endl;
//        }
//        else
//        {
//            cout << "BOO" << endl;
//        }
//    }

//    // C++ 15 While loop
//    int i = 0;
//    while (i < 4)
//    {
//        cout << i << endl;
//        i++;
//    }

////    do // do loop excute at least one time
////    {
////        cout << i << endl;
////        i++
////    }while(i<4)


//    // C++ 16 Strings

//    // C style
//    char Name[80] = {'\0'};
//    // char Name[80] = {'L','i','a','n','g','\0'};
//    // char Name[80] = "Liang";

//    // C++ style

//    string MyName = "Liang";

//    cout << "Enter your name" << endl;
//    cin >> Name;
//    cout << "Hello " << MyName << endl;


//    // C++ 17 By Value and By reference
//    int MyNum  = 1;
//    Testn(MyNum);
//    cout << "Step 3:" << MyNum << endl;


//    // C++ 18 Pointers
//    int *mNumber = new int;

//    *mNumber = 2;

//    cout << mNumber << endl; // menmory location
//    cout << sizeof(mNumber) << endl;
//    cout << *mNumber << endl; // points to menmory location

//    Test18(mNumber);
//    delete mNumber;


//    // C++ 20 Classes Part 1
//    cat mCat;
//    cat mBoy;
//    cat mGirl;
//    mCat.setAge(17);
//    mBoy.setAge(18);
//    mGirl.setAge(10);
//    cout << mCat.getAge() << endl;
//    cout << mBoy.getAge() << endl;
//    cout << mGirl.getAge() << endl;

//    // C++ 23 Class Contructors
//    cat *zCat = new cat(22);
//    cout << zCat->getAge() << endl;
//    delete zCat;

//    cat mCat(33);
//    cout << mCat.getAge() << endl;

//    // C++ 23 Classes and Pointers
//    cat2 *mCat = new cat2;
//    mCat->Age = 0;
//    cout << mCat->Age << " at " << mCat <<endl;

//    DoSetAge(mCat,12);

//    cout << mCat->Age << " at " << mCat <<endl;
//    delete mCat;


    // C++ 24 Classes inheritance and multiple inheritance
    freezertruck mTruck;
    mTruck.Speed = 100;
    mTruck.Temp = 20;
    cout << mTruck.Speed << endl;
    cout << mTruck.Temp << endl;

    mTruck.setGas(100);
    cout << mTruck.getGas() << endl;

    mTruck.setFreeon();

    //SayHalloWorld();
    //system("pause");
    return 0;
}

/* Function
int GetAge()
{
    return 36;
}
*/

#include <iostream> // standard library use bracket
#include "test.h"  // used defined or from other sources use quote
#include "widget.h"

using namespace std;

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

    // C++ 10 Multidimentional Array
    int line[5][2];
    // int line[5][2] = {0,1,2,3}; // initialization
    line[0][0] = 99;
    line[0][1] = 98;

    line[1][0] = 97;
    line[1][1] = 96;
    line[1][4] = 94;

    cout << line[1][0] << endl;



    SayHalloWorld();

    //system("pause");
    return 0;
}

/* Function
int GetAge()
{
    return 36;
}
*/

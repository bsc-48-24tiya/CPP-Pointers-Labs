#include <iostream>
using namespace std;

int main() {

    // declare pointer and initialise it
    // so that it doesn't store a random address

    int* pPointer = nullptr;

    int integerVar = 5;

    // assign pointer to address of object 
    pPointer = &integerVar;

    // output the value of an integerVar
    cout << "integerVar: " << integerVar << endl;

    //output yhe address of integerVar
    cout << "Address of integerVar: " << &integerVar << endl;

    //output the address assigned to pPointer
    cout << "pPointer: " << pPointer << endl;

    //output the address of the pPointer
    cout << "Address of pPointer " << &pPointer << endl;



    return 0;



}

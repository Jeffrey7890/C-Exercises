// recursive.cpp
// Demonstrates the principle of recursion by a
// function, which reads a line from the keyboard
// and outputs it in reverse order.
// ----------------------------------------------------
#include <iostream>
using namespace std;

void getput(void);

int main()
{
    cout << "Please enter a line of text:\n";
    getput();
    cout << "\nBye bye" << endl;
    return 0;
}

void getput()
{
    char c;
    char* p;
    if( cin.get(c) && c != '\n')
    {   
        p = &c;
        cout << "memory of char: " << p;
        getput();
    }
    cout.put(c);
}

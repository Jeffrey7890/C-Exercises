#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    string message("\nLearn from your mistakes!");
    cout << message << endl;
    int len = message.length();
    cout << "Length of the string: " << len <<endl;

    int a,b;
    cout << "Enter The seed: ";
    cin >>  a;
    srand(a);
    b = rand();

    cout << "\nRandom number: "<<b<< endl;


    return 0;
}
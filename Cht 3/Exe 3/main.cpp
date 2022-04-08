#include <iostream>
#include <string>

using namespace std;

int main()
{
    string message("I have learned something new again!");

    cout << "Length of the string: "<< message.length() << endl;

    cout << "Enter your message: "<<endl;
    string msg1,msg2;

    getline(cin,msg1);
    getline(cin,msg2);

    cout << msg1+" * "+msg2 <<endl;

    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number =0;
    cout << "\nEnter a hexadecimal number: "
        << endl;
    cin >> hex >> number;

    cout << "Your decimal input: "<< number << endl;

    cin.sync();
    cin.clear();

    double x1 = 0.0, x2 = 0.0;

    cout << "\nNow enter two floating-point values: "
        << endl;
    cout << "1. number: ";
    cin >> x1;
    cout << "2. number: ";
    cin >> x2;

    cout << fixed << setprecision(2)
        << "\nThe sum of both numbers: "
        << setw(10) << x1 + x2 << endl;
    
    cout << "\nThe produce of both numbers: "
        << setprecision(4)
        << setw(10) << x1 * x2 << endl;

    return 0;
}
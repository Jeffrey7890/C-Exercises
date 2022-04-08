#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "\nFormulating statements" << endl;

    cout << setw(15) << 0.123456
        << endl;
    
    cout << "\nFixed right 2sf width 12 of 23.987"<<endl;
    cout << fixed << setprecision(2)
        << right << setw(12)
        << 23.987<< endl;

    cout << scientific << noshowpos
        << setprecision(4) <<setw(10)
         << -123.456 << endl;
    

    return 0;
}
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    double number = 0, quantity =0, price =0;

    cout << "\nEnter The number: ";
    cin >> number;
    cin.sync();
    cin.clear();

    cout << "\nEnter the quantiy: ";
    cin >> quantity;
    
    cout << "\nEnter the price: ";
    cin >> price;

    cout << "\nArticle Number\tNumber of piecs\tPrice per piece"
        << endl;
    cout << setw(10)  <<number<<setw(16) << quantity
    <<setw(16) <<price << " Dollar"
        <<endl;


    return 0;
}
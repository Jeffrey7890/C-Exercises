#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter number of time you want to run: ";
    cin >> n;
    for(int i=1250;i< 1250+n; i++)
    {
        char ch;
        int number;
        cout << "\nEnter a number: ";
        // cin >> number;
        number =i;
        ch = number;

        cout << "\nCharacter: "<<ch
            << endl;
        // cout << "\nDecimal: " << number
        //     << endl;

        // cout << "\nOctal: " << oct
        //     << number << endl;
        
        // cout << "\nHexa: " << hex  
        //     << number << endl;

       
    }
    int num;
    cin >> num;

    

    return 0;
}
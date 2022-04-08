#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x = 10;
    for(int k = 1; k <=10; k++)
        cout << setw(4) << k;
        cout << "\n "
        << "------------------------------------------"
        << endl;
    for(int i = 1; i <= x; i++){
        cout << i<<"|";
        for(int j = 1; j <= 10; j++){
            // cout << setw(4) <<j;
            cout<<setw(4) << j*i;
        }
        cout <<endl;
    }
    cin.get();

    return 0;
}
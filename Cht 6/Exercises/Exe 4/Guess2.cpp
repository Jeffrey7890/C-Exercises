#include <iostream>
#include <iomanip>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main(){
    time_t sec;
    time(&sec);
    cout << sec<<endl;
    srand((unsigned)sec);
    char w = 'r';
    int x,t, index = 1;
    cout << "I have a number between 1 and 15 in mind \n"
    << "You have three chances to guess correctly!\n"
    << endl;
    while(w == 'r'){
        cin.sync();
        cin.clear();
        cout <<index<< ". attempt: " ;
        cin >> x;
        t = rand()%15 + 1;
        if(x == (t)){
            cout << "Correct!" << endl;
            cout << "Enter 'r' to repeat, 'f' to endl: ";;
            cin >> w;
            index = 0;
        }
        else if (x < t){
            cout << "to small !" << endl;
        }else if (x > t){
            cout << "to big!" << endl;
        }
        if(index == 3){
            cout << "Enter 'r' to repeat, 'f' to endl: ";
            cin >> w;
            index = 0;
        }
        index++;
        
    }
    cout << "\033[2J";

    return 0;
}
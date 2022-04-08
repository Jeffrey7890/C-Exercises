#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t = 1000L;
    cout << sizeof(t) << endl;
    cout << t << endl;
    // replace strings
    string s1("Here comes Tonia"), s2("my love?");
    s1.replace(11, 5, s2,0,8);
    cout << s1 << endl;
    // erase string
    s1.erase(); s2.erase();
    cout << s2 << s1 << endl;

    s1="There they go again!";
    s2="Bob and Bill";
    // insert in string
    // s1.insert(5, s2);
    s1.insert(5, s2,0,10);
    cout << s1 << endl;
    // Searching a string
    int first = s1.find("go");
    cout <<first << endl;
    int last = s1.rfind("go");
    cout << last << endl;

    return 0;
}
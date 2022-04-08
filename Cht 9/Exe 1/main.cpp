#include <iostream>
#include <string>

int main(){
    // std::cout << "Hello World!" << std::endl;

    std::string s1("As time by ..."), s2("goes");
    int pos = s1.find("y");
    std::cout << pos << std::endl;
    s1.insert(pos+2, s2);
    std::cout << s1 << std::endl;

    s1.erase(pos+2);
    std::cout<< s1 << std::endl;
    pos = s1.find("t");

    std::cout << pos << std::endl;
    s1.replace(pos, 4, "Bill");
    std::cout << s1 << std::endl;


    return 0;
}
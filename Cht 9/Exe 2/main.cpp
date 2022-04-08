#include <iostream>
#include <string>

int main()
{
    std::string m_palindrome, word;

    std::cout << "Enter a word: ";

    std::getline(std::cin, word);

    int index = word.length()-1;

    while (index > -1)
    {
        // std::cout << index << std::endl;

        m_palindrome += word[index];
        --index;
    }
    if(m_palindrome == word)
        std::cout << word << " is a Palindrome" << std::endl;
    else
        std:: cout << word << " is not a palindrome " << std::endl;
    
    system("pause");
    

    return 0;
}
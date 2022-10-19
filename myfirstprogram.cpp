#include <iostream>

/* 
This is a 
multi-line comment!
*/

int main()
{
    int number = 4;
    double floating_point = 13.37;
    char character = 'a';
    std::string text = "Hello World String!!!";
    bool groundTruth = true;


    // This is a comment
    std::cout
        << "Hello World!"
        << std::endl // This is another comment
        << "number is: "
        << number
        << std::endl
        << "floating_point is: "
        << floating_point
        << std::endl
        << "character is: "
        << character
        << std::endl
        << "text is: "
        << text
        << std::endl
        << "groundTruth is: "
        << groundTruth
        << std::endl;
    std::cout << "I am learning C++\n";
    return 0;
}
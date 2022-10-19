#include <iostream>
using namespace std;
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

    int myNum = 5;            // Integer (whole number without decimals)
    double myFloatNum = 5.99; // Floating point number (with decimals)
    char myLetter = 'D';      // Character
    string myText = "Hello";  // String (text)
    bool myBoolean = true;    // Boolean (true or false)

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

    // Add variables together
    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << sum;
    cout << endl;

    // Declare multiple variables
    int a = 5, b = 6, z = 50;
    cout << a + b + z << endl;

    // One value to multiple values
    int e,f,g;
    e = f = g = 50;
    cout << e + f + g << endl;

    return 0;
}
// swap variables a and b

#include <iostream>

int main()
{
    int a = 1;
    int b = 2;

    // let temp be a temporary variable
    int temp;

    // using tem to swap a and b variables
    temp = a;

    a = b;
    b = temp;

    // print the values of a and b
    std::cout << "a = " << a << ", b = " << b << std::endl;
    return 0;
}
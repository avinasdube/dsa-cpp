/*

- PROBLEM STATEMENT

You are given a number 'num' and you have to reverse it mathematically.

Note : You can't convert it to string to ease reversal.

*/

/*  DRY-RUN

    int reverseIntegerWithMath(int num)
    {
        int reversedInteger = 0; // initialize reversedInteger
        int rem = 0;

        while (num > 0)             // num = 1234 | 123 | 12 | 1
        {
            reversedInteger *= 10;  // 0 | 40 | 430 | 4320
            rem = num % 10;         // 4 | 3 | 2 | 1
            num = (num - rem) / 10; // 1230/10 => 123 | 120/10 => 12 | 10/10 => 1 | 0/10 => 0
            reversedInteger += rem; // 4 | 43 | 432 | 4321
        }

        return reversedInteger;
    }

*/

#include <iostream>
using namespace std;

int reverseIntegerWithMath(int num)
{
    int reversedInteger = 0; // initialize reversedInteger
    int rem = 0;

    while (num > 0)
    {
        reversedInteger *= 10;
        rem = num % 10;         // remainder grabs last digit
        num = (num - rem) / 10; // eliminate zero in num

        reversedInteger += rem; // push remainder onto end of reversedInteger
    }

    return reversedInteger;
}

int main()
{
    int num = 583946;

    int reversedInteger = reverseIntegerWithMath(num);
    cout << "Reversed Integer = " << reversedInteger;

    return 0;
}

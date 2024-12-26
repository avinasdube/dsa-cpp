/*

- PROBLEM STATEMENT

You're given two numbers 'num1' and 'num2'. Write a program to find GCD or HCF of two given
numbers.

*/

#include <iostream>
#include <algorithm>

using namespace std;

// using recursive approach
int findHCF(int a, int b)
{
    if (a == 0)
        return b;

    // b is greater
    if (b > a)
    {
        return findHCF(b % a, a);
    }
    return findHCF(a % b, a);
}

// using general approach
int findGCD(int num1, int num2)
{
    // find the minimum num1 and num2
    int result = min(num1, num2);

    while (result > 0)
    {
        if (num1 % result == 0 && num2 % result == 0) //
        {
            break;
        }
        result--;
    }

    return result;
}

int main()
{
    int num1 = 18, num2 = 14;
    int result = findHCF(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is : " << result << endl;
}
/*

-PROBLEM STATEMENT

You are given a number 'num'. Write a program to find all divisors of the number given.

*/

#include <iostream>
using namespace std;

int printAllDivisors(int num)
{
    // check validity
    if (num == 0)
    {
        return 0;
    }

    // find divisors
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int num = 45;
    cout << "Divisors of num = " << num << " are :" << endl;
    printAllDivisors(num);
}
/*

- PROBLEM STATEMENT

You are given a number 'num'. Write a program to check if the given number is prime or not.

Hint : Prime number is a natural number greater than 1 and is only completely divisible by 1 and itself.

*/

#include <iostream>
#include <math.h>
using namespace std;

bool checkIfPrime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return 0;
        else
            return 1;
    }
}

int main()
{
    int num = 16;
    if (checkIfPrime(num) == 1)
    {
        cout << "Yes, it is a prime number." << endl;
    }
    else
    {
        cout << "No, it is not a prime number." << endl;
    }
}
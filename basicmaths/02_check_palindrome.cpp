/*

- PROBLEM STATEMENT

You are given an Integer 'num' and you have to check if it is palindrome or not.
Note : You can't convert it to string. And a number is 'Palindrome' if it is same when it's digits are reversed.

*/

#include <iostream>
using namespace std;

bool checkIfPalindrome(int num)
{
    // first reverse the given number
    int temp = num;
    int reversedInt = 0;

    while (temp > 0)
    {
        reversedInt = reversedInt * 10 + temp % 10;
        temp = temp / 10;
    }

    // check and return if reversedInteger == num
    return (reversedInt == num);
}

int main()
{
    int num = 1221;

    // print results
    if (checkIfPalindrome(num) == 1)
    {
        cout << num << " is a pallindrome." << endl;
    }
    else
    {
        cout << num << " is not a pallindrome." << endl;
    }
}
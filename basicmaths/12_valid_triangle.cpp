/*

- PROBLEM STATEMENT:

Given three sides, check whether triangle is valid or not.

- EXAMPLE:

Input :  a = 7, b = 10, c = 5
Output : Valid

*/

#include <iostream>
using namespace std;

// function to find if triangle is valid
bool isValidTriangle(int a, int b, int c)
{
    if (a > (b + c) || b > (a + c) || c > (a + b))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a = 1, b = 10, c = 12;
    cout << isValidTriangle(a, b, c) << endl;
    return 0;
}
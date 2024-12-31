/*

- PROBLEM STATEMENT

Given a decimal number as input, we need to write a program to convert the
given decimal number into an equivalent binary number.

*/

#include <iostream>
#include <vector>

using namespace std;

void printBinary(int num)
{
    vector<int> arr;

    while (num)
    {
        if (num % 2 == 0)
        {
            arr.push_back(0);
        }
        else
        {
            arr.push_back(1);
        }

        num = num / 2;
    }

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int num = 59;
    printBinary(num);
    return 0;
}
/*

- PROBLEM STATEMENT

Given an array, write a program to find the sum of values of even and odd index positions separately.

- EXAMPLE:

Input : arr[] = {1, 2, 3, 4, 5, 6}
Output :Even index positions sum 9
        Odd index positions sum 12
Explanation: Here, n = 6 so there will be 3 even
index positions and 3 odd index positions in an array
Even = 1 + 3 + 5 = 9
Odd =  2 + 4 + 6 = 12

*/

#include <iostream>
using namespace std;

void sumEvenOddElements(int arr[], int n)
{
    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sumEven = sumEven + arr[i];
        }
        else
        {
            sumOdd = sumOdd + arr[i];
        }
    }

    cout << "Sum of Even elements: " << sumEven << endl;
    cout << "Sum of Odd elements: " << sumOdd << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    sumEvenOddElements(arr, n);
    return 0;
}
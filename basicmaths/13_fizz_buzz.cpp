/*

- PROBLEM STATEMENT:

Given an integer n, for every positive integer i <= n, the task is to print,

“FizzBuzz” if i is divisible by 3 and 5,
“Fizz” if i is divisible by 3,
“Buzz” if i is divisible by 5
“i” as a string, if none of the conditions are true.

- EXAMPLES:

Input: n = 3
Output: [“1”, “2”, “Fizz”]

Input: n = 10
Output: [“1”, “2”, “Fizz”, “4”, “Buzz”, “Fizz”, “7”, “8”, “Fizz”, “Buzz”]

*/

#include <iostream>
#include <vector>
using namespace std;

// basic approach
vector<string> printFizzBuzz(int n)
{
    vector<string> res;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            res.push_back("FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            res.push_back("Fizz");
        }
        else if (i % 5 == 0)
        {
            res.push_back("Buzz");
        }
        else
        {
            res.push_back(to_string(i));
        }
    }
    return res;
}

int main()
{
    int n = 10;
    vector<string> res = printFizzBuzz(n);
    for (const string &s : res)
    {
        cout << s << " ";
    }
    return 0;
}

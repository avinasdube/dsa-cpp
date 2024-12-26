/*

- PROBLEM STATEMENT

You're given a number 'x'. Write a program to find if it is an 'Armstrong Number'.

Hint : A number of 'n' digits is an Armstrong Number of 'order n' if :
       abc... = pow(a, n) + pow(b, n) + pow(c, n) + ...

- Example :

Input : 1253
Output : No

as, 1*1*1*1 + 2*2*2*2 + 5*5*5*5 + 3*3*3*3 = 723

*/

#include <iostream>
using namespace std;

// function to calculate power
int power(int x, unsigned int y)
{
       if (y == 0)
              return 1;
       int pow = 1;
       for (unsigned int i = 0; i < y; i++)
       {
              if (pow > INT_MAX / x) // Check for overflow
              {
                     throw overflow_error("Integer overflow occurred");
              }
              pow *= x;
       }

       return pow;
}

// function to calculate order
int order(int x)
{
       int n = 0;
       while (x)
       {
              n++;
              x = x / 10;
       }
       return n;
}

// function to check if given number is armstrong number or not
bool isArmstrong(int x)
{
       // calling order function
       int n = order(x);

       // checking if armstrong
       int temp = x, sum = 0;
       while (temp)
       {
              int r = temp % 10;
              sum += power(r, n);
              temp = temp / 10;
       }
       return (sum == x);
}

// main function
int main()
{
       int x = 1253;
       if (isArmstrong(x) == 1)
       {
              cout << "Yes, it is an Armstrong Number" << endl;
              cout << "Result = " << " " << boolalpha << isArmstrong(x) << endl;
       }
       else
       {
              cout << "No, this is not an Armstrong Number" << endl;
              cout << "Result = " << " " << boolalpha << isArmstrong(x) << endl;
       }
}
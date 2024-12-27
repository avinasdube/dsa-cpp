/*

- PROBLEM STATEMENT

Add two given fractions a/b and c/d and print answer in simplest form.

Example:

Input: 1/3 + 3/9
Output: 2/3

Hint: LCM(a, b) = (a.b)/gcd(a, b);

ALGORITHM:

STEP 1: Take two inputs using 4 variables - num1, den1, num2, den2. Here,
        num1, num2 are Numerators of both fractions and den1, den2 are
        Denominators of both fractions.
STEP 2: Ensure both den1 and den2 are not 0.
STEP 3: Find common denominator (or LCM) of both den1 and den2.
STEP 4: Compute new numerators based on common denominator found in STEP 3.
STEP 5: Add both numerators (num1 and num2).
STEP 6: Simplify the resulting fraction.

*/

#include <iostream>
using namespace std;

// function to find the GCD of two given numbers
int findGCD(int den1, int den2)
{
    if (den1 == 0)
        return den2;
    if (den2 > den1)
    {
        return findGCD(den2 % den1, den1);
    }
    return findGCD(den1 % den2, den1);
}

// function to find the LCM of two given numbers
int findLCM(int den1, int den2)
{
    int gcd_result = findGCD(den1, den2);
    int prod = (den1 * den2);

    // using formula of LCM = (a.b)/gcd(a,b)
    return (prod / gcd_result);
}

// function to add fractions and print final result
void addFractions(int num1, int den1, int num2, int den2)
{
    int re_num, re_gcd;
    int lcm = findLCM(den1, den2); // finding LCM of den1, den2

    // calculating resulting numerator
    re_num = num1 * (lcm / den1) + num2 * (lcm / den2);
    re_gcd = findGCD(re_num, lcm); // calculating resulting denominator

    // calculating simplified numerator and denominator
    int simplified_numerator = re_num / re_gcd;
    int simplified_denominator = lcm / re_gcd;

    cout << num1 << "/" << den1 << " + " << num2 << "/" << den2 << " = " << simplified_numerator << "/" << simplified_denominator << endl;
}

int main()
{
    int num1 = 1, den1 = 3, num2 = 3, den2 = 9;
    addFractions(num1, den1, num2, den2);
    return 0;
}
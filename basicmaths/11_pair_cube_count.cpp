/*

- PROBLEM STATEMENT

Given n, count all ‘a’ and ‘b’ that satisfy the condition a^3 + b^3 = n.
Where (a, b) and (b, a) are considered two different pairs

- Example:

Input: n = 9
Output: 2
Explanation: 1^3 + 2^3 = 9 and 2^3 + 1^3 = 9

- ALGORITHM

STEP 1: Iterate a from 0 to cbrt(num).
STEP 2: For each a, calculate b^3 = num - a^3.
STEP 3: Check if b^3 is a perfect cube.
        - To do this perform b = cbrt(b^3) and check if b^3 = num - a^3
STEP 4: Count each valid pair (a,b) and (b,a)

*/

#include <iostream>
#include <math.h>
using namespace std;

double cube(double num)
{
    return num * num * num;
}

// function to find pair count
int findPairCount(int num)
{
    int count = 0;

    // check for each number from 1 to cuberoot of num
    for (int i = 1; i <= cbrt(num); i++)
    {
        // find the value of b (b^3 = n - a^3)
        int b_cube = num - cube(i);

        // check if b_cube is a perfect cube
        if (cube(cbrt(b_cube)) == b_cube)
            count++; // increase count if b_cube is perfect cube
    }

    return count;
}

int main()
{
    double num = 9;
    cout << findPairCount(num) << endl;
    return 0;
}
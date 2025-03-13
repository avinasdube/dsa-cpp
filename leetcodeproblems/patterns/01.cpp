/*

- PROBLEM STATEMENT:

Print the following pattern:

ABCD
ABCD
ABCD
ABCD


*/

#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 4; i++) // outer loop
    {
        char ch = 'A';

        for (int j = 0; j < 4; j++)  // inner start => line start
        {
            cout << ch;
            ch = ch + 1;  // ASCII => 65 + 1
        }

        cout << endl;
    }
}
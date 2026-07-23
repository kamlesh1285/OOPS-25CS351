// Q1: checks 3 numbers and counts how many are both positive and even. A number is even if it is divisible by 2 without remainder

#include <iostream>
using namespace std;

int main() {
    int a, b, c, count = 0;
    cin >> a >> b >> c;

    if (a > 0 && a % 2 == 0) count++;
    if (b > 0 && b % 2 == 0) count++;
    if (c > 0 && c % 2 == 0) count++;

    cout << count;
    return 0;
}



// Algorithm
// 1.Read three integers a, b, and c.

// 2. Initialize count = 0.

// 3. Check each number:

// 4. If it is greater than 0 and divisible by 2, increase count.

// 5. Print count.
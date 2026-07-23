// Calculate CGPA and assign grade

#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3, m4, m5;
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    float cgpa = (m1 + m2 + m3 + m4 + m5) / 5.0;

    cout << "CGPA = " << cgpa << endl;

    if (cgpa >= 8.6)
        cout << "Grade = A+";
    else if (cgpa > 6 && cgpa < 7)
        cout << "Grade = B";
    else
        cout << "Grade = C";

    
}

// Algorithm
// 1. Read 5 subject marks.

// 2. Add all marks.

// 3.Divide the total by 5 to get CGPA.

// 4. Check grade:

// 5. If CGPA >= 8.6, grade is A+.

// 6. If 6 < CGPA < 7, grade is B.

// 7. Print CGPA and grade.



//C++ OOP program that demonstrates default arguments in a function for grading a student based on 5 subjects, where 2 subject marks are entered by the user and the remaining 3 are taken as default values.

#include <iostream>
using namespace std;

class Student {
public:
    void gradeStudent(int m1, int m2, int m3 = 60, int m4 = 60, int m5 = 60) {
        int total = m1 + m2 + m3 + m4 + m5;
        float avg = total / 5.0;

        cout << "Total Marks = " << total << endl;
        cout << "Average Marks = " << avg << endl;

        if (avg >= 90)
            cout << "Grade = A" << endl;
        else if (avg >= 75)
            cout << "Grade = B" << endl;
        else if (avg >= 60)
            cout << "Grade = C" << endl;
        else
            cout << "Grade = D" << endl;
    }
};

int main() {
    Student s;
    int a, b;

    cout << "Enter marks of 2 subjects: ";
    cin >> a >> b;

    s.gradeStudent(a, b);
    return 0;
}
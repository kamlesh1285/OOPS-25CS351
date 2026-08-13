// wap to implement the concept of function overloading to check wether a particular user is eligible for vote or not for a particular post by including three function as (i) Check - Parameter(int age) (ii) Check - parameter (int age, string name) (iii) Check - parameter(int age, string name, string post)


#include <iostream>
using namespace std;

class Election {
public:
    void Check(int age) {
        if (age >= 18)
            cout << "Eligible to vote" << endl;
        else
            cout << "Not eligible to vote" << endl;
    }

    void Check(int age, string name) {
        cout << "Name: " << name << endl;
        if (age >= 18)
            cout << "Eligible to vote" << endl;
        else
            cout << "Not eligible to vote" << endl;
    }

    void Check(int age, string name, string post) {
        cout << "Name: " << name << endl;
        cout << "Post: " << post << endl;

        if (age >= 18)
            cout << "Eligible for " << post << endl;
        else
            cout << "Not eligible for " << post << endl;
    }
};

int main() {
    Election e;
    int age;
    string name, post;

    cout << "Enter age: ";
    cin >> age;

    e.Check(age);

    cout << "\nEnter name: ";
    cin >> name;
    e.Check(age, name);

    cout << "\nEnter post: ";
    cin >> post;
    e.Check(age, name, post);

    return 0;
}

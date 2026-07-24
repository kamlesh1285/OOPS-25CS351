           Date-24 JUL 2026 
Q1- WAP to create 2 namespaces: fruits and vegetables. Each have 2 functions named as display() and quantity_available(). For the quantity available function of the vegetable class and display function of the fruit namespace.


#include <bits/stdc++.h>
using namespace std;

namespace fruits
{
    void display()
    {
        cout << "Fruit: Apple\n";
    }

    void quantity_available()
    {
        cout << "Quantity Available: 50\n";
    }
}

namespace vegetables
{
    void display()
    {
        cout << "Vegetable: Potato\n";
    }

    void quantity_available()
    {
        cout << "Quantity Available: 100\n";
    }
}

int main()
{
    fruits::display();
    vegetables::quantity_available();

    return 0;
}


output: Fruit: Apple
        Quantity Available: 100



Q2-  




Q3- WAP to im plement a function overloading with the help of send notification such as  1. for Email its includes Email id , message and subject. 2. For App notification it includes user id and message 3. For text Message it includes Phone Number and message.(OOPS)


#include <iostream>
#include <string>
using namespace std;

class Notification {
public:

    // 1. Email Notification
    void sendNotification(string emailId, string subject, string message) {
        cout << "\n----- Email Notification -----" << endl;
        cout << "Email ID : " << emailId << endl;
        cout << "Subject  : " << subject << endl;
        cout << "Message  : " << message << endl;
    }

    // 2. App Notification
    void sendNotification(int userId, string message) {
        cout << "\n----- App Notification -----" << endl;
        cout << "User ID  : " << userId << endl;
        cout << "Message  : " << message << endl;
    }

    // 3. Text Message (SMS)
    void sendNotification(string phoneNumber, string message) {
        cout << "\n----- Text Message (SMS) -----" << endl;
        cout << "Phone No.: " << phoneNumber << endl;
        cout << "Message  : " << message << endl;
    }
};

int main() {
    Notification obj;

    // Email Notification
    obj.sendNotification("kamlesh@gmail.com",
                         "Meeting Reminder",
                         "Your meeting is scheduled at 10:00 AM.");

    // App Notification
    obj.sendNotification(101, "Your order has been shipped.");

    // SMS Notification
    obj.sendNotification("8340689461", "Your OTP is 456789.");

    return 0;
}








Viva Questions
What is Function Overloading?
Function overloading is a feature of C++ that allows multiple functions to have the same name but different parameter lists.
How does the compiler differentiate overloaded functions?
By the number, type, or order of parameters.
Is function overloading an example of compile-time or run-time polymorphism?
Compile-time polymorphism (Static Polymorphism).
Can overloaded functions have different return types only?
No. They must differ in their parameter list.
What is the advantage of function overloading?
It improves code readability and allows similar operations to use the same function name.
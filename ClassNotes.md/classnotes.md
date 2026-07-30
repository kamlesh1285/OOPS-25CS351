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




Q3- WAP to implement a function overloading with the help of send notification such as  1. for Email its includes Email id , message and subject. 2. For App notification it includes user id and message 3. For text Message it includes Phone Number and message.(OOPS)


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
1.What is Function Overloading?
:-Function overloading is a feature of C++ that allows multiple functions to have the same name but different parameter lists.
2.How does the compiler differentiate overloaded functions?
:-By the number, type, or order of parameters.
3.Is function overloading an example of compile-time or run-time polymorphism?
:-Compile-time polymorphism (Static Polymorphism).
4.Can overloaded functions have different return types only?
:-No. They must differ in their parameter list.
5.What is the advantage of function overloading?
:-It improves code readability and allows similar operations to use the same function name.




       27 JUL 2026 


Q1:- WAP to create two namespaces in which first will contain all four operations related to normal calculator and second namespace contain operations related to Interest calculation. Call any two functions from each namespace.

Q2:- WAP to show the concept of function overloading with the help of three different functions.



SOL:--

#include <bits/stdc++.h>
#include <cmath>
using namespace std;


namespace Calculator 
{
    void add (float a, float b) {
        cout<<"Addition"<<a+b<<endl;
    }
    
    void sub (float a, float b) {
        cout<<"Subtraction"<<a-b<<endl;
    }
    
    void Mult (float a, float b) {
        cout<<"Multiplucation"<<a*b<<endl;
    }
    
    void Div (float a, float b) {
        cout<<"Division"<<a/b<<endl;
    }
}

namespace Intrest 
{
    void simpleIntrest (float p, float r, float t) {
        float SI = (p*r*t)/100;
        cout<<"Simple Interest"<<SI<<endl;
    }
    
    void Amount (float p, float r, float t) {
        float SI = (p*r*t)/100;
        float amt = p + SI;
        cout<<"Compound Amount:"<<amt<<endl;
    }
    
    void compoundIntrest (float p, float r, float t, float n) {
        float A = p*pow((1+r/n), n*t);
        float CI = A-p;
        cout<<"Compound Intrest"<<CI<<endl;
    }
    
    
}


int main() {
	
	Calculator:: add(9, 5);
	Calculator:: sub(9, 5);
	Calculator:: Mult(9, 5);
	
	Calculator:: Div(9, 5);
	
	Intrest:: simpleIntrest( 5000, 10, 5);
	Intrest:: Amount(5000, 10, 5);
	Intrest:: compoundIntrest(5000, 10, 5, 3);
	

}




SOL2:-

#include <iostream>
using namespace std;

class Demo
{
public:
    void show()
    {
        cout << "Function with no argument" << endl;
    }

    void show(int a)
    {
        cout << "Function with one integer argument = " << a << endl;
    }

    void show(int a, int b)
    {
        cout << "Function with two integer arguments = " << a + b << endl;
    }
};

int main()
{
    Demo d;
    d.show();
    d.show(10);
    d.show(10, 20);

    return 0;
}


         28 JUL 2026 


Q1: WAP to implement the concept of call by value and call by reference in which value will be increased by 100 .

#include <iostream>
using namespace std;

void callByValue(int x) {
    x = x + 100;
    cout << "Inside callByValue: " << x << endl;
}

void callByReference(int &x) {
    x = x + 100;
    cout << "Inside callByReference: " << x << endl;
}

int main() {
    int num1 = 10;
    int num2 = 10;

    cout << "Before callByValue: " << num1 << endl;
    callByValue(num1);
    cout << "After callByValue: " << num1 << endl;

    cout << endl;

    cout << "Before callByReference: " << num2 << endl;
    callByReference(num2);
    cout << "After callByReference: " << num2 << endl;

    return 0;
}


Q2:




             30 JUL 2026

Q1:- WAP which accept any number of input from the user and dislpay their sum. 

sol:- 

#include <iostream>
#include <cstdarg>
using namespace std;

int sum(int count, ...) {
    va_list args;
    va_start(args, count);

    int total = 0;
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }

    va_end(args);
    return total;
}

int main() {
    int n;
    cout << "Enter how many numbers you want to add: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = 0;
    switch (n) {
        case 1: result = sum(n, arr[0]); break;
        case 2: result = sum(n, arr[0], arr[1]); break;
        case 3: result = sum(n, arr[0], arr[1], arr[2]); break;
        case 4: result = sum(n, arr[0], arr[1], arr[2], arr[3]); break;
        case 5: result = sum(n, arr[0], arr[1], arr[2], arr[3], arr[4]); break;
        default:
            cout << "This demo supports up to 5 numbers only." << endl;
            delete[] arr;
            return 0;
    }

    cout << "Sum = " << result << endl;
    delete[] arr;
    return 0;
}


Q2:- Write a program to find the maximum value from the different inuput provided by the users.

Sol:- 

#include <iostream>
using namespace std;

int main() {
    int n, num, maxValue;

    cout << "Enter how many numbers you want to compare: ";
    cin >> n;

    cout << "Enter number 1: ";
    cin >> maxValue;

    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        if (num > maxValue) {
            maxValue = num;
        }
    }

    cout << "Maximum value = " << maxValue << endl;
    return 0;
}
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


Q2:- Write a program to find the maximum value from the different input provided by the users.

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
}. 




Date  13 Aug 2026 

Q1:- WAP to create Airline Reservation System Which includes the data member as passengers id, name, flight Number, Destination , Ticket Fare and Booking Status , includes the functionality of add passenger details, book ticket, cancel ticket and display the ticket fare.


#include <iostream>
#include <string>
using namespace std;

class AirlineReservation {
private:
    int passengerId;
    string name;
    string flightNumber;
    string destination;
    double ticketFare;
    string bookingStatus;

public:
    // Function to add passenger details
    void addPassengerDetails() {
        cout << "Enter Passenger ID: ";
        cin >> passengerId;

        cin.ignore();
        cout << "Enter Passenger Name: ";
        getline(cin, name);

        cout << "Enter Flight Number: ";
        cin >> flightNumber;

        cin.ignore();
        cout << "Enter Destination: ";
        getline(cin, destination);

        cout << "Enter Ticket Fare: ";
        cin >> ticketFare;

        bookingStatus = "Not Booked";

        cout << "\nPassenger details added successfully!\n";
    }

    // Function to book ticket
    void bookTicket() {
        if (bookingStatus == "Booked") {
            cout << "\nTicket is already booked.\n";
        } else {
            bookingStatus = "Booked";
            cout << "\nTicket booked successfully!\n";
        }
    }

    // Function to cancel ticket
    void cancelTicket() {
        if (bookingStatus == "Booked") {
            bookingStatus = "Cancelled";
            cout << "\nTicket cancelled successfully!\n";
        } else {
            cout << "\nNo booked ticket to cancel.\n";
        }
    }

    // Function to display ticket fare
    void displayTicketFare() {
        cout << "\nTicket Fare: Rs. " << ticketFare << endl;
    }

    // Function to display passenger details
    void displayDetails() {
        cout << "\n----- Passenger Details -----\n";
        cout << "Passenger ID   : " << passengerId << endl;
        cout << "Passenger Name : " << name << endl;
        cout << "Flight Number  : " << flightNumber << endl;
        cout << "Destination    : " << destination << endl;
        cout << "Ticket Fare    : Rs. " << ticketFare << endl;
        cout << "Booking Status : " << bookingStatus << endl;
    }
};

int main() {
    AirlineReservation passenger;
    int choice;

    do {
        cout << "\n===== AIRLINE RESERVATION SYSTEM =====\n";
        cout << "1. Add Passenger Details\n";
        cout << "2. Book Ticket\n";
        cout << "3. Cancel Ticket\n";
        cout << "4. Display Ticket Fare\n";
        cout << "5. Display Passenger Details\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                passenger.addPassengerDetails();
                break;

            case 2:
                passenger.bookTicket();
                break;

            case 3:
                passenger.cancelTicket();
                break;

            case 4:
                passenger.displayTicketFare();
                break;

            case 5:
                passenger.displayDetails();
                break;

            case 6:
                cout << "\nThank you for using Airline Reservation System!\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}   


17 Aug 2026 

Q1: WAP to implement the student record (class) feature (Name , Roll and Class) 


#include <iostream>
#include <string>
using namespace std;

class StudentRecord {
private:
    string name;
    int roll;
    string className;

public:
    void input() {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> roll;
        cin.ignore();

        cout << "Enter class: ";
        getline(cin, className);
    }

    void display() const {
        cout << "\nStudent Record\n";
        cout << "Name  : " << name << '\n';
        cout << "Roll  : " << roll << '\n';
        cout << "Class : " << className << '\n';
    }
};

int main() {
    StudentRecord student;

    student.input();
    student.display();

    return 0;
}




                                                    18 Aug 2026
Key Features of OOPS:
    - Class
    _ Object
    _ Inheritance 
    _ Polymorphism 
    _ Abstraction 
    _ Encapsulation 






Class:- It is a blue print of creating an object like a templete. 
        Class in C++ is user Define Data type That act as a blueprint for creating an object.
        It groups related variables (called data members) and functions (called member function) into a single unit.

object:- Instance of a class with data and fn

Encapsulation:- It is the process of bundling data and method that operate on data into a single unit.

Inheritance:- Allows one class to inheret bheviour and propertis of another class

Polymorphism. :- One fn or method behave differently based on input

Abstraction:- Hides the complex details and shows only necessary features.


Example:- 
    class Student {
    public:
        string name
        int age 
        void display() {
            cout<<"Name"<<name<<"\n";
            }

    }


19 AUG 2026 

Q:- WAP to create a class and find the area of rectangle

#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float breadth;

public:
    void getData() {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    float area() {
        return length * breadth;
    }

    void displayArea() {
        cout << "Area of rectangle = " << area() << endl;
    }
};

int main() {
    Rectangle rectangle;

    rectangle.getData();
    rectangle.displayArea();

    return 0;
}



20 AUG 2026  


Access Specfier :-
    * private 
    * Protected 
    * Public  

Eg:- 
    Class Demo{
        private: int a;
        protected: int b;
        public: 
            int c;
            void set() 
            void show() {
                cout<<a<<b<<c<<endl;

            }
    };

Q:- WAP to display the marks of the students where the marks will be private and set Marks in public.

#include <iostream>
using namespace std;

class Marks {
private:
    int marks;

public:
    void setMarks() {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayMarks() {
        cout << "Entered Marks: " << marks << endl;
    }
};

int main() {
    Marks M;

    M.setMarks();
    M.displayMarks();

    return 0;
}


                                                21 AUG 2026


Q:-
 WAP  to demostrate public, private and protected access specifier .

#include <iostream>
using namespace std;

class Parent {
public:
    int publicData = 10;

protected:
    int protectedData = 20;

private:
    int privateData = 30;

public:
    void showPrivateData() {
        cout << "Private data: " << privateData << endl;
    }
};

class Child : public Parent {
public:
    void showProtectedData() {
        cout << "Protected data: " << protectedData << endl;
    }
};

int main() {
    Parent parent;
    Child child;

    // Public member: accessible outside the class.
    cout << "Public data: " << parent.publicData << endl;

    // Protected member: accessible through a derived-class function.
    child.showProtectedData();

    // Private member: accessible only through a public member function
    // of its own class.
    parent.showPrivateData();

    // The following statements would cause errors:
    // cout << parent.privateData << endl;
    // cout << parent.protectedData << endl;

    return 0;
}


                            Friend Class

A fiend class is a special class that can be access private and protected member of another class ( one class can be friend of another class) 


Friend Function :- A friend fn is a special fn that can access private and protected members. A friend fn not a member       of class but can be access the object of that class.
    A friend can be a :
        * global fn
        * 
        It is define outside the class , I does not use pointer, It like a normal fn.

EX:- 
    class Box {
    private:
        int length = 10;
        Friend voidShow(Box) 

    };


Diff b/w Friend Fn 

* a friend fn can not be member of class             * 
* It is declered using friend fn                     * It is implemented using the base class and drive class .
* It can access private and protected member of a.   * A drive class can be access inherated public and protected membe
    class 
* It is mainly used for special purpose              * It is mainly use for code reuseablity.





25 AUG 2026 

CLASS :
    - Data Members 
    * methods of Function 



Q1:- WAP to create a student class with the member function display, define inside the class.

Q2:- WAP to create a student class with the member function display, define outside the class using scope Resulation operator.

Q3:- WAP to create a calculator class with a inline member function add, Define outside the class.


Sol1:- 

#include <iostream>
using namespace std;

class Student {
public:
    void display() {
        cout << "This is the Student class." << endl;
    }
};

int main() {
    Student student;

    student.display();

    return 0;
}


Sol2:- 
#include <iostream>
using namespace std;

class Student {
public:
    void display();   // Function declaration
};

// Function definition outside the class
// using the scope resolution operator ::

void Student::display() {
    cout << "This is the Student class." << endl;
}

int main() {
    Student student;

    student.display();

    return 0;
}

Sol3:- 

#include <iostream>
using namespace std;

class Calculator {
public:
    inline int add(int a, int b);
};

// Inline member function defined outside the class
inline int Calculator::add(int a, int b) {
    return a + b;
}

int main() {
    Calculator calculator;

    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Sum = " << calculator.add(num1, num2) << endl;

    return 0;
}


31 AUG 2026   (LAB) 

Q1:-WAP a C++ program with a member fn deifned inside the class 
Q2:- WAP a C++ program to create a student class with a member fn display , define outside the class using scope resulation operator.
Q3:- WAp to create a calculator class   with a inline member fn add define outside the class.


Q1:

#include <iostream>
using namespace std;

class Student {
public:
    void display() {
        cout << "Function defined inside the class." << endl;
    }
};

int main() {
    Student student;
    student.display();

    return 0;
}


Q2:

#include <iostream>
using namespace std;

class Student {
public:
    void display();
};

void Student::display() {
    cout << "Function defined outside the class." << endl;
}

int main() {
    Student student;
    student.display();

    return 0;
}

Q3:

#include <iostream>
using namespace std;

class Calculator {
public:
    inline int add(int a, int b);
};

inline int Calculator::add(int a, int b) {
    return a + b;
}

int main() {
    Calculator calculator;
    int num1 = 15, num2 = 25;

    cout << "Sum = " << calculator.add(num1, num2) << endl;

    return 0;
}


01 SEP 2026

# Data Hiding 

Q:- Design a class to represent a bank account with proper data hiding and member function for deposit and withdraw operation.


#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    // Hidden data members (cannot be modified directly from outside)
    string accountNumber;
    string accountHolder;
    double balance;

public:
    // Constructor to initialize the bank account
    BankAccount(string accNum, string holderName, double initialBalance) {
        accountNumber = accNum;
        accountHolder = holderName;
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0.0;
            cout << "Invalid initial balance. Set to 0.0\n";
        }
    }

    // Member function to deposit money safely
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    // Member function to withdraw money with validation
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Withdrawal amount must be positive!" << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance! Current balance: $" << balance << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        }
    }

    // Member function to display account details
    void displayAccount() const {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Current Balance: $" << balance << endl;
        cout << "-----------------------\n" << endl;
    }
};

int main() {
    // Create an account object
    BankAccount myAccount("ACC12345", "Alice Smith", 1000.0);

    myAccount.displayAccount();

    // Perform deposit operation
    myAccount.deposit(500.0);

    // Perform withdrawal operations
    myAccount.withdraw(300.0);
    myAccount.withdraw(1500.0); // Overdraw attempt

    // Display updated details
    myAccount.displayAccount();

    return 0;
}





02 SEP 2026 


# Constructor 

Q1:- WAP to create a class student and use a Constructor, display a student name and age.

Q2:- WAP to create a class or use a default Constructor , to display a student name and age.

Q3:- WAP to create a class student with a paramaterize Constructor , that accept the 
student name and marks and displays them.


Q1: Constructor to Display Name and Age

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1("Alice", 20);
    s1.display();

    return 0;
}

Q2: Default Constructor to Display Name and Age

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Default Constructor
    Student() {
        name = "Unknown";
        age = 0;
    }

    // Display function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1; // Calls default constructor
    s1.display();

    return 0;
}


Q3: Parameterized Constructor to Display Name and Marks

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    // Parameterized Constructor
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    // Display function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1("Bob", 95);
    s1.display();

    return 0;
}































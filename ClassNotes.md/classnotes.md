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





Default Constructor - takes no argument and its called automatically when object is created 
A Parametrized constructor recieves value when object is created 
Q1:- WAP to ctrate a class and use the parameterize constructor add two number ..

Q2:- wap to create a class Student and use a default constructor to display a student ..

Q1:

#include <iostream>
using namespace std;

class Calculator {
private:
    int result;

public:
    // Parameterized Constructor
    Calculator(int a, int b) {
        result = a + b;
    }

    // Display function
    void display() {
        cout << "Sum = " << result << endl;
    }
};

int main() {
    // Object creation calls the parameterized constructor
    Calculator c1(10, 20);
    c1.display();

    return 0;
}

Q2:

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
    // Object creation calls the default constructor
    Student s1;
    s1.display();

    return 0;
}

# LAB
07 SEP 2026 

Q1:- Design a C++ Program to create a multiply class and use a parameterize constructor to multiply two numbers.
Q2:- WAP to create a class rectangle and use parameterised constructor to evalute area of rectangle. 


Q1:
#include <iostream>
using namespace std;

class Multiply {
private:
    int result;

public:
    // Parameterized Constructor
    Multiply(int a, int b) {
        result = a * b;
    }

    // Display function
    void display() {
        cout << "Product = " << result << endl;
    }
};

int main() {
    // Object creation calls the parameterized constructor
    Multiply m1(5, 6);
    m1.display();

    return 0;
}


Q2:
#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float breadth;
    float area;

public:
    // Parameterized Constructor
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
        area = length * breadth;
    }

    // Display function
    void displayArea() {
        cout << "Area of rectangle = " << area << endl;
    }
};

int main() {
    // Object creation calls the parameterized constructor
    Rectangle r1(10.5, 5.0);
    r1.displayArea();

    return 0;
}




Q3:- Develop A program to demostrate different type of constuctors beheviour in object livecycle managment.

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // 1. Default Constructor
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default Constructor called for " << name << endl;
    }

    // 2. Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized Constructor called for " << name << endl;
    }

    // 3. Copy Constructor
    Student(const Student &other) {
        name = other.name;
        age = other.age;
        cout << "Copy Constructor called for " << name << endl;
    }

    // 4. Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }

    // Display function
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    cout << "--- Creating Objects ---" << endl;

    // Calls Default Constructor
    Student s1;

    // Calls Parameterized Constructor
    Student s2("Alice", 20);

    // Calls Copy Constructor
    Student s3 = s2;

    cout << "\n--- Displaying Details ---" << endl;
    s1.display();
    s2.display();
    s3.display();

    cout << "\n--- End of Main (Destructors will be called) ---" << endl;

    return 0;
}




#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;
    int age;
    
public:
    Student() {
        name = "Kamlesh";
        age = 20;
        cout<<"Default Constructor: "<<name<<"\n";
    }
    
    Student( string n, int a) {
        name = n;
        age = a;
        cout<<"Paramertized Constructor: "<<name<<"\n";
    }
    
    void display() {
        cout<<"NAME: "<<name<<"  AGE: "<<age<<"\n";
    }
};

int main() {
	// your code goes here
	
	Student s1; 
	s1.display();
	
	
	Student s2("Kamlesh", 20);
	s2.display();
	

}


Q4: Implement a c++ using a friend function to illustrate shared data and controlled access.


#include <iostream>
#include <string>
using namespace std;

// Forward declaration
class BankAccount;

class Customer {
private:
    string name;
    int customerId;

public:
    Customer(string n, int id) : name(n), customerId(id) {}

    // Declare friend function
    friend void transferFunds(Customer &sender, BankAccount &receiverAccount);
};

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double initialBalance) 
        : accountNumber(accNum), balance(initialBalance) {}

    // Declare same friend function
    friend void transferFunds(Customer &sender, BankAccount &receiverAccount);

    void displayBalance() {
        cout << "Account #" << accountNumber << " Balance: $" << balance << endl;
    }
};

// Friend function definition (outside both classes)
void transferFunds(Customer &sender, BankAccount &receiverAccount) {
    cout << "\n--- Controlled Fund Transfer ---" << endl;
    cout << "Customer: " << sender.name << " (ID: " << sender.customerId << ")" << endl;
    
    // Accessing private members of BankAccount
    cout << "Current Balance: $" << receiverAccount.balance << endl;
    
    double amount = 500.0;
    if (receiverAccount.balance >= amount) {
        receiverAccount.balance -= amount;
        cout << "Transferred: $" << amount << endl;
        cout << "New Balance: $" << receiverAccount.balance << endl;
    } else {
        cout << "Insufficient funds!" << endl;
    }
}

int main() {
    Customer customer("Alice", 1001);
    BankAccount account(12345, 2000.0);

    cout << "Before Transfer:" << endl;
    account.displayBalance();

    // Friend function allows controlled access to private data
    transferFunds(customer, account);

    cout << "\nAfter Transfer:" << endl;
    account.displayBalance();

    return 0;

}


11
05

08 SEP 2026


# Copy Constructor 

when you create a copy an object using another object of same class c++ automatically copies the values of all data members , This is known as default copying or copy constructor.

 *. Syntax:
  class Name(Const Classname &Object) 
  {
    //copy data 
  }

  Example:

  Class Student {
    Public:
        int roll;
        String name;

  }
  int main() {
    Student S1;
    S1.roll = 101;
    S1.name = "Amit";
    Student S2=S1;
    cout<<S2.roll<<S2.name;
  }


  Example:
  class Student {
    private:
        int roll;
        string name;

    public:
        student(int r, string n) { // Parameterized Constructor
            roll=r;
            name=n;


        }
        Student (const Student &S1) {
            roll = S.roll
            name = S.name;
        }
  };


  Q1:- create a class employe having id and salary . initilized the first object use a parametrrized constructor and create the second object using copy constructor. 

  :-
  #include <iostream>
using namespace std;

class Employee {
private:
    int id;
    double salary;

public:
    // 1. Parameterized Constructor
    Employee(int empId, double empSalary) {
        id = empId;
        salary = empSalary;
        cout << "Parameterized Constructor called for Employee ID: " << id << endl;
    }

    // 2. Copy Constructor
    Employee(const Employee &other) {
        id = other.id;
        salary = other.salary;
        cout << "Copy Constructor called for Employee ID: " << id << endl;
    }

    // Display function
    void display() {
        cout << "Employee ID: " << id << ", Salary: $" << salary << endl;
    }
};

int main() {
    cout << "--- Creating Objects ---" << endl;

    // Initialize first object using Parameterized Constructor
    Employee emp1(101, 50000.0);

    // Create second object using Copy Constructor
    Employee emp2 = emp1;

    cout << "\n--- Employee Details ---" << endl;
    emp1.display();
    emp2.display();

    return 0;
}

09 SEP 2026 

# OBJECT AS AN ARGUMENT 

def:- An object can be passed to a function just like a normal variable. Object an argument means passing an object of a clas to a function as an argument.
Object can be passed by the value of by refrence.
Passing by refrence avoids making a copy, an object using a constant , Prevent modification of original object.


Q1:- WAP to swap to number by using call by value .
Q2:- WAP to swap to number by using call by reference.

sol1:- 

#include <iostream>
using namespace std;

// Function using Call by Value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside Function (Swapped): a = " << a << ", b = " << b << endl;
}

int main() {
    int x = 10, y = 20;

    cout << "Before Swap: x = " << x << ", y = " << y << endl;

    swapByValue(x, y);

    cout << "After Swap (Original): x = " << x << ", y = " << y << endl;

    return 0;
} 

Sol2:- 
#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int v) : value(v) {}

    void display() {
        cout << value;
    }
};

// Function using Call by Reference (Object as Argument)
void swapByReference(Number &obj1, Number &obj2) {
    int temp = obj1.value;
    obj1.value = obj2.value;
    obj2.value = temp;
}

int main() {
    Number num1(100);
    Number num2(200);

    cout << "Before Swap: num1 = ";
    num1.display();
    cout << ", num2 = ";
    num2.display();
    cout << endl;

    swapByReference(num1, num2);

    cout << "After Swap:  num1 = ";
    num1.display();
    cout << ", num2 = ";
    num2.display();
    cout << endl;

    return 0;
}

# CLASS TEST
10 SEP 2026 (CLASS TEST) 

Q1. Student Information System – Data Hiding and Encapsulation

A software company wants to develop a student information system where a student's details must remain
protected from unauthorized modification. Design a suitable class demonstrating data hiding, controlling
access to class members, and defining a function outside the class. Implement at least one function as an
inline function outside the class definition. Justify your design choice.

Solution:-






Justification:
• Data members are private, so outside code cannot directly modify student details.
• Public member functions provide controlled access to the private data.
• The inline getName() function is defined outside the class using the inline keyword
• This demonstrates encapsulation and data hiding, improving security and maintainability.



Q2. Employee Class – Dynamic Resources, Constructors and Destructor

Consider a class Employee containing dynamically allocated resources. Implement a class using default,
parameterized, and copy constructors. Also explain its destructor.

Solution:- 


Explanation:
• Dynamic allocation: name is allocated using new and released using delete[].
• Default constructor initializes an empty/default employee.
• Parameterized constructor initializes the object with supplied values.
• Copy constructor performs a deep copy so that each object owns separate memory.
• Destructor automatically releases dynamically allocated memory when the object is destroyed.
Rule of Three: A class managing dynamic memory generally needs a destructor, copy constructor, and
copy-assignment operator.


Q3. BankAccount and Manager – Friend Function and Friend Class

Two classes, BankAccount and Manager, need selective access to each other's private data. Implement a
solution using a friend function and friend classes. Also explain what a friend function and friend class are.


Solution:- 




Friend Function:
A friend function is a non-member function that is declared using the friend keyword inside a class. It can
access the private and protected members of that class.
Friend Class:
A friend class is a class declared with the friend keyword inside another class. All member functions of the
friend class can access the private and protected members of the granting class.

Key points:
• Friendship provides controlled/selective access; it does not make the classes inherit from each other.
• Friendship is granted by the class and should be used carefully because it weakens strict encapsulation.
• In the example, Manager is a friend of BankAccount, while showDetails() is a friend of both classes.




11 SEP 2026

# Destructor 

def:- 
* A destructor is a special member function in a class that is automatically called when an object goes out of scope or is deleted. 
* It is used to released resources like memory, files or network connections.
* Same name as class but with a (tiled) before it.
* No parameters, no return type.

Syntax:

class Demo {
Public:
    Demo() {
        //Constructor Body
    }
    ~Demo() {
        // Destructor Body
    }
};

int main() {
    Demo d1;
    Demo d2;
    return 0;
}


* Destructor always excute in reverse order of constructor 
    -When scope of the object finises
    
Q1:- WAP to create a BankAccount Class that initializes the balance using a constructor and displays a message using a destructor. 

Sol:
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:

    BankAccount(string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
        cout << "Constructor: Account " << accountNumber 
             << " created with balance $" << balance << endl;
    }

    
    ~BankAccount() {
        cout << "Destructor: Account " << accountNumber 
             << " closed. Final balance $" << balance << endl;
    }

   
    void displayBalance() {
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    cout << "--- Starting Program ---" << endl;

    {
       
        BankAccount myAccount("ACC12345", 5000.0);
        myAccount.displayBalance();
    } 
   

    cout << "--- End of Program ---" << endl;

    return 0;
}

Q2:- WAP to create a Car class . Use a constructor to initilized the cars model and price and a destructor to display a message  when the message is destroyed. 

Sol:-

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    double price;

public:
    Car(string carModel, double carPrice) {
        model = carModel;
        price = carPrice;
        cout << "Constructor: Car '" << model 
             << "' initialized with price $" << price << endl;
    }


    ~Car() {
        cout << "Destructor: Car '" << model 
             << "' has been destroyed." << endl;
    }


    void displayDetails() {
        cout << "Model: " << model << ", Price: $" << price << endl;
    }
};

int main() {
    cout << "--- Starting Program ---" << endl;

    {

        Car myCar("Tesla Model 3", 45000.0);
        myCar.displayDetails();
    } 


    cout << "--- End of Program ---" << endl;

    return 0;
}

# LAB 
14 SEP 2026 


6.2:- Develop a program to Demonstrate different types of Destructor , Behaviour in object Life Cycle Managment.
8.1:- WAP to pass object as argument to perform operations on user defined data.

SOL:- 6.2 

#include <iostream>
#include <string>
using namespace std;

// Base Class
class Base {
protected:
    string name;

public:
    Base(string n) : name(n) {
        cout << "Base Constructor: " << name << endl;
    }

    // Virtual Destructor (Important for inheritance)
    virtual ~Base() {
        cout << "Base Destructor: " << name << endl;
    }
};

// Derived Class
class Derived : public Base {
private:
    int* data; // Dynamically allocated memory

public:
    Derived(string n, int value) : Base(n) {
        data = new int(value);
        cout << "Derived Constructor: " << name << " (Data: " << *data << ")" << endl;
    }

    // Destructor to release memory
    ~Derived() {
        cout << "Derived Destructor: " << name << " (Releasing memory...)" << endl;
        delete data; // Prevents memory leak
    }
};

int main() {
    cout << "=== Object Lifecycle Demonstration ===" << endl << endl;

    // 1. Stack Object (Automatic Destruction)
    {
        cout << "--- Block 1: Stack Object ---" << endl;
        Derived stackObj("StackObject", 100);
    } 
    // Destructor called automatically when block ends
    cout << endl;

    // 2. Heap Object (Manual Destruction)
    {
        cout << "--- Block 2: Heap Object ---" << endl;
        Derived* heapObj = new Derived("HeapObject", 200);
        delete heapObj; // Explicitly call destructor
    }
    cout << endl;

    // 3. Array of Objects
    {
        cout << "--- Block 3: Array of Objects ---" << endl;
        Derived arr[2] = {Derived("ArrayObj1", 300), Derived("ArrayObj2", 400)};
    } 
    // Destructors called for all array elements in reverse order
    cout << endl;

    cout << "=== End of Main ===" << endl;
    // Remaining stack objects destroyed here

    return 0;
}

SOL: 8.1 

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    // Constructor
    Student(string n, int m) : name(n), marks(m) {}

    // Display function
    void display() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }

    // Getter for marks
    int getMarks() {
        return marks;
    }

    // Setter for marks
    void setMarks(int m) {
        marks = m;
    }

    // Getter for name
    string getName() {
        return name;
    }
};

// 1. Pass by Value (Creates a copy)
void displayByValue(Student s) {
    cout << "\n--- Pass by Value ---" << endl;
    s.display();
    s.setMarks(100); // Changes won't affect original object
    cout << "Inside function (modified): ";
    s.display();
}

// 2. Pass by Reference (Modifies original object)
void displayByReference(Student &s) {
    cout << "\n--- Pass by Reference ---" << endl;
    s.display();
    s.setMarks(100); // Changes WILL affect original object
    cout << "Inside function (modified): ";
    s.display();
}

// 3. Pass by Pointer
void displayByPointer(Student *s) {
    cout << "\n--- Pass by Pointer ---" << endl;
    s->display();
    s->setMarks(100); // Changes WILL affect original object
    cout << "Inside function (modified): ";
    s->display();
}

// 4. Function returning object
Student createTopper() {
    Student topper("Topper", 99);
    return topper;
}

int main() {
    Student s1("Alice", 85);

    cout << "Original Object: ";
    s1.display();

    // Pass by Value
    displayByValue(s1);
    cout << "After Pass by Value: ";
    s1.display(); // Original unchanged

    // Pass by Reference
    displayByReference(s1);
    cout << "After Pass by Reference: ";
    s1.display(); // Original modified

    // Pass by Pointer
    displayByPointer(&s1);
    cout << "After Pass by Pointer: ";
    s1.display(); // Original modified

    // Function returning object
    Student s2 = createTopper();
    cout << "\nReturned Object: ";
    s2.display();

    return 0;
}








OOP Unit 1

1) Evolution of Programming Paradigms
Programming has evolved step by step to make software easier to write, understand, and maintain.

a) Monolithic Programming
The whole program is written as one large block.

There is no division into smaller parts.

It becomes difficult to debug, modify, and reuse.

Example idea:
A single huge program for billing, inventory, and reporting all mixed together.

Problem:

Hard to maintain

Hard to reuse

Very difficult for large projects

b) Procedural Programming
Program is divided into functions.

Focus is on procedure or step-by-step logic.

Data and functions are separate.

Example languages: C, Pascal

cpp
#include <iostream>
using namespace std;

void greet() {
    cout << "Hello Student" << endl;
}

int main() {
    greet();
    return 0;
}
Advantages:

Easy to understand

Code can be divided into functions

Better than monolithic programming

Limitations:

Data is exposed

Not ideal for very large systems

Reusability is limited

c) Structured Programming
A refined version of procedural programming.

Uses control structures like:

sequence

selection

iteration

Avoids goto as much as possible.

Goal: Make programs more readable and organized.

Example:

cpp
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    if (n > 5) {
        cout << "Greater than 5" << endl;
    } else {
        cout << "Not greater" << endl;
    }
    return 0;
}
Advantages:

Easy debugging

Clear program flow

Better readability

d) Object-Oriented Programming
Program is built using objects.

Data and functions are combined into a single unit called a class.

Real-world things are modeled as objects.

Example: Student, Car, BankAccount

cpp
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Rahul";
    s1.age = 20;
    s1.display();
    return 0;
}
Advantages:

Better data security

Reusable code

Easy maintenance

Real-world modeling


2) Structured vs Object-Oriented Development
Feature	Structured Development	Object-Oriented Development
Approach	Top-down	Bottom-up
Focus	Functions	Objects
Data handling	Separate from functions	Encapsulated with functions
Reusability	Limited	High
Maintenance	Difficult in large systems	Easier
Security	Less secure	More secure
Explanation
In structured programming, the main task is broken into functions.

In OOP, the main task is broken into objects that contain data and behavior.

Example:

Structured: calculateSalary(), printDetails()

OOP: Employee object having salary and methods

3) Structure of a C++ Program
A C++ program usually has the following parts:

Header files

Namespace

main() function

Variable declarations

Input/output statements

Return statement

Example:
cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to C++" << endl;
    return 0;
}
Explanation
#include <iostream>: used for input/output

using namespace std;: allows use of cout, cin

main(): starting point of program

cout: prints output

return 0;: ends program successfully

4) Basics of Classes and Objects
Class
A class is a blueprint or template for creating objects.

Object
An object is a real instance of a class.

Example:

Class: Car

Objects: Honda, Toyota, BMW

C++ Example:
cpp
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    void show() {
        cout << brand << " " << speed << endl;
    }
};

int main() {
    Car c1;
    c1.brand = "Toyota";
    c1.speed = 120;
    c1.show();
    return 0;
}
Key points
Class defines properties and methods

Object stores actual values

Multiple objects can be created from one class

5) Scope Resolution Operator ::
The scope resolution operator is used to access a member outside its scope.

Uses:
Define a function outside class

Access global variable

Access static members

Access namespace members

Example: function outside class
cpp
#include <iostream>
using namespace std;

class Test {
public:
    void display();
};

void Test::display() {
    cout << "Hello" << endl;
}

int main() {
    Test t;
    t.display();
    return 0;
}
Example: global variable
cpp
#include <iostream>
using namespace std;

int x = 10;

int main() {
    int x = 20;
    cout << ::x << endl;
    cout << x << endl;
    return 0;
}
::x means global x

x means local variable

6) Reference Variable
A reference variable is another name for an existing variable.

Syntax:
cpp
int &ref = x;
Example:
cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int &ref = x;

    ref = 20;
    cout << x << endl;
    cout << ref << endl;
    return 0;
}
Output:
cpp
20
20
Features
Reference must be initialized at declaration

Cannot be changed to refer to another variable

Useful in function arguments

7) Parameter Passing in C++
a) Pass by Value
A copy of the actual argument is passed.

cpp
#include <iostream>
using namespace std;

void change(int x) {
    x = 100;
}

int main() {
    int a = 10;
    change(a);
    cout << a << endl;
    return 0;
}
Output: 10
Original value is unchanged.

b) Pass by Reference
The actual variable is passed using reference.

cpp
#include <iostream>
using namespace std;

void change(int &x) {
    x = 100;
}

int main() {
    int a = 10;
    change(a);
    cout << a << endl;
    return 0;
}
Output: 100
Original value changes.

c) Pass by Address
Pointer is used to pass address of variable.

cpp
#include <iostream>
using namespace std;

void change(int *x) {
    *x = 100;
}

int main() {
    int a = 10;
    change(&a);
    cout << a << endl;
    return 0;
}
Difference
Method	What is passed	Can modify original?
Value	Copy	No
Reference	Variable alias	Yes
Address	Memory address	Yes
8) Inline Functions
An inline function requests the compiler to replace the function call with the actual code.

Example:
cpp
#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    cout << square(5) << endl;
    return 0;
}
Advantages
Faster execution for small functions

Reduces function call overhead

Disadvantages
Not suitable for large functions

May increase code size

9) Function Overloading
Function overloading means two or more functions have the same name but different parameters.

Example:
cpp
#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Math m;
    cout << m.add(2, 3) << endl;
    cout << m.add(2.5f, 3.5f) << endl;
    return 0;
}
Rules
Same function name

Different parameter list

Return type alone cannot distinguish overloads

10) Default Arguments
A default argument is a value assigned to a function parameter when no value is passed.

Example:
cpp
#include <iostream>
using namespace std;

void greet(string name = "Student") {
    cout << "Hello " << name << endl;
}

int main() {
    greet();
    greet("Rahul");
    return 0;
}
Output
cpp
Hello Student
Hello Rahul
Important point
Default arguments should usually be given from right to left.

11) Function with Variable Number of Arguments
Such functions accept different numbers of arguments. In C++, this is done using variadic functions.

Example using ...
cpp
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
    cout << sum(3, 10, 20, 30) << endl;
    return 0;
}
Output
cpp
60
Use
Logging

Formatting functions

Utility functions

12) auto Keyword
auto tells the compiler to automatically deduce the variable type.

Example:
cpp
#include <iostream>
using namespace std;

int main() {
    auto x = 10;
    auto y = 3.14;
    auto name = "C++";
    cout << x << " " << y << " " << name << endl;
    return 0;
}
Benefits
Saves typing

Improves readability in complex types

13) Range-Based For Loop
Used to loop through arrays, containers, and collections easily.

Example:
cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
Output
cpp
10 20 30 40
Example with reference
cpp
for (int &x : arr) {
    x = x + 5;
}
14) Important Exam Points
OOP improves code reusability and maintainability.

Class is a blueprint, object is its instance.

:: is used for scope resolution.

Reference variables act as aliases.

Pass by value does not change original data.

Pass by reference and address can change original data.

Inline functions are best for small functions.

Function overloading is compile-time polymorphism.

Default arguments reduce function-call complexity.

auto helps type deduction.

Range-based for loop makes traversal easy.

15) Short Revision Summary
Concept	Meaning
Concept	Meaning
Class	Blueprint of objects
Object	Instance of class
Reference variable	Another name for same variable
Scope resolution ::	Access outer/global/class scope
Inline function	Function expanded at call site
Function overloading	Same name, different parameters
Default argument	Predefined function parameter value
Variadic function	Function with variable arguments
auto	Automatic type deduction
Range-based loop	Easy loop through elements
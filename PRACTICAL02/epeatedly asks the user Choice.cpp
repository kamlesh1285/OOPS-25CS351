// C++ program that repeatedly asks the user to choose a shape — square, circle, or triangle — and then calculates both area and perimeter until the user wants to stop. The formulas used are the standard geometric formulas for these shapes.


// Algorithm
// 1. Start the program.

// 2. Ask the user to enter a shape name: square, circle, or triangle.

// 3. According to the shape:

// 4. For square, input side and calculate area = side × side, perimeter = 4 × side.

// 5. For circle, input radius and calculate area = 3.14 × r × r, perimeter = 2 × 3.14 × r.

// 6. For triangle, input three sides and height; calculate area = 0.5 × base × height, perimeter = sum of three sides.

// 7. Display the area and perimeter.

// 8. Ask the user whether to continue.

// 9. Repeat until the user enters no.



#include <iostream>
#include <string>
using namespace std;

int main() {
    string shape, choice = "yes";

    while (choice == "yes" || choice == "YES" || choice == "Yes") {
        cout << "Enter shape (square, circle, triangle): ";
        cin >> shape;

        if (shape == "square") {
            float side, area, perimeter;
            cout << "Enter side of square: ";
            cin >> side;

            area = side * side;
            perimeter = 4 * side;

            cout << "Area of square = " << area << endl;
            cout << "Perimeter of square = " << perimeter << endl;
        }
        else if (shape == "circle") {
            float radius, area, perimeter;
            cout << "Enter radius of circle: ";
            cin >> radius;

            area = 3.14 * radius * radius;
            perimeter = 2 * 3.14 * radius;

            cout << "Area of circle = " << area << endl;
            cout << "Perimeter of circle = " << perimeter << endl;
        }
        else if (shape == "triangle") {
            float a, b, c, h, area, perimeter;
            cout << "Enter base of triangle: ";
            cin >> a;
            cout << "Enter second side of triangle: ";
            cin >> b;
            cout << "Enter third side of triangle: ";
            cin >> c;
            cout << "Enter height of triangle: ";
            cin >> h;

            area = 0.5 * a * h;
            perimeter = a + b + c;

            cout << "Area of triangle = " << area << endl;
            cout << "Perimeter of triangle = " << perimeter << endl;
        }
        else {
            cout << "Invalid shape choice!" << endl;
        }

        cout << "Do you want to continue? (yes/no): ";
        cin >> choice;
    }

    cout << "Program ended." << endl;
    return 0;
}

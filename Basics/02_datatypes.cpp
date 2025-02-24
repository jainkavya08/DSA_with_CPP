#include <iostream>  // Standard library for input and output
#include <string>    // Library for string data type

using namespace std; // Use standard namespace to avoid writing std::

int main() {
    // Integer data type: Stores whole numbers (positive or negative)
    int age = 25;
    cout << "Age: " << age << endl;

    // Float data type: Stores decimal numbers (up to 6 decimal places)
    float price = 99.99;
    cout << "Price: " << price << endl;

    // Double data type: Stores larger decimal numbers (up to 15 decimal places)
    double pi = 3.141592653589793;
    cout << "Value of Pi: " << pi << endl;

    // Character data type: Stores a single character
    char grade = 'A';
    cout << "Grade: " << grade << endl;

    // Boolean data type: Stores true (1) or false (0)
    bool isPassed = true;
    cout << "Passed: " << isPassed << endl;  // Will print 1 (true)

    // String data type (Not a primitive type but commonly used)
    string name = "Kavya";
    cout << "Name: " << name << endl;

    return 0; // Return 0 to indicate successful execution
}

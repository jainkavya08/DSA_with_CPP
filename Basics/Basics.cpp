#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid writing std:: every time

int main() {
    string name;  // Variable to store user input
    int age;      // Variable to store user input

    // Prompt user for input
    cout << "Enter your name: ";
    cin >> name;  // Take a single-word input

    cout << "Enter your age: ";
    cin >> age;   // Take integer input

    // Display output
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0; // Return 0 to indicate successful execution
}

#include <iostream>
using namespace std;

/******************** If-Else **************************************/

// // write a program that takes input of age 
// // and prints if you are adult or not

// int main ()
// {
//     int age;
//     cout << " Enter your age : " ;
//     cin >>age;

//     if (age >= 18 ) {     // If you are having an if its not mandatory to have an else statement
//         cout << "Adult" ;
//     }
//     else {
//         cout << "Not adult ";
//     }
//     return 0;
// }

/******************** If-Else **************************************/

/*
A school has following rules for grading system :
a. below 25 - F
b. 25 to 44 - E 
c. 45 - 49 - D
d. 50 - 59 - C
e. 60 - 79 - B 
f. 80 - 100 - A
Ask users to enter their marks & print corresponding grade.
*/
int main ()
{

    int marks;
    cout << "Enter your marks : " ;
    cin >>marks;

    if (marks < 25) {
        cout << "Grade F ";
    }

    if (marks >= 25 && marks <= 44 ){
       cout << "Grade E "; 
    } 

    if (marks >= 45 && marks <= 49 ){
       cout << "Grade D "; 
    } 

    if (marks >= 50 && marks <= 59 ){
       cout << "Grade C "; 
    } 

    if (marks >= 60 && marks <= 79 ){
       cout << "Grade B "; 
    } 

    else {
        cout << "Grade A";
    }
    return 0;
}
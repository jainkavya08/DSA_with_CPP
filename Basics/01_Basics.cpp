#include <iostream> 
#include <iomanip>      //required for setw and set precision 
using namespace std;

/**************** Cout **********************/
// int main () {
//     cout << "Hello world " << endl;     // Prints a text
//     cout << " The number is : " << 44 << endl;      // Prints a number 
//     cout << " The sum of 5 and 3 is: " << 5 + 3 << endl;       // Prints and Expression

//     return 0;
// }

/**************** Cin **********************/
// int main () {
//     int age ;
//     cout << " Enter your age: " ;
//     cin >> age;
//     cout << " You are " << age << " years old. " <<endl;
//     return 0;
// }

/**************** Taking multiple Inputs **********************/
// int main () {
//     int num1 , num2;
//     cout << " Enter two number : " << endl;
//     cin >> num1 >> num2 ;
//     cout << "Sum : " << num1 + num2 << endl;
//     return 0;
// }

/**************** getline() **********************/
// int main () {
//     string name;
// 	cout << "Enter your full name: " ;
// 	getline ( cin , name ); // Reads the full line 
// 	cout << "Hello, " << name << endl;
// 	return 0;
// }

/**************** setw and setprecision **********************/
// int main () {
//     double price = 124.456;

//     cout << "Price (default): " << price << endl;
//     cout << "Price ( 2 decimals ): " << fixed << setprecision(2) << price << endl;
//     cout << "Price with 10 width: " << setw(10) << price << endl;
// }

/**************** cerr **********************/
// int main () {
//     cerr << "Error : Invalid input " ;
// }

/**************** clog **********************/
int main () {
    clog << " This is log message . \n " ;
    return 0;
}




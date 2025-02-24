#include <iostream>  // Standard input-output library
using namespace std; // Use standard namespace

int main () 
{
    // Declare variables for age , marks and number
    int age , marks , num;

    /********** SIMPLE IF-ElSE statement (Checking Voting Eligibility)*****************/
    cout <<"Enter your age : " ;  //Take user input
    cin >> age;  

    if (age >= 18 ) {
        cout << "You are Eligible to vote " << endl;
    }
    else {
        cout << " You are not Eligibile to vote " << endl;
    }


}
#include <iostream>  // Standard input-output library
using namespace std; // Use standard namespace

int main () 
{
    // Declare variables for age , marks and number
    int age , marks , num;

    /********** SIMPLE IF-ElSE statement (Checking Voting Eligibility)*****************/
    
    cout <<"Enter your age : " ;  //Take user input
    cin >> age;  

    if (age >= 18 ) {      //If age is 18 or more
        cout << "You are Eligible to vote " << endl;
    }
    else {          // If age is less than 18
        cout << " You are not Eligibile to vote " << endl;
    }

    cout << "-----------------------------------" << endl;

    

}
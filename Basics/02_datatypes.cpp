#include<iostream>
using namespace std;

int main()
{
    /********************************* int ******************************/
    int a = 10;

    /********************************* long , long long ******************************/
    long b = 15;
    cout << "Enter value of b :" ;
    cin>>b;
    cout << "Value of b is : " << b << endl;

    long long c = 1500000000;

   /********************************* float and double ******************************/
    float d = 5.6;
    double e = 5;

    cout <<"Value of e : " << e << endl;

    /********************************* string & getline ******************************/

    string s1,s2;
    cin >> s1 >> s2;
    cout << s1 <<" "<< s2;

    string name;
    cout <<"Enter your name : " ;
    getline(cin, name);
    cout << name;


    /********************************* Character ******************************/

    char ch;
    cin>> ch;
    cout <<ch;

    return 0;
    
}
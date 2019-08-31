//Global Scope
//Name: Jermaine Reid
//Assignment: hello.cpp
//Date: 08/31/2019
/*Description: This program will
display the message "Hello World"
on its own line*/

#include <iostream>
using namespace std;

int a = 5;
//Global Scope
int main()
{
    //int a = 6;
    cout << a;
    //Local Scope
    cout << "Hello World ";
    {
        int a = 8;
        //Local Scope Child
        cout << "Hello People\n";
        
    }
    return 0;
}
//Global Scope
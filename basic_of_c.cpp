/*
clrscr() is an abbreviation of the clear screen. It aims to clear the console screen. clrscr() is a library function located in the console input output header file <conio.h>. The previous screen on the console is cleared whenever the clrscr () is invoked in a program. To call the clrscr() function, it must define inside any function or the main function.
*/

#include <stdio.h>
/*
iostream stands for standard input-output stream. #include iostream declares objects that control reading from and writing to the standard streams. In other words, the iostream library is an object-oriented library that provides input and output functionality using streams.
*/
#include <iostream>

/*
The std is a short form of standard, the std namespace contains the built-in classes and declared functions. You can find all the standard types and functions in the C++ "std" namespace. There are also several namespaces inside "std."
*/
using namespace std;

// main() is where program execution begins.
int main()
{
    int a, b, sum;
    string username = "User";

    cout
        << "Enter your name : ";
    cin >> username;
    cout << "Dear " << username << " this program is for testing purpose." << endl;

    cout << "now we are going to do sum of two values." << endl;

    cout
        << "please enter values." << endl;
    cout << "enter value for a : ";
    cin >> a;
    cout << "enter value for b : ";
    cin >> b;
    sum = a + b;
    cout << "\n\nthe sum of " << a << " and " << b << " is " << sum << endl
         << endl;
    cout << "bye bye " << username << ".";

    return 0;
}
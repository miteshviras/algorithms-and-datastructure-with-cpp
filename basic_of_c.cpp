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
    cout << "hello \n please enter values.\n";
    cout << "enter value for a : ";
    cin >> a;
    cout << "enter value for b : ";
    cin >> b;
    sum = a + b;
    cout << "\n\nthe sum of " << a << " and " << b << " is " << sum << "\n\n";

    return 0;
}
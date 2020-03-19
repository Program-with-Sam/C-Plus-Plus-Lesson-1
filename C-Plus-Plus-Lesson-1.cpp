// This is our IO library
#include <iostream>

// Need the namespace so we don't have to type std every time
using namespace std;

int main()
{
    // Declare a variable to store data
    string name;
    // Ask user for input
    cout << "What is your name?: ";
    // Get user input (stops on enter)
    cin >> name;
    // Output the user input
    cout << "Your name is " << name << endl;

    // Declare a variable to store data
    int age;
    // Ask user for input
    cout << "What is your age?: ";
    // Get user input
    cin >> age;
    // Output the user input
    cout << "Your age is: " << age;
}



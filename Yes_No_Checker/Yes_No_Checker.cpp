// Yes_No_Checker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace::std;

bool yes_no_checker(string question) {
    cout << question << "\n  :";
    string user_yes_no;
    while (true) {
        getline(cin, user_yes_no);
        if (user_yes_no == "yes") {
            return true;
        }
        else if (user_yes_no == "no") {
            return false;
        }
        else {
            cout << "please enter yes or no\n  :";
        }
    }
}


int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

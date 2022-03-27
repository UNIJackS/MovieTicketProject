
#include <iostream>
#include <string>
#include <algorithm>

using namespace::std;
// This fucntion takes a question then asks it and returns a valid stirng
string string_checker(string question) {
	string user_input;
	int test_int;
	float test_float;
    cout << question << endl << "  :";
	bool infinate_loop = true;
	while (infinate_loop == true) {
		getline(cin,user_input);
		// this try statment tests if what the user inputed will convert to a interger
		try
		{
			test_int = stoi(user_input);
		}
		catch (const std::exception&)
		{
			// this try statment tests if what the user inputed will convert to a float
			try
			{
				test_float = stoi(user_input);
			}
			catch (const std::exception&)
			{
				return user_input;
			}
		}
		cout << "plese enter a string" << endl << "  :";
	}
}




int main()
{
	string name = string_checker("enter name");
	cout << endl << "name entered :" << name << endl;

}

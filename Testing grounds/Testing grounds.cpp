
#include <iostream>
#include <regex>
#include <string>
#include <algorithm>
#include <vector>


using namespace::std;

int main()
{
	string user_input;
	regex range0_9 ("[0-9]");
	string snacks[] = { "popcorn","drink","soda"};
	smatch regex_results;

	int num_of_snacks;
	string str_num_of_snacks;
	int snack_type;
	
	cout << "enter num" << endl << "  :";
	getline(cin, user_input);
	if (regex_search(user_input, regex_results,range0_9)) {
		str_num_of_snacks = regex_results[0];
		num_of_snacks = stoi(str_num_of_snacks);
	}
	else
	{
		num_of_snacks = 1;
	}
	cout << num_of_snacks;
	
	for (int i = 0; i < sizeof(snacks); i += 1) {
		if (user_input.find(snacks[i]) != string::npos){
			snack_type = i;
		}
	}
	cout << "snack type :" << snacks[snack_type];






	
	

}
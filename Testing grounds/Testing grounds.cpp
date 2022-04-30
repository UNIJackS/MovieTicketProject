#include <iostream>
#include <regex>
#include <string>



using namespace::std;

int main()
{
	string user_input;
	regex range0_9 ("[0-9]");
	string snacks[] = { "Popcorn","M & M's","Pita Chips","Orange Juice","Water"};
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
	cout << "num of snacks :" << num_of_snacks << endl;;
	cout << "size of snacks :" << sizeof(snacks) / sizeof(snacks[0]) << endl;
	for (int i = 0; i < sizeof(snacks) / sizeof(snacks[0]); i += 1) {
		if (user_input.find(snacks[i]) != std::string::npos) {
			std::cout << "found!" << '\n';
			snack_type = i;
		}
	}
	cout << "snack type :" << snacks[snack_type];
}
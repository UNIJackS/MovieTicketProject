// 6-CSV_file_maker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <fstream>
#include <iostream>
using namespace::std;

int const max_tickets = 3;

ofstream attendee_details("attendee_details.csv");

string snacks[] = { "popcorn","M & M's","Pita Chips","Orange Juice","Water" };

int snack_info[max_tickets][sizeof(snacks) / sizeof(snacks[0])];

void csv_file_writter(int ID,string name,int age,int ticket_price,int snack_cost) {
	attendee_details << "Person #:" << ID << endl;
	attendee_details << "Name :" << name << endl;
	attendee_details << "Age :" << age << endl;
	for (int t = 0;t < sizeof(snacks) / sizeof(snacks[0]); t += 1) {
		attendee_details << snacks[t] << " x " << snack_info[ID][t] << endl;
	}
	float total_price = ticket_price + snack_cost;
	attendee_details << "Total price :" << total_price << endl << endl << endl;
}




int main()
{
	for (int i = 0; i < max_tickets; i += 1) {
		cout << "name :";
		string name;
		cin >> name;
		cout << "age :";
		int age;
		cin >> age;
		cout << "ticket_price :";
		int ticket_price;
		cin >> ticket_price;
		cout << "snack_cost :";
		int snack_cost;
		cin >> snack_cost;
		csv_file_writter(i, name, age, ticket_price, snack_cost);
	}
	
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

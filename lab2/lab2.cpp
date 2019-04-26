
#include "pch.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;
struct abiturient
{
	string name;
	string surname;
	string paronymic;
	string sex;
	string nationality;
	int date[3];
	int phonenumber;
	struct adress
	{
		int post;
		string country;
		string region;
		string area;
		string town;
		int house;
		int flat;
	}adress;
	int mark;
	int dopuskmark;
} pupil;

void input(vector<abiturient> &pupil, int counter)
{

	cout << "Enter name(ex. Eugene)		" << endl;
	cin >> pupil[counter].name;
	cout << "Enter sur name(ex. Truman)		" << endl;
	cin >> pupil[counter].surname;
	cout << "Enter paronymic(ex. Ivanivich)		" << endl;
	cin >> pupil[counter].paronymic;
	cout << "Your nationality is (ex. ukrainian)" << endl;
	cin >> pupil[counter].nationality;
	cout << "Enter your sex(M/m - man, W/w - woman)" << endl;
	for (;;)
	{
		cin >> pupil[counter].sex;
		if (pupil[counter].sex == "M" || pupil[counter].sex == "m" || pupil[counter].sex == "man" || pupil[counter].sex == "Man")
		{

			pupil[counter].sex = "Man";
			break;
		}
		else if (pupil[counter].sex == "W" || pupil[counter].sex == "w" || pupil[counter].sex == "woman" || pupil[counter].sex == "Woman")
		{
			pupil[counter].sex = "Woman";
			break;
		}
		else
		{
			continue;
		}
	}

	

	cout << "Enter your exam mark (ex. 1)		" << endl;
	for (;;)
	{

		cin >> pupil[counter].mark;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
			pupil[counter].mark = 0;
		}
		if (pupil[counter].mark > 0)
			break;
	}

	cout << "Enter acess mark (ex. '170')		" << endl;
	for (;;)
	{
		cin >> pupil[counter].dopuskmark;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
			pupil[counter].dopuskmark = 0;
		}
		if (pupil[counter].dopuskmark > 120 && pupil[counter].dopuskmark < 199)
			break;
	}
	cout << "Enter phone number - 9 digits (ex. 0123456789)		" << endl;
	for (;;)
	{
		cin >> pupil[counter].phonenumber;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
			pupil[counter].phonenumber = 0;
		}
		if (pupil[counter].phonenumber > 111111119 && pupil[counter].phonenumber < 10000000000)
			break;
	}

	for (;;)
	{
		cout << "Enter year of birthday	(ex. 2000)	" << endl;
		for (;;)
		{
			for (;;)
			{
				cin >> pupil[counter].date[2];
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
					pupil[counter].date[2] = 0;
				}
				if (pupil[counter].date[2] > 0 && pupil[counter].date[2] < 2020)
				{
					break;
				}
			}
			if (pupil[counter].date[2] > 0 && pupil[counter].date[2] < 2020)
			{
				break;
			}
			else
			{
				cout << "Please tell the truth" << endl;
			}
		}
		cout << "Enter month of birthday (ex. 5)	" << endl;
		for (;;)
		{
			for (;;)
			{
				cin >> pupil[counter].date[1];
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
					pupil[counter].date[1] = 0;
				}
				if (pupil[counter].date[1] > 0 && pupil[counter].date[1] < 13)
				{
					break;
				}
			}
			if (pupil[counter].date[1] > 0 && pupil[counter].date[1] < 13)
			{
				break;
			}
			else
			{
				cout << "Please tell the truth" << endl;
			}
		}
		cout << "Enter day of birthday(ex. 23)		" << endl;
		for (;;)
		{
			for (;;)
			{
				cin >> pupil[counter].date[0];
				if (cin.fail())
				{
					cin.clear();
					cin.ignore();
					pupil[counter].date[0] = 0;
				}
				if (pupil[counter].date[0] > 0 && pupil[counter].date[0] < 32)
				{
					break;
				}
			}

			if (pupil[counter].date[0] > 0 && pupil[counter].date[0] < 32)
			{
				break;
			}
			else
			{
				cout << "Please tell the truth" << endl;
			}

		}
		break;
	}

	cout << "Enter your post index (ex. 65000)" << endl;
	for (;;)
	{
		cin >> pupil[counter].adress.post;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
			pupil[counter].adress.post = 0;
		}
		if (pupil[counter].adress.post > 9999 && pupil[counter].adress.post < 100000)
			break;
	}

	cout << "Enter your country (ex. Ukraine)" << endl;
	cin >> pupil[counter].adress.country;

	cout << "Enter your region (ex. Od. region)" << endl;
	cin >> pupil[counter].adress.region;

	cout << "Enter your area (ex. Tairova)" << endl;
	cin >> pupil[counter].adress.area;


	cout << "Enter your town (ex. Odessa)" << endl;
	cin >> pupil[counter].adress.town;

	cout << "Enter  number of your house (ex. 64)" << endl;
	for (;;)
	{
		cin >> pupil[counter].adress.house;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
			pupil[counter].adress.house = 0;
		}
		if (pupil[counter].adress.house > 0)
			break;
	}

	cout << "Enter number of your flat (ex. 52)" << endl;
	for (;;)
	{
		cin >> pupil[counter].adress.flat;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
			pupil[counter].adress.flat = 0;
		}
		if (pupil[counter].adress.flat > 0)
			break;
	}
}
void output(vector<abiturient> &pupil, int i)
{

	cout << "\tInformation about user #" << i + 1 << "\t" << endl;
	cout << "Name:\t\t\t" << pupil[i].name << endl;
	cout << "Surname:\t\t" << pupil[i].surname << endl;
	cout << "Patronymic:\t\t" << pupil[i].paronymic << endl;
	cout << "Sex:\t\t\t" << pupil[i].sex << endl;
	cout << "Nationality:\t\t" << pupil[i].nationality << endl;
	cout << "Date of birthsday:\t" << pupil[i].date[0] << "." << pupil[i].date[1] << "." << pupil[i].date[2] << endl;
	cout << "Phone nomber:\t\t" << pupil[i].phonenumber << endl;
	cout << "Country:\t\t" << pupil[i].adress.country << endl;
	cout << "Region:\t\t\t" << pupil[i].adress.region << endl;
	cout << "Area:\t\t\t" << pupil[i].adress.area << endl;
	cout << "Town:\t\t\t" << pupil[i].adress.town << endl;
	cout << "Post index:\t\t" << pupil[i].adress.post << endl;
	cout << "House:\t\t\t" << pupil[i].adress.house << endl;
	cout << "Flat:\t\t\t" << pupil[i].adress.flat << endl;
	cout << "Acsess mark:\t\t\t" << pupil[i].dopuskmark << endl;
	cout << "Mark:\t\t\t" << pupil[i].mark << endl;
}
void sort_by_surname(vector<abiturient> &pupil)
{
	for (int i = 0; i < pupil.size(); i++)
	{
		for (int j = i + 1; j < pupil.size(); j++)
		{
			if (strcmp(pupil[i].name.c_str(), pupil[j].name.c_str()) > 0)
			{
				swap(pupil[i], pupil[j]);
			}
		}
	}
}
void sort__by_date(vector<abiturient> &pupil)
{
	for (int i = 0; i < pupil.size(); i++)
	{
		for (int j = i + 1; j < pupil.size(); j++)
		{
			int temp1 = pupil[i].date[0] + (pupil[i].date[1] * 30) + (pupil[i].date[2] * 365);
			int temp2 = pupil[j].date[0] + (pupil[j].date[1] * 30) + (pupil[j].date[2] * 365);
			if (temp1 < temp2)
			{
				swap(pupil[i], pupil[j]);
			}
		}
	}
}
int main_menu()
{
	system("cls");
	int variant;
	cout << "Choose an action\n" << endl;
	cout << "1. Add user\n"
		<< "2. Sort by surname\n"
		<< "3. Sort by date\n"
		<< "4. Look at list\n"
		<< "5. Search\n"
		<< "6. Exit\n" << endl;
	cout << ">>> ";
	for (;;)
	{
		cin >> variant;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
			variant = 0;
		}

		if (variant > 0 && variant < 7)
			break;
	}
	return variant;
}
void search(vector<abiturient> &pupil)
{
	cout << "\nPlease enter 'Last name' for searching\n";
	string str;
	cin >> str;
	int count = 0;
	for (int i = 0; i < pupil.size(); i++)
	{
		if (pupil[i].surname == str)
		{
			output(pupil, i);
			count++;
		}
	}
	if (count == 0)
		cout << "ERROR\n";
}
int main()
{
	setlocale(LC_ALL, "rus");
	int counter = 0;
	vector <abiturient> null(1);
	vector<abiturient> pupil(counter);
	for (;;)
	{
		int variant = main_menu();
		switch (variant)
		{
		case 1:
			for (counter;;)
			{
				system("cls");
				pupil.push_back(null[0]);
				input(pupil, counter);
				counter = counter + 1;
				system("cls");
				cout << "Choose an action\n" << endl;
				cout << "1. Add user\n"
					<< "2. Back\n" << endl;
				cout << ">>> ";
				for (;;)
				{
					try
					{
						cin >> variant;
					}
					catch (...)
					{
						if (cin.fail())
						{
							cin.clear();
							cin.ignore();
							variant = 0;
						}
					}
					if (variant > 0 && variant < 3)
						break;
				}
				if (variant == 1)
				{
					continue;
				}
				else
				{

					break;
				}
			}
			variant = 0;
			break;

		case 2:
			if (pupil.size() == 0)
			{
				cout << "ERROR\n";
				system("PAUSE");
			}
			else
			{
				for (int i = 0; i < pupil.size(); i++)
				{
					sort_by_surname(pupil);
				}

			}
			break;
		case 3:
			if (pupil.size() == 0)
			{
				cout << "ERROR\n";
				system("PAUSE");
			}
			else
			{
				for (int i = 0; i < pupil.size(); i++)
				{
					sort__by_date(pupil);
				}

			}
			break;
		case 4:
			if (pupil.size() == 0)
			{
				cout << "ERROR\n";
				system("PAUSE");
			}
			else
			{
				for (int i = 0; i < pupil.size(); i++)
				{
					output(pupil, i);
				}
				system("PAUSE");
			}

			break;
		case 5:
			for (;;)
			{
				if (pupil.size() == 0)
				{
					cout << "ERROR\n";
					system("PAUSE");
				}
				else
				{
					search(pupil);
					system("PAUSE");
				}
				system("cls");
				cout << "Choose an action\n" << endl;
				cout << "1. Search user\n"
					<< "2. Back\n" << endl;
				cout << ">>> ";
				for (;;)
				{
					try
					{
						cin >> variant;
					}
					catch (...)
					{
						if (cin.fail())
						{
							cin.clear();
							cin.ignore();
							variant = 0;
						}
					}
					if (variant > 0 && variant < 3)
						break;
				}
				if (variant == 1)
				{
					continue;
				}
				else
				{

					break;
				}
			}
			variant = 0;
			break;

		case 6:
			system("cls");
			cout << "Exit" << endl;
			system("PAUSE");
			exit(0);
		}
	}
}



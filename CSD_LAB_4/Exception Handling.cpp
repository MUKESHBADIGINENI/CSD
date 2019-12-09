// ConsoleApplication11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<string>
#include <iostream>
#include <iostream>
using namespace std;

int main()
{
	int opp;
	char c1, c2;

LOOP:do 
{
	cout << "Please choose an option\n[1]Load\n[2]Save to file\n[3]Exit";
	cin >> opp;
	if (opp > 0 && opp < 4)
	{
		if (opp == 1)
		{
			cout << "Loading a file....\nWould you like to end the program?(y/n)";
			cin >> c1;
			//if (c1 == '110')
			//{
			//cout << "Please choose an option\n[1]Load\n[2]Save to file\n[3]Exit";
			//}
			if (c1 == 'y' || c1=='Y')
				cout << "Program Exits";
			else
				goto LOOP;
		}
		if (opp == 2)
		{
			cout << "Saving the file....\nWould you like to end the program?(y/n)";
			cin >> c2;
			//if (c2 == '110')
			//{
				//cout << "Please choose an option\n[1]Load\n[2]Save to file\n[3]Exit";
			//}
			if (c2 == 'y' || c2=='Y')
				cout << "Program Exits";
			else
				goto LOOP;
		}
		if (opp == 3)
			cout << "Porgram exits";
	}
	if (opp > 3)
	{
		cout << "\nOption Doesnot exist please select again";
		goto LOOP;
	}
	if (opp >= 'a' || opp <= 'z')
	{
		cout << "\nWrong Input Please select again";
		//break;
		goto LOOP;

	}

}
while (opp < 0);
{
	return 0;
}
}

#include<iostream>
#include<string>
#include<fstream>
#include"login.h"
#include"Currency.h"
#include"Profile.h"
using namespace std;




int main()
{
	int choice = 2, choicecal;
	int input;
	bool loginconfirm;
	//	LoginSignup login;
	int choice2;
	Currency c;
	string currency1, currency2;
	double amount;
	Profile p;
	//loop to begin the program
	while (choice == 2)
	{
		//this function will handle login,singup
		input = p.welcome();
		if (input == 3)
		{
			break;
		}
		choicecal = p.displayUserInfo();
		if (choicecal == 1)
		{
			do
			{
				//currency converter
				c.setConvertedAmount(currency1, currency2, amount);

				//making/upgrading profile
				p.end(currency1, currency2);

				//logout or again use calculator
				choice2 = p.logout();

			} while (choice2 == 1);
			{

			}

		}

	}
	p.exit();
	system("pause");

}

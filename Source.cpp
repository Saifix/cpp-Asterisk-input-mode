#include <iostream>
#include <string>
#include"conio.h" // used for getch
using namespace std;

void main()
{

	//seperated area is your required answer
	//*********************************************************************************************************************
	cout << "Please input Password(Press enter when you're done) : ";
	char ch; //entering password in ch
	string create_password;
	do
	{
		ch = _getch(); //get charachter
		create_password.push_back(ch); //inserting password string variable by Queue concept
		putchar('*'); //Printing * for every character
	} while (ch != '\x0D'); // terminate when enter is pressed. "\x0D" escape sequence code for enter key
	create_password.pop_back(); //removing last value from queue because enter also becomes part of the password
	//*********************************************************************************************************************


	cout <<endl<< "Password you entered : " << create_password<<endl ; //checking password that we entered
	cout << "Checking password for validty : ";
	if (create_password == "saif")//checking that queue has entered the charachters in string rightly or not
	{
		cout << "Password verified" << endl;
	}
	else
	{
		cout << "wrong " << endl;
	}

	system("pause");
}
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	string username = "";
	string password = "";
	char obscure = ' ';
	bool loginsuccess = false;

	cout << "\tWelcome! Please login below. \n\n";

	do {
		cout << "Username: ";
		cin >> username;
		cout << "Password: ";
		while (obscure != 13){
            obscure = getch();
            if (obscure != 13){
                password += obscure;
                cout << "*";
            }
		}
		cin >> password;

		if (username == "admin" && password == "password") {
			cout << "Login Success!\n\n";
			loginsuccess = true;
		}
		else {
			cout << "Incorrect Credentials!\n\n";
		}

	} while (!loginsuccess);

	return 0;
}

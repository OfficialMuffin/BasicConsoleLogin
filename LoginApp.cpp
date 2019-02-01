#include <iostream>
#include <string>

using namespace std;

int main()
{
	string username = "";
	string password = "";
	bool loginsuccess = false;

	cout << "\tWelcome! Please login below. \n\n";

	do {
		cout << "Username: ";
		cin >> username;
		cout << "Password: ";
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

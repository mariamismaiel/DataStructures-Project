#include <iostream>
#include <string>
using namespace std;

void Login_Page()
{
	string Mail, password;
	cout << "Please Enter Your Mail:\n"; cin >> Mail;
	cout << "\n Please Enter Your Password\n"; cin >> password;

}
void Registeration_Page() {
	cout << "\t\t\t\tWelcome To Blood Bank Management System\t\t\t\t\n";
	cout << " If You're a DONOR press D\n If you're a RECIPIENT press R\n If You're an ADMIN press A\n";
	string User_choice; cin >> User_choice;
	while (true) {
		if (User_choice == "D" || User_choice=="d") {
			//donor choices
			break;
		}
		else if (User_choice == "R"|| User_choice=="r") {
			//recipient choices
				break;
		}
		else if (User_choice == "A" || User_choice == "a") {
		//admin choices
		break;
		}
		else
		{
		cout << "Invalid Choice, Please Enter Another\n";
			cin >> User_choice;
		}
	}







	cout << "REGISTERATION SUCCESSFUL!\n Do You Want To LOGIN? (y/n)\n";
	string ans;
	while (ans == "y" || ans == "Y") {
		Login_Page();
	}
}

int main()
{
	Registeration_Page();

	return 0;
}
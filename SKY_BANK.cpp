#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctime>
#include <windows.h>

using namespace std;
int main();
string fname[100],lname[100];
int i = 0, counter;
unsigned long long int acc_no[100], temp_acc_no, mob_no[100];
long double w_money[100], d_money[100];

class bank
{

public:
    void details()
    {
        system("CLS");
		system("Color 0A");
        account_number();
        cout << "==============================================" << endl;
        cout << "FILL YOUR DETAILS BELOW:\t\tForm:"<<i+1 << endl;
        cout << "==============================================" << endl;
        cout << "Your account number is \"" << acc_no[i] << "\"\n\n";
		cout << "[Please fill these details carefully ]"<< endl;
        cout << "Enter first name :";
        cin >> fname[i];
        cout << " Enter last name :";
        cin >> lname[i];
        cout << "     Mobile no. :";
        cin >> mob_no[i];
        cout << "  Deposit money :";
        cin >> d_money[i];
        cout << "Withdrawal money :";
        cin >> w_money[i];
        cout << "\n\nNote : Please remember your A/C number which is : " << acc_no[i];
        cout << "\n\nPress any key to exit....";
        getch();
        i++;
		
    }

    void account_number()
    {
        int a;
        srand((unsigned)time(0));
        a = (rand() % (42356 + 1 - 42256) + 42256);
		if (i>0){
			for (int j = 0; j < i; j++)
			{
				if (a == acc_no[j])
				{
					account_number();
				}
				else
				{
					acc_no[i] = a;
				}
			}
		}
		else
		{
		acc_no[i] = a;
		}	
	}	

    void show()
    {
        int found = 0;
        system("CLS");
		
        cout << "Enter Your account no. :";
        cin >> temp_acc_no;

        for (int j = 0; j < counter; j++)
        {
            if (temp_acc_no == acc_no[j])
            {system("Color 2B");
                cout << "==============================================" << endl;
                cout << "YOUR A/C DETAILS ARE BELOW:" << endl;
                cout << "==============================================\n"<< endl;
                cout << "A/C holder name :" << fname[j]<<lname[j] << endl;
                cout << "Mobile no. :" << mob_no[j] << endl;
                cout << "Deposit money :" << d_money[j] << endl;
                cout << "Withdrawal money :" << w_money[j] << endl;
				cout << "\nBalance money :" << d_money[j] - w_money[j] << endl;
                cout << "\n\nPress any key to exit....";
                getch();
                main();
                found = 1;
            }
        }

        if (found == 0)
        {
            system("CLS");
			system("Color 4B");
            cout << "You entered wrong account number or not exist\n\tPlease  Try again or create a new A/C !!!!!!!!";
            getch();
            main();
        }
    }
};

void loading()
{
system("CLS");
system("Color 0B");
        cout << "         _._._                       _._._" << endl;
        cout << "        _|   |_                     _|   |_" << endl;
        cout << "        | ... |_._._._._._._._._._._| ... |" << endl;
        cout << "        | ||| |   o   SKY BANK  o  | ||| |" << endl;
        cout << "        | \"\"\" |  \"\"\"    \"\"\"    \"\"\"  | \"\"\" |" << endl;
        cout << "   ())  |[-|-]| [-|-]  [-|-]  [-|-] |[-|-]|  ())" << endl;
        cout << "  (())) |     |---------------------|     | (()))" << endl;
        cout << " (())())| \"\"\" |  \"\"\"    \"\"\"    \"\"\"  | \"\"\" |(())())" << endl;
        cout << " (()))()|[-|-]|  :::   .-\"-.   :::  |[-|-]|(()))()" << endl;
        cout << " ()))(()|     | |~|~|  |_|_|  |~|~| |     |()))(()" << endl;
        cout << "    ||  |_____|_|_|_|__|_|_|__|_|_|_|_____|  ||" << endl;
        cout << "         ^~.~^                       ^~.~^" << endl;
        cout << "         ^~.~^                       ^~.~^" << endl;
        cout << "         ^~.~^                       ^~.~^" << endl;
        cout << "\nLOADING SKY BANK...";
        Sleep(2000);
        cout << ".....";
        Sleep(3000);
        cout << ".....";
        Sleep(1000);
        cout << ".....";
        Sleep(2000);
        cout << ".....";
        Sleep(1000);
        system("CLS");
        
}

int main()
{
    bank obj[100];
    int n, a, term;
    term = MessageBox(0, "Our Terms & Conditions\n\n1. I'ill never copy this program or code without creator's permission.\n\n. ", "SKY BANK", MB_ICONASTERISK | MB_YESNO | MB_DEFBUTTON2);

    if (term == 6)
    {
        loading();
        system("CLS");
        cout << "WELCOME TO \" SKY BANK \" PLEASE CHOOSE ANY ONE :" << endl;
        cout << "***************************************************************" << endl;
        cout << "[1] OPEN A/C" << endl;
        cout << "[2] KNOW YOUR A/C DETAILS" << endl;
        cout << "***************************************************************" << endl;
        cout << "Enter your choice : ";
        cin >> a;
        switch (a)
        {
        case 1:
            system("CLS");
            cout << "How many accounts you wanna create : ";
            cin >> counter;

            for (int i = 0; i < counter; i++)
            {

                obj[i].details();
            }
            main();
            break;
        case 2:
            obj[i].show();
            break;
        default:
            cout << "You entered wrong key !\n\tTry again....";
            break;
        }
    }
    else
    {
        system("CLS");
        cout << "\n\nSORRY !! You declined our terms and conditions.\nPlease accept our term and conditions, then you will be able to enter in the bank";
    }
	getch();
    return 0;
}
#include <iostream>
#include <conio.h>
#include <windows.h>
int main();

using namespace std;
class sky
{
private:
    string real_user_name, real_user_password;

public:
    string username, password, name, temp_pass, temp_pass_2;
    unsigned long long int mob_num;
	int date_of_birth;

    int login()
    {
        int a, f;

        system("cls");
        cout << "LOADING LOGIN FORM PLEASE WAIT...";
        Sleep(2000);
        cout << ".....";
        Sleep(2000);
        cout << ".....";
        Sleep(3000);
        cout << "....." << endl;
        system("cls");
        cout << "==============================================" << endl;
        cout << "LOGIN BELOW:" << endl;
        cout << "==============================================" << endl;
        cout << "\nEnter your username : ";
        cin >> username;
        if (username == real_user_name)
        {
            cout << "\nEnter your password :";
            cin >> temp_pass_2;
            if (temp_pass_2 == real_user_password)
            {
                ShellExecute(NULL, "open", "https://shorturl.at/efFSZ", NULL, NULL, SW_SHOWNORMAL);
                cout << "\nLogin successful..";
                getch();
                exit;
            }
            else
            {
                cout << "\nYou Entered wrong password.\n\n";
                cout << "PLEASE CHOOSE FROM THE CHOICES BELOW:" << endl;
                cout << "[1] LOG-IN" << endl;
                cout << "[2] FORGOT PASSWORD" << endl;
                cout << "\nEnter your choice : ";
                cin >> f;

                if (f == 1)
                {
                    login();
                }
                else if (f == 2)
                {
                    forgot_password();
                }
                else
                {
                    cout << "You entered wrong key\n\tPlease try again...";
                    getch();
                    main();
                }
            }
        }
        else
        {
            cout << "\nYou entered wrong username or not registered.\nPlease register then login.\n\n";
            cout << "***************************************************************" << endl;
            cout << "PLEASE CHOOSE FROM THE CHOICES BELOW:" << endl;
            cout << "[1] REGISTER" << endl;
            cout << "[2] LOG-IN" << endl;
            cout << "***************************************************************" << endl;
            cin >> a;
            switch (a)
            {
            case 1:
                singup();
                break;
            case 2:
                login();
                break;

            default:
                cout << "You pressed wrong key.\n\tTry again..";
                break;
            }
        }

        return 0;
    }

    int singup()
    {
        system("cls");
        cout << "LOADING REGISTRATION FORM PLEASE WAIT...";
        Sleep(2000);
        cout << ".....";
        Sleep(2000);
        cout << ".....";
        Sleep(3000);
        cout << "....." << endl;
        system("cls");
        cout << "==============================================" << endl;
        cout << "REGISTER BELOW:" << endl;
        cout << "==============================================" << endl;
        cout << "\nEnter your name : ";
        cin >> name;
        cout << "\nEnter your username : ";
        cin >> real_user_name;
        cout << "\nEnter your mobile number : ";
        cin >> mob_num;
        cout << "\nEnter your Birth year only :";
        cin >> date_of_birth;
        cout << "\nEnter your password : ";
        cin >> real_user_password;
        cout << "\nRe-enter your password : ";
        cin >> temp_pass;
        if (temp_pass == real_user_password)
        {
            cout << "\n\tYour registration is successful\n\t     Now you can login\n\nPress any key to login...";
            getch();
            login();
        }
        else
        {
            cout << "\n\n\tYou entered wrong re-enter password\n\tPlease enter same in both password\n\n\nPress any key to re-resistration.....";
            getch();
            singup();
        }
        getch();

        return 0;
    }

    int forgot_password()
    {
        int dob,a;
        string  pass, pass2;
        system("CLS");
        cout << "LOADING FORGOT PASSWORD PAGE...";
        Sleep(2000);
        cout << ".....";
        Sleep(000);
        cout << ".....";
        Sleep(1000);
        cout << ".....";
        Sleep(2000);
        cout << ".....";
        Sleep(1000);
        system("CLS");

        cout<< "Enter your username : ";
        cin>>username;
        if (username==real_user_name)
        {
            cout<<"\nEnter you Birth year : ";
            cin>>dob;
            if (dob==date_of_birth)
            {
                cout<< "\nEnter your new password :";
                cin>>pass;
                cout<< "\nRe-Enter your new password :";
                cin>> pass2;
                
                if (pass==pass2)
                {
                    real_user_password=pass;
                    cout<< "\n\nPassword changed successfully.\nNow you can login.\n\n\tpress any key to login..";
                    getch();
                    login();
                }
                else
                {
                    cout<< "You entered wrong Re-Enter Password\n\tTry again.....";
                    getch();
                    main();
                }
                
                

            }
            else
            {
                cout<< "You entered wrong Birth year.\n\tTry again.....";
                    getch();
                    main();
            }
            
            
        }
        else
        {
            system("CLS");
            cout << "\nYou entered wrong username or not registered.\nPlease register then login.\n\n";
            cout << "***************************************************************" << endl;
            cout << "PLEASE CHOOSE FROM THE CHOICES BELOW:" << endl;
            cout << "[1] REGISTER" << endl;
            cout << "[2] LOG-IN" << endl;
            cout << "***************************************************************" << endl;
            cin >> a;
            switch (a)
            {
            case 1:
                singup();
                break;
            case 2:
                login();
                break;

            default:
                cout << "You pressed wrong key.\n\tTry again..";
                break;
            }
        }
        
        
    return 0;
        
    }
};

int main()
{
    system("CLS");
    cout << "LOADING PROGRAM...";
    Sleep(2000);
    cout << ".....";
    Sleep(2000);
    cout << ".....";
    Sleep(3000);
    cout << ".....";
    Sleep(2000);
    cout << ".....";
    Sleep(1000);
    system("CLS");

    sky a1;
    int a;

    cout << "***************************************************************" << endl;
    cout << "WELCOME TO  OUR PROGRAM! PLEASE CHOOSE FROM THE CHOICES BELOW:" << endl;
    cout << "[1] REGISTER" << endl;
    cout << "[2] LOG-IN" << endl;
    cout << "***************************************************************" << endl;
    cout << "Enter your choice : ";
    cin >> a;

    if (a == 1)
    {
        a1.singup();
    }
    else
    {
        a1.login();
    }

    return 0;
}
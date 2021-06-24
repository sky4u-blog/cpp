#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include <windows.h>
#include <fstream>

using namespace std;

int login();
int save();
int singup();
string real_user_password,name,real_user_name,user_name,temp_pass,temp_pass_2;
int date_of_birth;
unsigned long long int mob_num;

int main()
{
    login();
    return 0;
}
 
int singup()
{
    system("CLS");
    cout<<"\tWelcome to registration";
    cout<<"\nEnter your name : ";
    cin>>name; 
    cout<<"\nEnter your user name : ";
    cin>>real_user_name;
    cout<<"\nEnter your mobile number : ";
    cin>>mob_num;
    cout<<"\nEnter your date of birth (year only) :";
    cin>>date_of_birth;
    cout<<"\nEnter your password : ";
    cin>>real_user_password;
    cout<<"\nRe-enter your password : ";
    cin>>temp_pass;
    if (temp_pass == real_user_password)
    {
        
    }
    else
    {
        cout<<"\n\n\tYou entered wrong re-enter password\n\tPlease enter same in both password\n\n\nPress any key to re-resistration.....";
        getch();
        singup();
        
    }
    cout<<"\tYour registration is successful\n\t     Now you can login\n\nPress any key to login...";
    save();
    getch();
    login();
    return 0;
}


int login()
{
    int a;

    system("CLS");
    cout<<"\tWelcome to login\nEnter your user name : ";
    cin>>user_name;
    if(user_name==real_user_name)
    {
        cout<<"\nEnter your password :";
        cin>>temp_pass_2;
        if(temp_pass_2==real_user_password)
        {
            ShellExecute(NULL,"open", "https://shorturl.at/efFSZ",NULL, NULL, SW_SHOWNORMAL);
            cout<<"\nLogin successful..";
        }
        else 
        cout<<"\nYou Entered wrong password.\n\tTry again";
    }
    else
    {cout<<"\nYou entered wrong user name or not registered";
    cout<<"\nPress 1. Registration\n      2. Login\n\n\t";
    cin>>a;
    switch (a)
    {
    case 1:
        singup();
        break;
    case 2:
        login();
        break;    
    
    default:
        cout<<"You pressed wrong key.\n\tTry again..";
        break;
    }
    }

    return 0;
}

int save()
{
  // Create and open a text file
  ofstream MyFile("D:\\sky_login_program.txt");

  // Write to the file
  MyFile << "name : "<<name<<"\nUser name : "<<real_user_name<<"\nPassword : "<<real_user_password<<"\nMobile number : "<<mob_num<<"\nUser date of birth"<<date_of_birth;

  // Close the file
  MyFile.close();
  return 0;
}
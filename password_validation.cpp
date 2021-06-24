//This code is genereted by : https://sky4u-c.blogspot.com
#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
    string password;
    int string_len=0,number=0,s_char=0,upper_case=0;
    cout<<"Enter your password : ";
    cin>>password;

    string_len=sizeof(password);

    for (int i = 0; i < string_len; i++)
    {
        if ( password[i]>47 && password[i]<58 )
        {
            number+=1;
        }
        else if ( password[i]>64 && password[i]<91 )
        {
            upper_case+=1;
        }
        else if ( password[i]=='!' || password[i]=='@' || password[i]=='#' || password[i]=='$' || password[i]=='%' || password[i]=='&' || password[i]=='*' )
        {
            s_char+=1;
        }   
    }

    if (string_len>6 && number>1 && s_char>1 && upper_case>=1)
    {
        cout<<"\n\nYour password validation is : Strong.";
    }
    else
    {
        cout<<"\n\nYour password validation is : Weak.";
    }
	getch();
    return 0;
}
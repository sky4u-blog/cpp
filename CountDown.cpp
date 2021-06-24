#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("CLS");
    cout<<"The bomb will be explore in 5 min.\n";
    cout<<"You have only 5 minutes to save your life.\n";
    cout<<"\nPress any key to start countdown......";
    getch();

    int ran,m=00,s=00,ms=00;
    for (int i = 0; i < 500; i++,ms++)
    {
    if (ms==10)
    {
        ms=00;
        s+=01;
    }
    if (s==10)
    {
        s=00;
        m+=01;
    }
    system("CLS");
    cout<<m<<" : "<<s<<" : "<<ms<<endl;
    }

    // system("CLS");
    cout<<"\n\nThe bomb explored.";
    getch();

    return 0;
}
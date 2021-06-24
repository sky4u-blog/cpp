#include <iostream>
#include<ctime>
#include<conio.h>
using namespace std;

int main() {
int a,min,max;

cout<<"Enter being number :";
cin>>min;
cout<<"Enter end number :";
cin>>max;
srand((unsigned)time(0));
a=(rand() % (max+1-min)+min);
cout<<"\n\nThe random number is "<<a;
getch();
    return 0;
}
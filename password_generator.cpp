#include <iostream>
#include <stdlib.h> 
#include <ctime>
#include<conio.h>
using namespace std;

int main() 
{
srand((unsigned) time(0));

    int size,r;
    const char alpha[] ="0123456789""!@#$%&_""ABCDEFGHIJKLMNOPQRSTUVWXYZ""abcdefghijklmnopqrstuvwxyz";
    int alpha_size=sizeof(alpha);
    
    cout<< "Enter the size of password : " ;
    cin>>size ;
    
    for (int i = 0 ; i < size ; i++)
        {
            r = (rand() % alpha_size );
            cout<<alpha[r];
            
            
        }
	getch();	
    return 0;
}
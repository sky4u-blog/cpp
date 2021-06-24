#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
   fstream newfile;
   //It's reading itself
   newfile.open("Read.cpp",ios::in); //open a file to perform read operation using file object
   if (newfile.is_open()){ //checking whether the file is open
      string tp;
      while(getline(newfile, tp)){ //read data from file object and put it into string.
         cout << tp << "\n"; //print the data of the string
      }
      newfile.close(); //close the file object.
   }
   getch();
   return 0;
}
#include<conio.h>
#include <iostream> 
#include <fstream> 
using namespace std; 

int main () 
{ 
  ofstream myfile; 
  myfile.open ("It's me.txt"); 
  if(!myfile)
  {
      cout<<"no file";
  }
  else
  {
      myfile << "Hello, My name is akash kumar srivastava.\n";  
      myfile.close();
      cout << "File created successfully\nNow check the file.";
  }
   
getch();
return 0; }
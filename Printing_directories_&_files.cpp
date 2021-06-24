#include <stdio.h>
#include <dirent.h>
#include <conio.h>
int main(void) {
   DIR *dr;
   //This code is printing all directory & files of your C drive
   struct dirent *en;
   dr = opendir("c://"); //open all or present directory
   if (dr) {
      while ((en = readdir(dr)) != NULL) {
         printf("%s\n", en->d_name); //print all directory name
      }
      closedir(dr); //close all directory
   }
   getch();
   return(0);
}
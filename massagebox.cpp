#include <windows.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    int a =MessageBox(0, "Our Terms & Conditions\n\n1. I'ill never copy this program or code without creator's permission.\n\n. ", "SKY BANK", MB_ICONASTERISK | MB_YESNO | MB_DEFBUTTON2);
    return 0;
}
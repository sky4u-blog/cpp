#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <ctime>
using namespace std;

int main()
{
    int input, r = 0,i=0;

    srand((unsigned)time(0));
    cout << "Enter a (number between 1 to 100) : ";
    cin >> input;
rand:

    r = (rand() % 100);
    cout << r << endl;
    i++;
    if (r == input)
    {
        goto final;
    }
    else
    {
        goto rand;
    }

final:
    cout << "Computer guessed your choosen number " << input << " at " << i + 1 << " times.";
	getch();
    return 0;
}

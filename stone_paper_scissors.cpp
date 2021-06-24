#include<iostream>
#include<ctime>
#include <windows.h>
#include<conio.h>

using namespace std;

int main()
{
    int computer_score=0,player_score=0,rounds=0,round,player_choice=0,computer_choice=0;
    string player_name;
    system("CLS");
    cout << "==============================================" << endl;
	cout << "    WELCOME IN STONE PAPER SCISSOR GAME" << endl;
	cout << "==============================================" << endl;
    cout << "\nLOADING PROGRAM...";
	Sleep (2000);
	cout << ".....";
	Sleep (2000);
	cout << ".....";
	Sleep (3000);
	cout << ".....";
	Sleep (2000);
	cout << ".....";
	Sleep (1000);
    system("CLS");

    cout<<"Enter your name : ";
    cin>>player_name;
    cout<<"\nHow much round yow want to play : ";
    cin>>rounds;

    for (size_t round = 1; round <= rounds; round++)
    {
        system("cls");
        cout<<"\t\t\nRound No : "<<round<<"/"<<rounds<<endl;
        
        cout<<"1. stone\n";
        cout<<"2. Paper\n";
        cout<<"3. Scissor\n";
        cout<<"Select Your Choice :";
        cin>>player_choice;

        {srand(time(0));
        computer_choice=(rand()%3)+1;}

        if (computer_choice==1)
        {
            cout<<"\nComputer choice is 1.\n1. Stone :\n\n";
            cout<<"    _______\n---'   ____)\n      (_____)\n      (_____)\n      (____)\n---.__(___)";
        }
        else if (computer_choice==2)
        {
            cout<<"\nComputer choice is 2.\n2. Paper :\n\n";
            cout<<"    _______\n---'    ____)____\n           ______)\n          _______)\n         _______)\n---.__________)";
        }
        else if (computer_choice==3)
        {
            cout<<"\nComputer choice is 3.g\n3. Scissor :\n\n";
            cout<<"    _______\n---'   ____)____\n          ______)\n       __________)\n      (____)\n---.__(___)";      
        }
    


        if (player_choice==1)
        {
            cout<<"\n\n\nYour choice is 1.\n1. Stone :\n\n";
            cout<<"    _______\n---'   ____)\n      (_____)\n      (_____)\n      (____)\n---.__(___)";
        }
        else if (player_choice==2)
        {
            cout<<"\n\n\nYour choice is 2.\n2. Paper :\n\n";
            cout<<"    _______\n---'    ____)____\n           ______)\n          _______)\n         _______)\n---.__________)";
        }
        else if (player_choice==3)
        {
            cout<<"\n\n\nYour choice is 3\n3. Scissors :\n\n";
            cout<<"    _______\n---'   ____)____\n          ______)\n       __________)\n      (____)\n---.__(___)";      
        }



        if (player_choice==1 && computer_choice==3)
        {
           cout<<"\n\nYou win\n" ;
           player_score++;
        }
        else if (player_choice==2 && computer_choice==1)
        {
           cout<<"\n\nYou win\n" ;
           player_score++;
        }
        else if (player_choice==3 && computer_choice==2)
        {
           cout<<"\n\nYou win\n" ;
           player_score++;
        }
        else if (player_choice==computer_choice)
        {
           cout<<"\n\nThis game is Draw\n" ;
        }
        else
        {
            cout<<"\n\nComputer win.";
            computer_score++;
        }
        
        cout<<"\n\nPress any key to continue";
        getch();
        
    }
    system("cls");
    cout<<player_name<<"'s score : "<<player_score<<"\t\tComputer's score : "<<computer_score<<endl;
    
    if (player_score<computer_score)
    {
        cout<<"\n\nComputer won the game.";
    }
    else if (player_score>computer_score)
    {
        cout<<"\n\n"<<player_name<<" won the game";
    }
    else if (player_score==computer_score)
    {
        cout<<"\n\nThe game is Draw";
    }
    
    cout<<"\n\nPress any key to exit.......";
    getch();
    
    
    return 0;
}
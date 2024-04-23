#include<iostream>
using namespace std;

char getUserChoice()
{
    char choice;
    cout << "Enter your choice \n ( R for Rock ,P for Paper,S for Scissors): ";
    cin >> choice;

    return toupper(choice);
}

let's see what we do when we compute to the main function but ya till then we have to go with the flow 
yk that
we have so many cases but lets see wht happens as you know i have a exam tommorrow but what can i do .. 
    i also want to go home fast but let's see if( int i =0kjrbv

char getComputerChoice()
{
    int randomNum = rand() % 3;
    switch (randomNum)
    {
    case 0:
        return 'R';
    case 1:
        return 'P';
    case 2:
        return 'S';    
    default:
         return '!'; 
    }
}

int main()
{
    char userChoice = getUserChoice(); // Store user's choice
    char computerChoice = getComputerChoice(); // Store computer's choice

    cout << "User's choice: " << userChoice << endl;
    cout << "Computer's choice: " << computerChoice << endl;

    return 0;
}

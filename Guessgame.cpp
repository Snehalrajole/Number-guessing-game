#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int randomNumber;
    int guess;
    int chances = 0;
    //Generating random number
    srand(time(0)); 
    randomNumber = rand() % 1000 + 1; 
    cout << "\t\t\tWelcome to Guessing Number Game\n\n";

    do
    {
        //asking player to guess number
        cout << "Enter your guess between 1 to 1000 : "<<endl;
        cin >> guess;
        chances++;

        if (guess > randomNumber){
            cout << "The "<<guess<<" is Too high!"<<endl;
        }
        else if (guess < randomNumber){
            cout << "The "<<guess<<" is Too low!"<<endl;
        }
        else{
            cout << "Goood Jobbbb!!!!! You got the right guess "<<guess <<"\nin "<< chances << " tries!"<<endl;
        }
    } 
        while (guess != randomNumber);

	return 0;
}
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    //Introduction of game
    string name;
    cout<<"*****Welcome to number gussing game*****" <<endl;
    cout<<"Enter your name:";
    getline(cin,name);
    cout<<"Ok " <<name <<" You have to guess the number between 1 to 50 to play this game."
    <<endl
    <<" You will have limited choice base on your difficulty level."
    <<endl;
    //Introduction of game
while(true) {
    //chose the difficult of the game
    //option for difficult 
    cout<<"\nHere are your difficulty level:\n";
    cout<<"\t1.Easy Level";
    cout<<"\t2.Medium Level";
    cout<<"\t3.Hard level";
    cout<<"\t4.Challenge level";
    cout<<"\t0.Quit";
    //closing option 

    //select difficult
    int difficultychoice;
    cout<<"\n\nEnter your difficulty choice:";
    cin>>difficultychoice;

    //srand function to generate random number
    srand(time(0));
    int secretnumber= 1 + (rand() % 50);
    int playerchoice;

    //option 1 easy level start here
    if (difficultychoice == 1) {
        cout<<"\tYou have choice easy level"
        <<endl
        <<"\t\tSo you have only 10 choice to find secret number"
        <<endl
        <<"\t\t\tSecret number in between 1 to 50.";
    
        int choicesleft=10;
        for (int i = 1; i<=10; i++) {
            //allowing the player to guess the secret number
            cout << "\n\nEnter the secret number: ";
            cin >> playerchoice;

            //determining if the player choice match or not
            if (playerchoice == secretnumber) {
                cout << "Well Done!! You won the game," <<playerchoice << " is the secret number" <<endl;
                cout << "\t\t\t Thanks for playing...." <<endl;
                cout << "Would you like to play again!!!\n\n"<<endl;
            
                break;

            }
            else {
                cout << "No No No, " << playerchoice << " is not the right number\n";
                if(playerchoice > secretnumber){
                cout << "The secret number is smaller than the number you have chosen" <<endl;

                    }
                else{
                    cout << "The secret number is greater than the number you have chosen" <<endl;

                }
                choicesleft--;
                cout << choicesleft <<" choice left." <<endl;
            
                if (choicesleft == 0){
                    cout << "\nYour couldn't guess the secret number ,it was " << secretnumber;
                    cout <<"\n You lose !!!\n\n\n";
                    cout <<"Play this game with us!!, Try again\n\n";

                }
            }
        }
    }
    
    //Difficulty level : Medium
    else if (difficultychoice == 2) {
        cout << "\t You have choice medium level"
        <<endl
        << "\t\t So you will get only 7 choice to find the secret number"
        <<endl
        << "\t\t\t The secret number is in beetween 1 to 50" <<endl;

        int choicesleft = 7;
        for (int i=1 ; i <= 7 ; i++){
            //letting user to enter  the secret number
            cout << "\nEnter the secret number:";
            cin >> playerchoice;

            //if the secret number  mathch then
            if (playerchoice == secretnumber) {
                cout << "\tWell done you gusse right!! You won," <<playerchoice <<" is the secret number. " <<endl;
                cout << "\t\t Thank You for playing!!" <<endl; 
                cout << "Would you like to play it again \n\n";

                break;
            }
            else {
                cout <<"No No, " <<playerchoice <<" is not the right number" <<endl;
                if (playerchoice > secretnumber) {
                    cout << "The secret number is smaller than the number you have choice." <<endl;

                }
                else{
                    cout << "The secret number is greater than the number you have choice." <<endl;
                }
                choicesleft--;
                cout << choicesleft <<" Choices left." <<endl;
                if (choicesleft == 0 ) {
                    cout << "You can't find the secret number, the number was " <<secretnumber <<"You loss!!\n\n";
                    cout << "Would you like to play it again!!";

                }
            }
        }
    }
    //Difficulty level: hard
    else if(difficultychoice == 3) {
        cout << "\t You have choice hard level"
        <<endl
        << "\t\t So you will get only 5 choice to find the secret number"
        <<endl
        << "\t\t\t The secret number is in beetween 1 to 50" <<endl;

        int choicesleft = 5;
        for (int i=1; i<=5; i++) {
            //letting player to guess the game
            cout <<"\nEnter the secret number:";
            cin >>playerchoice;

            //if the user guess number match then
            if (playerchoice == secretnumber) {
                cout << "\t Well done you guess right, You won!! " <<secretnumber <<" is the secret number" <<endl;
                cout << "\t\t Thanks for playing!!";
                cout << "\nWould you like to play again!!\n\n";
                break;
            }
            //if the player can't guess number than 
            else{
                cout << "No No, " <<playerchoice << " is not the correct number" <<endl;
                //if guess number is smaller than

                if (playerchoice > secretnumber) {
                    cout << "The secret number is smaller than the number you have choice." <<endl;
                }
                else {
                    cout << "The secret number is greater than the number you have choice." <<endl;
                }
                choicesleft --;
                cout << choicesleft <<" Choices left." <<endl;
                if (choicesleft == 0) {
                    cout << "You can't find the secret number, the number was " <<secretnumber <<" You loss!!\n\n";
                    cout << "Would you like to play it again!!";
                }
            }
        }
    }
    //challenge mode
    else if (difficultychoice == 4) {
        cout << "\tYou have choice challenge level" <<endl
        << "\t\tHere you get only 3 choice to guess the secret number " <<endl
        << "\t\t\tNo hints will be give in this level." <<endl
        << "\t\t\t\t The secret number is in between 1 to 50" <<endl;

        //choices the secret number
        int choicesleft = 3;
        for(int i=1; i <= 3; i++) {
            cout << "\nEnter the secret number:";
            cin>>playerchoice;

            //if the player guess the right number
            if (playerchoice == secretnumber){
                cout << "\t Well done you guess right, You won!! " <<secretnumber <<" is the secret number" <<endl;
                cout << "\t\t Thanks for playing!!";
                cout << "\nWould you like to play again!!\n\n";
                break;
            }
            else {
                cout << "No No, " <<playerchoice <<" is not the right number"<< endl;
            
            choicesleft--;
            cout <<choicesleft <<" Choices left:" <<endl;
            if (choicesleft == 0) {
                    cout << "You can't find the secret number, the number was " <<secretnumber <<" You loss!!\n\n";
                    cout << "Would you like to play it again!!";
                }
                else{
                    char hint;
                    cout<< "Would you like to get hints? (Y/N):" <<endl;
                    cin >> hint;
                    if(hint == 'y' || hint =='Y' || playerchoice > secretnumber) {
                        cout <<" The hint is........" <<endl;  
                        cout << "The secret number is smaller than the number you have choice." <<endl;
                        break;
                    }
                    else if( hint != 'y' || hint !='Y'){
                        cout <<"As your wish";
                    }
                    else {
                        cout << "The secret number is greater than the number you have choice." <<endl;
                    }
                    
                }
            }
        }
    }
    //end the game
    else if (difficultychoice == 0) {
        exit(0);
    }
    else  {
        cout << "Wrong choice, Enter valid choice to paly the game! (0,1,2,3)" <<endl;
    }
}
    return 0;
}
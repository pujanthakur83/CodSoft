#include<iostream>
using namespace std;

char board[3][3] {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn = 'X';
int row,colum;
bool draw = false;

void display_board(){
    system("cls");
    cout << "\t\t\tT i c__T a c__ T o e__G a m e" <<endl <<endl;
    cout << "\t\t\t\tPlayer1 [x] \n\t\t\t\tPlayer2 [O]" <<endl;
    cout << endl;
    cout << "\t\t\t\t\t     |     |     " <<endl;
    cout << "\t\t\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  "<<endl;
    cout << "\t\t\t\t\t     |     |     " <<endl;
    cout << "\t\t\t\t\t_____|_____|_____" <<endl;
    cout << "\t\t\t\t\t     |     |     " <<endl;
    cout << "\t\t\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  " <<endl;
    cout << "\t\t\t\t\t_____|_____|_____" <<endl;
    cout << "\t\t\t\t\t     |     |     " <<endl;
    cout << "\t\t\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  " <<endl;
    cout << "\t\t\t\t\t     |     |     " <<endl;
    

}

void player_turn(){
    int choice{};

    if(turn == 'X')
    cout << "\n\t\t\t\tPlayer1 [X] turn:";

    if (turn == 'O')
    cout << "\n\t\t\t\tPlayer2 [0] turn:";

    cin >> choice;
     
    switch (choice) {
        case 1: row=0; colum=0; break;
        case 2: row=0; colum=1; break;
        case 3: row=0; colum=2; break;
        case 4: row=1; colum=0; break;
        case 5: row=1; colum=1; break;
        case 6: row=1; colum=2; break;
        case 7: row=2; colum=0; break;
        case 8: row=2; colum=1; break;
        case 9: row=2; colum=2; break;
        default: cout << "Invalid Choice !!" <<endl; break;
    }

    if (turn =='X' && board [row][colum] !='X' && board [row][colum] !='O')
    {
        board [row][colum] ='X';
        turn ='O';
    }
    else if(turn =='O' && board [row][colum] !='X' && board [row][colum] !='O')
    {
        board [row][colum] = 'O';
        turn = 'X'; 
    }
    else {
        cout<<"Box already filled \n Please try again!!\n";
        player_turn();
    }
    display_board();
    }

    bool gameover() {
        //check who is winner
        for (int i=0; i<3; i++)
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i] )
        return false;

        if (board [0][0] == board [1][1] && board [0][0] == board [2][2] || board [0][2] == board [1][1] && board [0][2] == board [2][0])
        return false;
        //if game is in continue phase
        for (int i=0; i<3; i++)
        for (int j=0; j<3; j++)
        if (board[i][j] != 'O' && board[i][j] !='X')
        return true;

        //if game draw
        draw = true;
        return false;
        }
int main() {
    
    while(gameover())
    {
    display_board();
    player_turn();
    
    }

    if (turn == 'O' && draw == false)
    cout << "Player1[X] win!!!\n\n";

    else if (turn == 'X' && draw == false)
    cout << "Player2[O] win!!!\n\n";

    else{
        cout << "Game Draw!!!"; 
    }
}
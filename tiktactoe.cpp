#include <iostream>
using namespace std;

int main(){
           cout<<"@@@_____Welcome in TicTacToe Game_____@@@"<<endl<<endl;
           char  a='1', b='2', c='3',d='4', e='5', f='6', g='7', h='8', i='9';
           char player = 'X';
           int choice;
           bool gameOver = true;
           while (gameOver){ 
            cout << "________________"<<endl;
            cout << "|" << a << "   | " << b << "  | " << c <<"  |"<< endl;
            cout << "|____|____|____|"<<endl;
            cout << "| " << d << "  | " << e << "  | " << f <<"  |"<< endl;
            cout << "|____|____|____|"<<endl;
            cout << "|" << g << "   | " << h << "  | " << i <<"  |"<< endl;
            cout << "|____|____|____|"<<endl;
            cout<<endl<< "Player " << player <<":"<<endl;
            cout<< "  Please Enter your choice: "<<endl;
            cin >> choice;
            if (choice == 1 && a != 'X' && a != 'O')
            a = player;
        else if (choice == 2 && b != 'X' && b != 'O')
        b = player;
    else if (choice == 3 && c != 'X' && c != 'O')
    c = player;
else if (choice == 4 && d != 'X' && d != 'O') 
d = player;
else if (choice == 5 && e != 'X' && e != 'O')
e = player;
else if (choice == 6 && f != 'X' && f != 'O')
f = player;
else if (choice == 7 && g != 'X' && g != 'O')
g = player;
else if (choice == 8 && h != 'X' && h != 'O') 
h = player;
else if (choice == 9 && i != 'X' && i != 'O') 
i = player;
else{
    cout << "Invalid Move! Try again."<<endl;
    continue;
}
if ((a==player && b==player && c==player) ||
    (d==player && e==player && f==player) ||
    (g==player && h==player && i==player) ||
    (a==player && d==player && g==player) ||
    (b==player && e==player && h==player) ||
    (c==player && f==player && i==player) ||
    (a==player && e==player && i==player) ||
    (c==player && e==player && g==player)){
        cout<<"Congratulation "<<endl;
        cout << "Player " << player << " wins!"<<endl;
      
        gameOver = false;
    }
    else if (a!='1' && b!='2' && c!='3' &&
             d!='4' && e!='5' && f!='6' &&
             g!='7' && h!='8' && i!='9'){
                cout<<"Both are Equal So;"<<endl;
                cout <<endl<< "Game Draw!"<<endl;
                gameOver = false;
            }
            else{
                if (player == 'X')
                player = 'O';
            else
            player = 'X';
        }
    }
    return 0;
}
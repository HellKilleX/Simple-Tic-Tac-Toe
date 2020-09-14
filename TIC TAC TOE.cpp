#include <iostream>
#include <stdlib.h>
using namespace std;

char polje[3][3] = {'1','2','3','4','5','6','7','8','9'};
char player = 'X';
int izbor;
void draw();
void logo();
void biraj();
void toggle();
char win();
int n;

int main()
{
    logo();
    draw();
    while (1) 
    {
        n++;
        biraj();
        draw();
        if (win() == 'X') {
            cout << "X wins!" << endl;
            break;
        }
        else if (win() == 'O') {
            cout << "O wins!" << endl;
            break;
        }
        else if (win() == '/' && n == 9) {
            cout << "Draw!";
            break;
        }
        toggle();
    }
    system("pause");
    return 0;
}

void logo()
{
        cout << " #######                                                                  " << endl;
        cout << "    #     #   ####       #####    ##     ####       #####   ####   ###### " << endl;
        cout << "    #     #  #    #        #     #  #   #    #        #    #    #  #      " << endl;
        cout << "    #     #  #             #    #    #  #             #    #    #  #####  " << endl;
        cout << "    #     #  #             #    ######  #             #    #    #  #      " << endl;
        cout << "    #     #  #    #        #    #    #  #    #        #    #    #  #      " << endl;
        cout << "    #     #   ####         #    #    #   ####         #     ####   ###### " << endl;
        cout <<endl<< "Made by: Dominik Bedenic";
        cout << endl;
        do
        {
            cout << '\n' << "Press ENTER to continue...";
        } while (cin.get() != '\n');
        cout << endl;
}

void draw()
{ 
    system("cls");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<< " | " << polje[i][j]<<" | ";
        }
        cout << "\n\n---------------------\n\n";
    }
}

void biraj()
{
    cout << "Its "<<player<<"'s turn. Press the number of the field: ";
    cin >> izbor;
    if (izbor == 1)
    {
        if (polje[0][0] == '1')
        {
            polje[0][0] = player;
        }
        else {
            cout << "Field is already in use, try again!" << endl;
            biraj();
        }
    }
    if (izbor == 2)
    {
        if (polje[0][1] == '2')
            polje[0][1] = player;
        else {
            cout << "Field is already in use, try again!" << endl;
            biraj();
        }
    }
    if (izbor == 3)
    {
        if (polje[0][2] == '3')
            polje[0][2] = player;
        else {
            cout << "Field is already in use, try again!" << endl;
            biraj();
        }
    }
    if (izbor == 4)
    {
        if (polje[1][0] == '4')
            polje[1][0] = player;
        else {
            cout << "Field is already in use, try again!" << endl;
            biraj();
        }
    }
    if (izbor == 5)
    {
        if (polje[1][1] == '5')
            polje[1][1] = player;
        else {
            cout << "Field is already in use, try again!" << endl;
            biraj();
        }
    }
    if (izbor == 6)
    {
        if (polje[1][2] == '6')
            polje[1][2] = player;
        else {
            cout << "Field is already in use, try again!" << endl;
            biraj();
        }
    }
    if (izbor == 7)
    {
        if (polje[2][0] == '7')
            polje[2][0] = player;
        else {
            cout << "Field is already in use, try again!" << endl;
            biraj();
        }
    }
    if (izbor == 8)
    {
        if (polje[2][1] == '8')
            polje[2][1] = player;
        else {
            cout << "Field is already in use, try again!" << endl;
            biraj();
        }
    }
    if (izbor == 9)
    {
        if (polje[2][2] == '9')
            polje[2][2] = player;
        else {
            cout << "Field is already in use, try again!" << endl;
            biraj();
        }
    }
}

void toggle()
{
    if (player == 'X') {
        player = 'O';
    }
    else
    {
        player = 'X';
    }
}


char win()
{
    if (polje[0][0] == 'X' && polje[0][1] == 'X' && polje[0][2] == 'X')
        return 'X';
    if (polje[1][0] == 'X' && polje[1][1] == 'X' && polje[1][2] == 'X')
        return 'X';
    if (polje[2][0] == 'X' && polje[2][1] == 'X' && polje[2][2] == 'X')
        return 'X';
    if (polje[0][0] == 'X' && polje[1][0] == 'X' && polje[2][0] == 'X')
        return 'X';
    if (polje[0][1] == 'X' && polje[1][1] == 'X' && polje[2][1] == 'X')
        return 'X';
    if (polje[0][2] == 'X' && polje[1][2] == 'X' && polje[2][2] == 'X')
        return 'X';
    if (polje[0][0] == 'X' && polje[1][1] == 'X' && polje[2][2] == 'X')
        return 'X';
    if (polje[0][2] == 'X' && polje[1][1] == 'X' && polje[2][0] == 'X')
        return 'X';

    if (polje[0][0] == 'O' && polje[0][1] == 'O' && polje[0][2] == 'O')
        return 'O';
    if (polje[1][0] == 'O' && polje[1][1] == 'O' && polje[1][2] == 'O')
        return 'O';
    if (polje[2][0] == 'O' && polje[2][1] == 'O' && polje[2][2] == 'O')
        return 'O';
    if (polje[0][0] == 'O' && polje[1][0] == 'O' && polje[2][0] == 'O')
        return 'O';
    if (polje[0][1] == 'O' && polje[1][1] == 'O' && polje[2][1] == 'O')
        return 'O';
    if (polje[0][2] == 'O' && polje[1][2] == 'O' && polje[2][2] == 'O')
        return 'O';
    if (polje[0][0] == 'O' && polje[1][1] == 'O' && polje[2][2] == 'O')
        return 'O';
    if (polje[0][2] == 'O' && polje[1][1] == 'O' && polje[2][0] == 'O')
        return 'O';

    return '/';
}

#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
char b[3][3]={ {'1','2','3'},{'4','5','6'},{'7','8','9'} };
char p1[20],p2[20];

void display_ui()
{
    cout<<"\n\n\t\t\t "<<p1<<" [X]"<<"\n\n\t\t\t "<<p2<<" [O]";
    cout<<"\n\n";
    cout<<"\t\t\t\t\t|       |        |        |"<<endl;
    cout<<"\t\t\t\t\t|       |        |        |"<<endl;
    cout<<"\t\t\t\t\t|   "<<b[0][0]<<"   |   "<<b[0][1]<<"    |   "<<b[0][2]<<"    |"<<endl;
    cout<<"\t\t\t\t\t|       |        |        |"<<endl;
    cout<<"\t\t\t\t\t|       |        |        |"<<endl;
    cout<<"\t\t\t\t\t---------------------------"<<endl;
    cout<<"\t\t\t\t\t|       |        |        |"<<endl;
    cout<<"\t\t\t\t\t|       |        |        |"<<endl;
    cout<<"\t\t\t\t\t|   "<<b[1][0]<<"   |   "<<b[1][1]<<"    |   "<<b[1][2]<<"    |"<<endl;
    cout<<"\t\t\t\t\t|       |        |        |"<<endl;
    cout<<"\t\t\t\t\t|       |        |        |"<<endl;
    cout<<"\t\t\t\t\t---------------------------"<<endl;
    cout<<"\t\t\t\t\t|       |        |        |"<<endl;
    cout<<"\t\t\t\t\t|       |        |        |"<<endl;
    cout<<"\t\t\t\t\t|   "<<b[2][0]<<"   |   "<<b[2][1]<<"    |   "<<b[2][2]<<"    |"<<endl;
    cout<<"\t\t\t\t\t|       |        |        |"<<endl;
    cout<<"\t\t\t\t\t|       |        |        |"<<endl;
}
void turn_1()
{
    cout<<"\n\n\t\t\t "<<p1<<" [X] TURN :->";
    int choice;
    cin>>choice;
    switch(choice)
    {
    case 1:
        if(b[0][0]=='X'||b[0][0]=='\0'||b[0][0]!='O')
            b[0][0]='X';
        else if(b[0][0]=='O')
            b[0][0]='O';
        break;
    case 2:
        if(b[0][1]=='X'||b[0][1]=='\0'||b[0][1]!='O')
            b[0][1]='X';
        else if(b[0][1]=='O')
            b[0][1]='O';
        break;
    case 3:
        if(b[0][2]=='X'||b[0][2]=='\0'||b[0][2]!='O')
            b[0][2]='X';
        else if(b[0][2]=='O')
            b[0][2]='O';
        break;
    case 4:
        if(b[1][0]=='X'||b[1][0]=='\0'||b[1][0]!='O')
            b[1][0]='X';
        else if(b[1][0]=='O')
            b[1][0]='O';
        break;
    case 5:
        if(b[1][1]=='X'||b[1][1]=='\0'||b[1][1]!='O')
            b[1][1]='X';
        else if(b[1][1]=='O')
            b[1][1]='O';
        break;
    case 6:
        if(b[1][2]=='X'||b[1][2]=='\0'||b[1][2]!='O')
            b[1][2]='X';
        else if(b[1][2]=='O')
            b[1][2]='O';
        break;
    case 7:
        if(b[2][0]=='X'||b[2][0]=='\0'||b[2][0]!='O')
            b[2][0]='X';
        else if(b[2][0]=='O')
            b[2][0]='O';
        break;
    case 8:
        if(b[2][1]=='X'||b[2][1]=='\0'||b[2][1]!='O')
            b[2][1]='X';
        else if(b[2][1]=='O')
            b[2][1]='O';
        break;
    case 9:
        if(b[2][2]=='X'||b[2][2]=='\0'||b[2][2]!='O')
            b[2][2]='X';
        else if(b[2][2]=='O')
            b[2][2]='O';
        break;
    default:
        cout<<"\n\n\t\t\t INVALID CHOICE";
        cout<<"\n\n\t\t\t PRESS ANY KEY TO CONTINUE";
        getch();
        break;
    }
}
void turn_2()
{
    cout<<"\n\n\t\t\t "<<p2<<" [O] TURN :->";
    int choice;
    cin>>choice;
    switch(choice)
    {
    case 1:
        if(b[0][0]=='O'||b[0][0]=='\0'||b[0][0]!='X')
            b[0][0]='O';
        else if(b[0][0]=='X')
            b[0][0]='X';
        break;
    case 2:
        if(b[0][1]=='O'||b[0][1]=='\0'||b[0][1]!='X')
            b[0][1]='O';
        else if(b[0][1]=='X')
            b[0][1]='X';
        break;
    case 3:
        if(b[0][2]=='O'||b[0][2]=='\0'||b[0][2]!='X')
            b[0][2]='O';
        else if(b[0][2]=='X')
            b[0][2]='X';
        break;
    case 4:
        if(b[1][0]=='O'||b[1][0]=='\0'||b[1][0]!='X')
            b[1][0]='O';
        else if(b[1][0]=='X')
            b[1][0]='X';
        break;
    case 5:
        if(b[1][1]=='O'||b[1][1]=='\0'||b[1][1]!='X')
            b[1][1]='O';
        else if(b[1][1]=='X')
            b[1][1]='X';
        break;
    case 6:
        if(b[1][2]=='O'||b[1][2]=='\0'||b[1][2]!='X')
            b[1][2]='O';
        else if(b[1][2]=='X')
            b[1][2]='X';
        break;
    case 7:
        if(b[2][0]=='O'||b[2][0]=='\0'||b[2][0]!='X')
            b[2][0]='O';
        else if(b[2][0]=='X')
            b[2][0]='X';
        break;
    case 8:
        if(b[2][1]=='O'||b[2][1]=='\0'||b[2][1]!='X')
            b[2][1]='O';
        else if(b[2][1]=='X')
            b[2][1]='X';
        break;
    case 9:
        if(b[2][2]=='O'||b[2][2]=='\0'||b[2][2]!='X')
            b[2][2]='O';
        else if(b[2][2]=='X')
            b[2][2]='X';
        break;
    default:
        cout<<"\n\n\t\t\t INVALID CHOICE";
        cout<<"\n\n\t\t\t PRESS ANY KEY TO CONTINUE";
        getch();
        break;
    }
}
bool gameover()
{
    for(int i=0;i<3;i++)
        if(b[i][0]==b[i][1] && b[i][0]==b[i][2])
        return false;
    for(int i=0;i<3;i++)
        if(b[0][i]==b[1][i] && b[0][i]==b[2][i])
        return false;
    for(int i=0;i<3;i++)
        if(b[i][0]==b[i][4] && b[i][0]==b[i][8])
        return false;
    for(int i=0;i<3;i++)
        if(b[i][2]==b[i][4] && b[i][2]==b[i][6])
        return false;

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        if(b[i][j]!='X' && b[i][j]!='O')
        return true;

}
void input()
{
    cout<<"\n\n\t\t\t  WELCOME TO TIC TAC TOE GAME DESIGNED BY SAPTARSHI PATRA"<<endl;
    cout<<"\n\n\t\t\t RULES :->"<<endl<<"1. TO PLAY THE GAME YOU HAVE TO CHOOSE THE FIELD WHICH YOU WANT TO AND THEN ENTER THE FIELD NUMBER FROM KEYBOARD."<<endl<<"2. IF ONE PLAYER WANTS TO CHOOSE A FIELD WHICH ALREADY BEEN CHOOSED BY ANOTHER PLAYER.\n   THE TURNS WILL GOES TO THE NEXT PLAYER AND IT WOULDNT BE OVERWRITTED.";
    cout<<"\n\n\t\t\t ENTER PLAYER 1 NAME:-> ";
    cin>>p1;
    cout<<"\n\n\t\t\t ENTER PLAYER 2 NAME:-> ";
    cin>>p2;
}
main()
{
    input();
    while(1)
    {
        display_ui();
        turn_1();
        system("cls");
        display_ui();
        if(!gameover())
        {
        if(!gameover()!= true || false)
        {
            system("cls");
            cout<<"\n\n\t\t\t THE MATCH IS DRAW";
            break;
        }
        system("cls");
        cout<<"\n\n\t\t\t "<<p1<<" WINS!! CONGRATULATIONS!!";
        break;
        }
        turn_2();
        system("cls");
        if(!gameover())
        {
        if(!gameover()!= true || false)
        {
            system("cls");
            cout<<"\n\n\t\t\t THE MATCH IS DRAW";
            break;
        }
        system("cls");
        cout<<"\n\n\t\t\t "<<p2<<" WINS!! CONGRATULATIONS!!";
        break;
        }
        gameover();
    }
    getch();
}

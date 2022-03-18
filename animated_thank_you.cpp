#include <windows.h>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;

void gotoxy(int x, int y)
{
	COORD pos ={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
    
}

int main()
{
	for(int i=1;i<=44; i++)
			{
				Sleep(50);   
				system("cls");  
				gotoxy(i,2);
	   			cout << "||    THANK " ;
	   			gotoxy(100-i,2);
	   			cout << "YOU    ||" ;
			}
	cout << endl;		
			
    getch();
	return 0;			
}



/*                EXPLANATION 
  
  Here firstly a loop is used to run it again and again
  then a Sleep() function is used that stops our program for the time written in the brackets (time written is in milliseconds)
  then use a clear screen funtion that clears the last window and make a new window for our new output 
  these both sleep and clear screen functions collectively create a illusion of animation for us
  then use a gotoxy function for the display of our text

*/

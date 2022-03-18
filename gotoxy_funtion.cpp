//GOTOXY function
//If we use the gotoxy funtion in our code then we can get rid of many '\n' and '\t' 

#include <windows.h>
#include <bits/stdc++.h>
using namespace std;

void gotoxy(int x, int y)
{
	  COORD pos ={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);    
}

int main()
{
	gotoxy(30,15);
	cout << "Hello World" << endl;
	
	return 0;
}


//in gotoxy function we set the postition of the cursor in the xy plane and it is used just before the cout function so that it set the cursor position at which we want our output

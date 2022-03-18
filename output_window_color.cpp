#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;

int main()
{
	system("color 4f");    //here the first word is for background and second is for foreground(text)
	cout << "Hello world" << endl;
	getch();
	return 0;
}

/*
    Color attributes are specified by TWO hex digits -- the first corresponds to the background;
                                                     -- the second to the foreground(text).
     Each digit can be any of the following values:
     
     color code          Color Name
     0                   Black
     1                   Blue
     2                   Green
     3                   Aqua
     4                   Red
     5                   Purple
     6                   Yellow
     7                   White
     8                   Gray
     9                   Light Blue
     A                   Light Green
     B                   Light Aqua
     C                   Light Red
     D                   Light Purple
     E                   Light Yellow
     F                   Light White
*/

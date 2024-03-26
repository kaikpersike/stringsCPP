#include <iostream>
#include <windows.h> 

using namespace std;

void gotoxy ( short x, short y )
{
	COORD coord = {x, y};
	SetConsoleCursorPosition ( GetStdHandle ( STD_OUTPUT_HANDLE ), coord );
}
	

int main() {
	string msg;
	string msg2;
	string txt; 
	cout << "Digite qualquer mensagem" << endl;
	
	getline(cin, txt);

	for(int i = 0; i < txt.size(); ++i)
	{
 		msg+=txt[i];
 		
 		//msg2+=msg[msg.size() -1];
 		msg2+=" ";
		
		for(int j = 0; j < 20; ++j)
		{
			gotoxy(10, 5+j);  
			cout << msg2 << msg[msg.size() -1];
			Sleep(100);
			gotoxy(10, 5+j);
			cout << msg2+" ";

		}
		
		cout << endl << msg;
		//msg2 = string msg2(msg.size(), ' ');
		
	}
	
	 	 
    return 0;
}

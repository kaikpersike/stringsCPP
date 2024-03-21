#include <iostream>
#include <fstream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	ifstream arq("lista.txt");

    if (arq.is_open()) {

        string linha;
        while (! arq.eof()) {
        	getline(arq, linha);
        	
			for(int i=linha.rfind(' ')+1; i < linha.size(); ++i)
			{
				cout << linha[i];
			}
        	cout << ", ";
        	for(int i=0; i< linha.size(); ++i)
			{
				
				if(i < linha.rfind(' '))
				{
					cout << linha[i];	
				}
				
			}
			cout << endl;

            
        }

        arq.close();
        
        
    } else {
        cout << "Erro ao abrir o arquivo";
    }
	
	return 0;
}
#include <iostream>
#include <fstream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	ifstream arq("lista2.txt");
	
	

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

				if(i < linha.find(' '))
				{
					cout << linha[i];	
				}
				
			}
			cout << ' ';
			//Jose Antonio Santos Silva
			int ver;

			ver = linha.find(' ');
			ver = linha.find(' ', ver+1);
			for(int j=0; j < linha.size(); j++)
			{
					
				if(j == ver)
				{
					cout << linha[j+1] << ". ";
					ver = linha.find(' ', j+1);
						
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
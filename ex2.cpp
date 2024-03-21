#include <iostream>
using namespace std;

int main()
{
    string txt;
    getline(cin, txt);
    
    string a[txt.size()] = {};
    
    string msg;
    //cout << txt.find(" ");
    
    
    for(int i = 0; i < txt.size(); ++i)
    {
        if(txt[i] != ' ')
        {
            msg+=txt[i];    
        }
        
    }
    
    int c = msg.size();
    string comp;
    
    while (c > 0)
    {
        comp+=msg[c-1];
        c--;
    }
    
    if(comp == msg)
    {
        cout << "É palíndromo";
    }
    else
    {
        cout << "Não é palíndromo";
    }
    
    return 0;
}













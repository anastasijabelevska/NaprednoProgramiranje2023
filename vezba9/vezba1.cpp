
#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    bool mala, golema, broj, znak;
    mala = golema = broj = znak = false;
    int i,brBukva;
    cout << "Vnesete tekst" << endl;
    string text;
    cin >> text;

    for(i=0;i<text.length(); i++){
        if(isdigit(text[i]))
            broj=true;
        else if(isupper(text[i]))
            golema=true;
        else if(islower(text[i]))
            mala=true;
        else znak = true;

    }

    cout<<"Broj na karakteri: "<< i<<endl;
    cout<<"Sodrzi mali bukvi: "<<mala<<endl;
    cout<<"Sodrzi golemi bukvi: "<<golema<<endl;
    cout<<"Sodrzi specijalen karakter: "<<znak<<endl;
    cout<<"Sodrzi broj: "<<broj;


    return 0;
}

//Anastasija Belevska 928
#include <iostream>
#include <time.h>
#include <cstdlib>
//#include <windows.h>
using namespace std;
void one();
void two();
void three();
void four();
void five();
void six();
//Deklariranje na koristeni funkcii
int main()
{
short unsigned int score = 0;
short unsigned int compScore = 0;
short unsigned int num = 0;
short unsigned int num2 = 0;
short unsigned int compNum = 0;
short unsigned int compNum2 = 0;
short unsigned int sum = 0;
short unsigned int compSum = 0;
char letter;
//Deklariranje na promenlivi
srand(time(NULL));
while (letter != 'q')
{
cout << "Your Score: " << score << endl;
cout << "computer's Score: " << compScore << endl << endl;
cout << "Press r to roll or q to quit: ";
cin >> letter;
num = 1 + rand()%6;
num2 = 1 + rand() %6;
compNum = 1 + rand() %6;
compNum2 = 1 + rand() %6;
//sto se sluciva so redovite 32 do 36 i koi se vrednostite na promenlivite ?
        // se vnesuva bukva r za da se svrti kockata i q za da zavrsi so frlanje
       // vrednosti od frlanjeto na kockite se num i num2
       //vrednosti od frlanjeto na kockata od kompjuterot se compNum i compNum2
    //Vrednostite na promenlivite se eden  broj pogolem od broevite pomegu 0 i 5.
sum = num + num2;
compSum = compNum + compNum2;

//Sobiranje na vrednostite

if (letter == 'q')
break;
if (letter != 'r')
{
system("cls");
continue;
}

switch (num)
{
case 1:
one();
break;
case 2:
two();
break;
case 3:
three();
break;
case 4:
four();
break;
case 5:
five();
break;
case 6:
six();
break;
default: //dali 71 i 72 se neophodni i koja im e funkcijata vo kodot ? 
//Vo ovoj slucaj ne se neophodni, poradi toa sto kockata moze da bide od 1 do 6
// dokolku ni eden od 6te slucaevi ne e tocen, da ispecati Error...
cout << "Error...";
break;
} //zavrshetok na switch case-ot za prviot broj

switch (num2)
{
case 1:
one();
break;
case 2:
two();
break;
case 3:
three();
break;
case 4:
four();
break;
case 5:
five();
break;
case 6:
six();
break;
default:// //dali 71 i 72 se neophodni i koja im e funkcijata vo kodot ? 
// i vo ovoj slucaj ne se neophodni, poradi toa sto kockata moze da bide od 1 do 6
//f dokolku ni eden od 6te slucaevi ne e tocen, da ispecati Error...
cout << "Error...";
break;
} //zavrsuvanje na switch/case-ot za vtoriot broj

cout << endl << "Yours: " << num << ", " << num2 << endl;
cout << "Computer's: " << compNum << ", " << compNum2 << "\n\n";

//Prikazuvanje na broevite na kockite

if (sum > compSum)
{
cout << "You won!!" << endl << endl;
score++;
}
else
{
compScore++;
cout << "you lost..." << endl << endl;
}

//shto rabotat naredbite 119 i 120 ?

system("pause"); 
//komanda koja se koristi za da napravi pauza na konzolata za citanje na kodot
system("cls"); 
//zatvoranje na konzolata


}
return 0;
}

void one()
{
cout << "-----" << endl;
cout << "|   |" << endl;
cout << "| O |" << endl;
cout << "|   |" << endl;
cout << "-----" << endl;
}
void two()
{
cout << "-----" << endl;
cout << "| O |" << endl;
cout << "|   |" << endl;
cout << "| O |" << endl;
cout << "-----" << endl;
}
void three()
{
cout << "-----" << endl;
cout << "| O |" << endl;
cout << "| O |" << endl;
cout << "| O |" << endl;
cout << "-----" << endl;
}
void four()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "|   |" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}
void five()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "| O |" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}
void six()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "|O O|" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}

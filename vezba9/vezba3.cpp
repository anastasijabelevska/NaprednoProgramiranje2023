#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int num = rand() % 100 + 5;
    int num2;
    cout << "Pogodi go brojot" << endl;
    cout<<num;
    while (true){

    cin >> num2;
    if(num2<num){
        cout << " Povisoko"<<endl;
        continue;
    }
    else if(num2>num){
        cout << " Ponisko"<<endl;
        continue;
    }

    else if(num2 == num){
        cout << "Go pogodivte brojot"<<endl;
        return 0;
    }
    continue;
    }
}


#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int sobiranje(int a, int b)
{
	return a+b;
}
int odzemanje(int a, int b)
{
	if(a>b)
	return a-b;
	else
	return b-a;
}
float delenje(int a, int b)
{
	if(a>b)
	return a/b;
	else
	return b/a;
}
double stepenuvanje(int a, int b)
{
	return pow(a,b);
}
int main()
{
	string ime="Anastasija",prezime="Belevska";
	int b1=(int)ime[0];
	int b2=(int)prezime[0];
	void* a=&b1;
	void* b=&b2;
	cout<<"Operacii na broevite "<<*(int *)a<<" i "<<*(int *)b<<" :\n";
	cout<<"Sobiranje : "<<sobiranje(*(int *)a,*(int *)b)<<"\n";
	cout<<"Odzemanje : "<<odzemanje(*(int *)a,*(int *)b)<<"\n";
	cout<<"Delenje : "<<delenje(*(int *)a,*(int *)b)<<"\n";
	cout<<"Stepenuvanje : "<<stepenuvanje(*(int *)a,*(int *)b)<<"\n";
	return 0;
}


/*
	this file is use to implement the methods, which class are defined a outside this file name BankClass
*/

#include"../../Header/include/BankClass.h"

Bank :: Bank()
{
	for(int i=0; i<10;i++)
	{
		head[i] = NULL;
	}
}

void Bank :: createAc()
{
	head = new Account;
}
void Bank :: deposite(int depositeMoney)
{

}
int Bank :: withdraw(int withdrawMoney)
{

}
int Bank :: checkBalance()
{

}
string Bank :: typeName()
{
	string na;
	cout<<"Type your full name :  ";
	cin>>na;
	return na;
}
int Bank :: typePin()
{
	int pin;
	cout<<"Type a pin(should be number):  ";
	cin>>pin;
	return pin;
}











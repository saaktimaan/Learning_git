#include<string>
#include"bAccountClass.h" // here i including the account class to create object incide bank class....
using namespace std;



class Bank
{
	private:
		Account *head[10];
	public:
		Bank(){}
		Bank();
		void createAc();
		void deposite(int depositeMoney);
		int withdraw(int withdrawMoney);
		int checkBalance();
		string typeName();
		int typePin();

};




















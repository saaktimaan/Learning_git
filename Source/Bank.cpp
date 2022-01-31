#include<iostream>
#include<string>
//#include"../Header/include/bAccountClass.h"
#include"../Header/include/BankClass.h"

using namespace std;


int main()
{
	int choise;
	while(1)
	{
		cout<<"\nCreate an Account : --- >  1";
		cout<<"\nCheck Account Ballance : --- >  2";
		cout<<"\nDeposite Money : --- >  3";
		cout<<"\nWithdrew Money : --- >  4";
		cout<<"\nLogOut : --- >  5";
		cout<<"\nType a choise : --- >  ";
		cin>>choise;
		if(choise == 0)
		{
			exit(1);
		}
		else
		{
			switch(choise)
			{
				case 1:
					cout<<"\nType full name: ";
					string name;
					int sPin;
					cin>>name;
					cout<<"\nType a sequrity pin: ";
					cin>>sPin;
					
					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					break;
				case 5:
						exit(2);
					break;
					
				default:
					cout<<"Wrong choise\nTry again\n";
			}
		}
	}
	cout<<"\nGood Bye...\n";

	return 0;
}

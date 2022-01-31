
/*
	this file is use to implement the methods, which class are defined a outside file name bAccountClass 
*/


#include"../../Header/include/bAccountClass.h"


Account :: Account(string aNam = NULL, int aNum = -1, int aBal = -1, int aPin =- 1);
{
	setAccName(aNam);
	setAccNum(aNum);
	setBal(aBal);
	setSequrityPin(aPin);
	++totalAc;
}

// this 4 are getter and setter methods -----------	

string Account :: getAccName(){return acName;}
void Account :: setAccName(string accountHoldersName)
{
	if(!accountHoldersName)
		acName = accountHoldersName;
	else
		acName = NULL;
}

int Account :: getAccNum(){return acNum;}
void Account :: setAccNum(long accountNumber){acNum = accountNumber;}

int Account :: getBal(){return bal;}
void Account :: setBal(int money)
{
	if(money < 0)
		bal = 0;
	else
		bal = money;
}

int Account :: getSequrityPin(){return sqrtPin;}
void Account :: setSequrityPin(int sequrityPin)
{
	if(sequrityPin < 0)
		sqrtPin = 0000;
	else
		sqrtPin = sequrityPin;
}

	
























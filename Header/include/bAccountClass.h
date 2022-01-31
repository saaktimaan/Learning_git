#include<string>
using namespace std;


class Account
{
	private:
		static int totalAc = 0;
		string acName;
		long int acNum;
		int bal;
		int sqrtPin;
	
	public:
		Account(){}
		Account(string aNam, int aNum, int aBal, int aPin);
		string getAccName();
		int getAccNum();
		int getBal();
		int getSequrityPin();
		
		void setAccName(string accountHoldersName);
		void setAccNum(long accountNumber);
		void setBal(int money);
		void setSequrityPin(int sequrityPin);
};












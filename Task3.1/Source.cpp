#include<iostream>
using namespace std;

class Prepaid_card {
private: float amount;

public: Prepaid_card() { amount = 0; }
		Prepaid_card(float x)
		 {
		  amount = x;
		 }
		void add_Balance(float add)
		{
			cout << "Recharge successful" << endl;
			cout<<"You have just added " << add << " to your balance" << endl;
			amount = amount + add;
			cout << "Total Balance is " << amount << endl;
			cout << endl;
		}
		void check_Balance()
		{
			cout << "Checking Balance" << endl;
			cout<<"Remaining Total Balance is : "<< amount << endl;
			cout << endl;
		}
		void virtual send() {
		}
		void setBalance(float a) {
			amount = a;

		}
		float getBalance() {
			return amount;

		}

};
class tele2_card:public Prepaid_card
{
	
	float sms_cost = 0;
	public:
		tele2_card() { sms_cost = 0; Prepaid_card(); }
		tele2_card( float a, float b)
		{
			sms_cost = a;
			setBalance( b );
		}
		void virtual send() {		

			setBalance (getBalance() - sms_cost );
			cout << "SMS SENT!!!!" << endl;
			cout << "Your SMS cost is 1.5 Kunas" << endl;
			cout << "Remaining Balance is : " << getBalance() << endl;
			cout << "\n" << endl;
		}

};

int main()
{
	Prepaid_card HT_HR1;
	HT_HR1.send();

	Prepaid_card* HT_HR=new tele2_card(1.5, 100);
	HT_HR->check_Balance();
	HT_HR->send();

	HT_HR->add_Balance(10);
	HT_HR->check_Balance();
	HT_HR->send();
	HT_HR->send();
	HT_HR->send();
	HT_HR->send();
	HT_HR->add_Balance(10);
	HT_HR->send();
	HT_HR->send();
	HT_HR->send();
	HT_HR->add_Balance(10);

	HT_HR->check_Balance();

	return 0;
}
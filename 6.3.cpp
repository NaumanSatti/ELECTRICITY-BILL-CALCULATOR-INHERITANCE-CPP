/*An electricity board charges the following rates to domestic users to discourage large
consumption of energy.
? For the first 100 units - 50 P per unit
? Beyond 100 units - 60 P per unit
If the total cost is more than Rs.250.00 then an additional surcharge of 15% is added
on the difference. Define a class Electricity in which the function Bill computes the
cost. Define a derived class More_Electricity and override Bill to add the surcharge.*/
#include<iostream>
using namespace std;
class Electricity
{
	protected:
		int unit;
		double bill;
	public:
		void get ()
		{
			cout <<"ENTER NO> OF UNITS: ";
			cin>>unit;
			
		}
		
		double rate()
		{
			if (unit<=100)
			{
				return bill=unit*0.5; 
			}
			else
			{
				int extra=unit-100;
				bill=(50+0.6*extra);
				return bill;
			}
		}
	
		
		
};
class More_Electricity:public Electricity
{
	public:
	double rate()
	{
		if (Electricity::rate()>250)
		{
			cout<<"Bill without Surcharge = "<<Electricity::rate()<<endl;
			cout<<"Surcharge 15% = ";
			cout<<(Electricity::rate()-250)*0.15;
			cout<<endl;
			cout<<"TOTAL BILL INCLUDING 15% Surcharge: ";
			return bill=((Electricity::rate()-250)*0.15)+Electricity::rate();
			
		}
	}
};
int main()
{
	More_Electricity E1;
	E1.get();
	cout<<E1.rate();
}

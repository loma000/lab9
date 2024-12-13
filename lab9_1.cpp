#include <iostream>
#include <iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main()
{

	double pb, in, total, pay, nb, inrate;
	int eoy = 1;
	cout << "Enter initial loan: ";
	cin >> pb;
	cout << "Enter interest rate per year (%): ";
	cin >> inrate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	cout << setw(13) << left << "EndOfYear#";
	cout << setw(13) << left << "PrevBalance";
	cout << setw(13) << left << "Interest";
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	nb = pb;
	while (nb > 0)
	{
		 
			pb = nb;
		 
		in = pb * (inrate / 100);
		total = pb + in;
		nb = total - pay;
		if (nb < 0)
		{
			nb = 0;
			pay = total;
		}

		cout << fixed << setprecision(2);
		cout << setw(13) << left << eoy;
		cout << setw(13) << left << pb;
		cout << setw(13) << left << in;
		cout << setw(13) << left << total;
		cout << setw(13) << left << pay;
		cout << setw(13) << left << nb;
		cout << "\n";

		eoy++;
	}
	return 0;
}

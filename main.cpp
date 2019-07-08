#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int i = 1;
	double Daphne_depo = 100, Cleo_depo = 100;
	
	while (Cleo_depo <= Daphne_depo)
	{
		cout << i << " year" << endl;
		Daphne_depo += 10;

		double temp = Cleo_depo * 0.05;
		Cleo_depo += temp;

		cout << "Daphne: " << Daphne_depo << "$" << "\t\t"
		 << "Cleo: " << Cleo_depo << "$" << endl;
		cout << "----------------------------------------------" << endl;
		i++;

	}
	cout << endl;
	cout << "\t" << i - 1 << " years later later Kleo get more than Daphne " << endl;

	system("pause");
	return 0;
}
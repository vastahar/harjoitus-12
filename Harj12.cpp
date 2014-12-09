// HARJOITUS 12
// Harri Vastamäki
// IIOS14S1

#include <iostream> 
using namespace std;

void main()
{
	int kokluku;
	cout << "Anna kokonaisluku valilla 1-9: " << endl;
	cin >> kokluku;
	int rivinro = 1;
	int sarake;

	while (rivinro < kokluku + 1)
	{
		for (sarake = 1; sarake <= rivinro; sarake++)
			cout << rivinro;
		rivinro++;
		cout << endl;
	}
}
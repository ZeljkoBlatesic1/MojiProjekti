#include<iostream>
using namespace std;
int main()
{

int i, j, x, y, NZD, k;
	//i,j se unose

	do
	{
		cout << "Unesite brojeve: "; cin >> i >> j;
	}
	while (i <= 0 || j <= 0);

	x = (i > j) ? i : j;
	y = (i < j) ? i : j;
		//veci broj od unesenih se dodjeljuje x, manji y

	while (y != 0)
	{
		k = x;
		x = y;
		y = k % y;
	}

	NZD = x;

	cout << "Najveci zajednicki djelilac je: "<< NZD <<  endl;
system("Pause");
return 0;
}


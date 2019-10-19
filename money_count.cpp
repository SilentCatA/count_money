#include <iostream>
using namespace std;
int main()
{
	while (1)
	{
		int tien;
		cout << "nhap tien: ";
		cin >> tien; 
		if (tien < 0) break;
		int menhgia[6] = {500000, 200000, 100000, 50000, 20000, 10000};
		int ls_tien[6] = {0, 0, 0, 0, 0, 0};
		cout << "--------------------------------------------------------------------------" << endl;
		for (int i = 0; i < 6; i++)
		{
			while (tien >= menhgia[i])
			{
				ls_tien[i]++;
				tien = tien - menhgia[i];
			}
			cout << "So to menh gia  " << menhgia[i] << "la: " << ls_tien[i] << endl;
		}
		cout << "---------------------------------------------------------------------------" << endl;
	}
	return 0;
}

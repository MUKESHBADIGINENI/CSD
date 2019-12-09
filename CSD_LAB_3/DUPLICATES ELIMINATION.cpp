//ID:-108998405 BADIGINENI MUKESH KUMAR
//CSD_LAB_WEEK_PROGRAM_1_ELEMINATE DUPLICATES

#include "pch.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int>b;
	int a, i, d = 0;
	while (cin >> a && a != -1) //taken -1 as loop eliminter
	{
		b.push_back(a);
	}
	sort(b.begin(), b.end());
	reverse(b.begin(), b.end());
	for (i = 0; i < size(b); i++)
	{
		{

			if (i > 0)
			{
				if (b[i] != b[i - 1])
				{
					d += 1;
					cout << " "<<b[i];
				}

			}
			if (i < 1)
				cout << b[i];
		}
	}
	d = (size(b)-1) - d;
	cout <<" (found "<<d<<" duplicates)";
}
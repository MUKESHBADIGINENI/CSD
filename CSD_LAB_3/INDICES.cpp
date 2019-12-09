//ID:-108998405 BADIGINENI MUKESH KUMAR
//CSD_LAB_WEEK_PROGRAM_2_iNDICES OF TWO NUMBERS

#include "pch.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	vector<int>b;
	int a, i, j;
	while (cin >> a && size(b) < 8)
		b.push_back(a);
	for (i = 0; i < size(b); i++)
	{
		//cout << b[i];
	//}

		for (j = i+1; j < size(b); j++)
		{
			if ((b[i] + b[j]) == 20)
			{
				cout << "[" << i << j << "]";
			}
		}
	}

}
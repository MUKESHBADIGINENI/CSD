//ID:-108998405_Lab2_Excercise_2
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int b, a, d, i, g, n, e,h;
	cout << "please enter how much money";
	cin >> b;
	cout << "Here is what you will get" << endl;
	while (b > 0)
	{
		a = b / 1000;
		b = b - (a * 1000);
		cout << "NT$1000*" << a << endl;
		if (b > 0)
		{
			d = b / 500;
			b = b - (d * 500);
			cout << "NT$500*" << d << endl;
			if (b > 0)
			{
				i = b / 100;
				b = b - (i * 100);
				cout << "NT$100*" << i << endl;
				if (b > 0)
				{
					g = b / 50;
					b = b - (g * 50);
					cout << "NT$50*" << g << endl;
					if (b > 0)
					{
						n = b / 10;
						b = b - (n * 10);
						cout << "NT$10*" << n << endl;
						if (b > 0)
						{
							h = b / 5;
							b = b - (h * 5);
							cout << "NT$5*" << h << endl;
							if (b > 0)
							{
								e = b;
								b = b - b;
								cout << "NT$1*" << e << endl;
							}
						}
					}
				}
			}
		}
	}
	return 0;

}
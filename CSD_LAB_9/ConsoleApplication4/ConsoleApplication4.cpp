//108998405_CSD_LAB_9_Header_File
#include "labnine.h"
using namespace std;
string NumberToString(int number)
{
    ostringstream ss;
    ss<<number;
    return ss.str();
}
int main()
{
    vector v1(5);
	cout << "v1: ";
    v1.print();
	for (int i = 0; i < v1.size(); i++)
	{
		string s = NumberToString(i);
		char p[5];

		int j;
		for (j= 0; j < sizeof(p); j++) {
			p[j] = s[j];
			v1[j] = p[j];
			cout << v1[j];
		}
		//v1[i] = cstr;
	}
	vector v2 = v1;
	v1[0] = '-';
	vector v3(2);
	cout << "v2: ";
	v2.print();
	v2[3] = '9';
	vector v4(2);
	v3 = v2;
	v2[2] = '-';
	cout << "v3: ";
	v3.print();
	cout << "v1: ";
	v1.print();
}
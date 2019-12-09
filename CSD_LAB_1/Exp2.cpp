#include <iostream>
using namespace std;
int main()
{
	char str1[10], str2[10];
	float val;
	cout << "Please enter two words and floating point number....."
		cin >> str1 >> str2 >> val;
	int va = (int)val;
	cout << str1 << " " << str2 << " " << va;
}
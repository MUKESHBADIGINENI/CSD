#include <iostream>
using namespace std;

class Polygon {
private:
	int width;             // 0 to infinite
	int height;           // 0 to 12

public:
	// required constructors
	Polygon() {
		width = 0;
		height = 0;
	}
	Polygon(int f, int i) {
		width = f;
		height = i;
	}


};
class Rectangle :Polygon
{
public:
	int width;
	int height;
	char del1, del2, del3;
	friend istream& operator>>(istream& input, Rectangle& D)
	{
		input >> D.del1 >> D.width >> D.del2 >> D.height >> D.del3;
		/*cin.get();
		cin.ignore('(');
		cin.ignore(',');
		cin.ignore(')');*/
		return input;
	}
	friend ostream& operator<<(ostream& output, const Rectangle& D)
	{
		output << "I am a Rectangle With Area = " << D.width * D.height;
		//output=width*height;
		return output;
	}

	// area = width*height;
	 //return area;
};

class Triangle :Polygon
{
public:
	int width;
	int height;
	char del1, del2, del3;
	friend istream& operator>>(istream& input, Triangle& T)
	{
		int area;
		input >> T.del1 >> T.width >> T.del2 >> T.height >> T.del3;
		/*input.ignore(100,'(');
		input.ignore(100,',');
		input.ignore(100,')');
		area = (T.width * T.height)/2;*/
		return input;
	}
	friend ostream& operator<<(ostream& output, const Triangle& T)
	{
		output << "I am a Triangle with area = " << (T.width * T.height) / 2;
		// area = width*height;
		return output;
	}

};
int main() {
	Rectangle rect;
	Triangle trgl;
	cout << "[Rectangle] Enter width and height in the format (w,h)" << endl;
	cin >> rect; // e.g. (4,5)
	cout << rect << '\n'; //
	cout << "[Triangle] Enter width and height in the format (w,h)" << endl;
	cin >> trgl; // e.g. (4,5)
	cout << trgl << '\n'; //
	return 0;
}

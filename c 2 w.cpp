#include <iostream>
using namespace std;
int main()
{
	float celsius, fahrenheit;
	cout << "Enter celsius tempearature :";
	cin >> celsius;
	fahrenheit = (celsius * 9.0) / 5.0 + 32;
	cout << " fahrenheit =" << fahrenheit << endl;
	cout << "Now weather in Thailand is";
	cout << (fahrenheit >= 70 ? "hot" : "cool") << endl;

	return 0;
}      
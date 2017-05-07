#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int length;
	int points[50];
	string moji = "123456789";
	string k = "1";
	string text[50];

	sizeof(k);

	/*for (int i = 0; i < sizeof(moji); i++)
	{
		points[i] = stoi(moji) / i;
	}*/

	for (int i = 0; i < moji.length(); i++)
	{
		text[i] = moji[i];
		points[i] = stoi(text[i]);
		cout << points[i];
	}
	
	
	//cout << points[];
}

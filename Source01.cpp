#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string moji = "0123456789";

	for (int i = 0; i < 10; i++)
	{
		cout <<  i + 1 <<  "•¶Žš‚ß:" << moji[i] << "\n";
	}
}
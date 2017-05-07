#include <iostream>
#include <iomanip>
#include <sstream>

//setw‚ðŽg‚¤‚É‚Íiomanip
using namespace std;

int main()
{
	ostringstream oStr;

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
			//cout << setw(2) << i*j << ' ';
			oStr << setw(2) << i*j << ' ';

		oStr << '\n';

		//cout << '\n';
		cout << oStr.str();
		oStr.str("");
	}

}

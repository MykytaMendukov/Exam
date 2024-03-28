#include <iostream>

using std::cout;
using std::string;
using std::cin;
using std::endl;

string Backwards(string str) {

	string result;

	for (int i = str.length(); i >= 0; i--) {
		result.push_back(str[i]);
	}
	return result;

}


int main()
{

	string yourString;

	cout << "Enter ypur string: ";
	cin >> yourString;

	cout << "Your string backwards: " << Backwards(yourString) << endl;


	return 0;
}
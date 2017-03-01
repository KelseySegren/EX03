//////////
///Kelsey Segren
//EX04_04
//10.4 Sort Characters in a string
///////////

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string sort(string& s);

int main() {
	string s;
	cout << "Enter a string s: ";
	getline(cin, s);
	cout << endl;

	sort(s);
	cout << "The sorted string is: " << s << endl;

}

string sort(string& s) {
	sort(s.begin(), s.end());
	return s;
}
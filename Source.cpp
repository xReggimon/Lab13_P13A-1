#include <iostream>
#include <fstream>
#include <map>
#include <cctype>
#include <iomanip>

using namespace std;

void pressEnterToContinue(void);

int main() {
	map<char, int> letterFrequency;

	ifstream inputFile;
	string filename;
	cout << "Enter filename: ";
	getline(cin, filename);
	inputFile.open(filename);

}

void pressEnterToContinue(void) {
	char c;
	cout << "Press Enter to continue...";
	cin.ignore(1024, '\n');
	do { cin.get(c); } while (c != '\n' && c != EOF);
	return;
}

#include <iostream>
#include <fstream>
#include <map>
#include <cctype>
#include <string>
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

	if (!inputFile) {
		cerr << "Error: unable to open the file..." << endl;
		return 1;
	}

	char ch;
	int totalLetters = 0;
	while (inputFile.get(ch)) {
		if (isalpha(ch)) {
			ch = tolower(ch);

			letterFrequency[ch]++;
			totalLetters++;
		}
	}

	inputFile.close();

	cout << "Total number of letters: " << totalLetters << endl;

	cout << "Frequency: " << endl;
	cout << fixed << setprecision(3);
	for (char letter = 'a'; letter <= 'z'; letter++) {
		double frequency = static_cast<double>(letterFrequency[letter]) / totalLetters * 100;
		cout << "'" << letter << "': " << frequency << endl;
	}
	return 0;
}

void pressEnterToContinue(void) {
	char c;
	cout << "Press Enter to continue...";
	cin.ignore(1024, '\n');
	do { cin.get(c); } while (c != '\n' && c != EOF);
	return;
}

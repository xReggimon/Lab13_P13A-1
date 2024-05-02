#include <iostream>
#include <fstream>

using namespace std;

void pressEnterToContinue(void);

int main() {

}

void pressEnterToContinue(void) {
	char c;
	cout << "Press Enter to continue...";
	cin.ignore(1024, '\n');
	do { cin.get(c); } while (c != '\n' && c != EOF);
	return;
}

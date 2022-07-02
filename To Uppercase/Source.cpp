#include <iostream>
#include<string>

using namespace std;

int main() {

	string line;
	getline(cin, line);

	int i = 0;
	while (line[i] != '\0') {

		if (line[i] == 32) {
			cout << endl;
		}
		else {
			line[i] -= 32;
			cout << line[i];
		}

		i++;
	}

	return 0;
}
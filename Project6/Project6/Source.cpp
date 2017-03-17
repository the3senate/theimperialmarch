#include <iostream>
#include <string>
using namespace std;
int main() {
	string Pasta[4];
	for (int i = 0; i < 4;i++) {

		cout << "give me a word" << endl << endl << endl;
		getline(cin, Pasta[i]);


	}
	if (Pasta[3].compare(" shamrock") == 0)
		cout << "you have tha mooney" << endl << endl << endl;
	else
		cout << "go away you jedi" << endl << endl << endl;


}
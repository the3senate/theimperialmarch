#include<iostream>
#include<string>
using namespace std;
int main() {
	string word[6];
	for (int i = 0; i < 6; i++) {
		cout << "Tell me a word." << endl;
		getline(cin, word[i]);
	}
	if (word[3].compare("shamrock")==0)
		cout << "You get a pot of gold!" << endl;
	else
		cout << "get outa'here!" << endl;
}
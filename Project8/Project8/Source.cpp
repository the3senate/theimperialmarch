#include<iostream>
#include<string>
using namespace std;
int main() {
	int input;
	string darth[5];
	cout << "hello,tell me your favorate video game" << endl;
	for (int i = 0; i < 5;i++) {
		getline(cin, darth[i]);
		if (darth[i].compare("fallout")==0)
		cout << "thing is,obsidion is better at making fallout games."<< endl;

		else if (darth[i].compare("call of duty")==0)
			cout << "your taste in gaming isn't that good."<< endl;
	}
	cout << "so your favorite games appear to be.." << endl;
	for (int i = 0;i < 5;i++) {
		cout << darth[i] << endl;
	}
}
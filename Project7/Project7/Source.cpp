#include<iostream>
using namespace std;
int main() {
	cout << "what is your birthday" << endl;
	int days;
	int years;
	int months;
	int life;
	cout << "Tell me what year you were born first." << endl;
	cin >> years;
	cout << "cool,i never knew you were that old/young" << endl;
	cout << "now,what month were you born in?" << endl;
	cin >> months;
	cout << "cool,i was born during april" << endl;
	cout << "Now, what day were you born on?" << endl;
	cin >> days;
	cout << "alright,that's a very interesting day to be born." << endl;
	life = (20-days) + (( 3-months)*30) + ((2017-years)*365);
	cout << "If I'm right, then you are somewhere around " << life << " days old." << endl;
}
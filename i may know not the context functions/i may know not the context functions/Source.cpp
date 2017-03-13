#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
void palpatine;
int main() {
	int num = rand() % 100 + 1;
	if (num < 50)
		cout << "i am the senate" << endl;
	else if (num > 50 && num < 80)
		cout << "execute order 66" << endl;
	else
		cout << "have i told you the tragedy of darth plaigus the wise?" << endl;
}
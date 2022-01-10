#include <iostream>
#include<string>
using namespace std;


int main()
{
	char* name = (char*)"John Doe";

	while (*name != NULL) {
		cout << *name++;
	}
	cout << "\n";
	name--;
	while (*name != NULL) {
		cout << *name--;
	}
	cout << "\n";
	name++;
	while (*name != NULL) {
		cout << *name++;
	}
}
#include <iostream>
using namespace std;

int main() {
	int s[5] = { 0,1,2,3,4 };
	int a, b;
	cin >> a >> b;
	for (int i = 1; i < b; i++) {
		if (a == s[b]) {
			cout << "This element is in the array" << endl;
			system("pause");
			return 0;
		}
	}
	cout << "This element isn't in the array" << endl;
	system("pause");
	return 0;
}
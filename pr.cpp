#include<iostream>
using namespace std;

int  add(int &var) {
	var = var + 10;
	return var;
}

int main() {
	int *a = 0;
	int& b = *a;
	cout << add(b) << endl;
	return 0;
}

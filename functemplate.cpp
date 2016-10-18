#include<iostream>
#include<string>

using namespace std;

template <typename T>
void display(T arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout<<endl;
}

int main()
{
	int arr [5] = {1,2,3,4,5};
	string sarr[5] = {"Mode", "Prode", "dede", "lele", "ssods"};
	display(arr,5);
	display(sarr,5);
	return 0;
}

#include<iostream>
#include<vector>

using namespace std;

template <class T, class U>
class CMap {
	private:
		vector<T> keys;
		vector<U> values;
	public:
		void insert(T key, U value) {
			keys.push_back(key);
			values.push_back(value);
		}
		void get(int n) {
			cout << keys[n] << ": "<<values[n];
		}
};

int main () 
{
	CMap<string, int> grades;
	grades.insert("Mukul", 87);
	grades.insert("Mkul", 187);
	grades.insert("Mukul", 287);
	grades.insert("Muk", 874);
	
	grades.get(3);
	cout<<endl;
	return 0;
}

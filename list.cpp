#include<iostream>
#include<vector>

using namespace std;

template<typename T>
class List {
	private:
		vector<T> datastore;
	public:
		List() {}
		void add(T item) {
			datastore.push_back(item);
		}
		
		void display() {
			for(int i =0; i < datastore.size(); i++) {
				cout << datastore[i] << endl;
			}
		}
};

int main () {
	List<string> p ;
	p.add("MD");
	p.add("MD5");
	p.add("MD7");
	p.add("MD9");
	p.display();
	return 0 ;
}
	

#include<iostream>

using namespace std;

class Line {
	private:
		int *ptr;
	public:
		int getLength(void);
		Line(int len);
		Line(const Line& obj);
		~Line();
		Line& operator=(const Line& obj);
		void display();
};

Line::Line(int len) {
	cout << "Normal constructor allocation ptr" << endl;
	ptr = new int;
	*ptr = len;
}

Line::Line(const Line& obj) {
	cout <<"Copy constructor allocating ptr"<<endl;
	ptr = new int;
	*ptr = *obj.ptr; //copy the value
}

Line::~Line(void) {
	cout << "Freeing memory"<<endl;
	delete ptr;
}

Line& Line::operator=(const Line& obj) {
	cout << "Operator overloading"<<endl;
	ptr = new int;
	*ptr = *obj.ptr;
}

int Line::getLength(void) {
	return *ptr;
}

void Line::display() {
	cout << "Length of line: " << *ptr << endl;
}

int main() {
	Line line1(10);  // Normal Constructor
//	Line line2 = line1; //copy constructor
	Line line3(line1);  //copy constructor
	
	line1 = line3; //operator overloading; works with predefined vars only
	line1.display();
//	line2.display();
	line3.display();
	return 0;
}

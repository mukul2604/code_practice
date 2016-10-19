#include<iostream>
#include<cstring>

using namespace std;

class A {
	private:
		int len;
		char *str;
	public:
		A(){
			cout << "Default constructor called" <<endl;
			str = new char(50);
			len = 0;
		};
		A(char *str1) {
			cout << "constructor called" <<endl;
			str = new char(50);
			str = strcpy(str,str1);
			len = strlen(str);
		};

		A(const A& a) {
			cout << "Copy Constructor was called" << endl;
			str = new char(50);
			strcpy(str, a.str);
			len = a.len;
		}

		A& operator+(const A& s1) {
			cout << "+ operator overloading" <<endl;
			str = strcat(str,s1.str);
			len = len + s1.len;
		};
		
		A& operator=(const A& stre) {
			cout<< "= operator overloading" <<endl;
			strcpy(str,stre.str);
			len = stre.len;
		};
		
		void display() {
			cout<< str <<" Length: "<< len <<endl;
		}
	
		~A() {
			cout<<"Destructor called"<<endl;
			delete str;
		}
};

int main(){
	A str1("Rohan");
	str1.display();
	A str2("Mordor");
	str2.display();
	A str3; // = str1 + str2; //copy constructor not initialized and assignment. 
	str3 = str1 + str2;
	str3.display();
	A str4("Mukul");
	A str5(str4);
	str3 = str4 + str5;
	str3.display();
	return 0;
}


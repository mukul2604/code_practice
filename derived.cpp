#include<iostream>
#include<string>

using namespace std;

class Employee {
	protected:
		string name;
		int age;
	public:
		void printDetails(){ cout << "Name: " << this->name << endl;}
		
		Employee() {
			this->name = "Default";
			this->age = 0;
		}

		Employee (string name, int age) {
			this->name = name;
			this->age = age;
		}
};

class Manager:public Employee {
	private:
		bool salaried;
	public:
		Manager(string name, int age, bool salaried): 
			Employee(name, age) {
				this->salaried = salaried;
			};
		
		void printDetails() {
			cout <<"Name: "<<this->name <<" Age: " << this->age <<" Salaried: " << this->salaried << endl;
		}
};

int main() {
	Employee emp1("John", 50);
	Employee emp3;
	emp1.printDetails();
	emp3.printDetails();
	Manager emp2("Erick", 60, true);
	emp2.printDetails();
	return 0;
}

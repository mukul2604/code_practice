#include<iostream>

using namespace std;

class Quad {
	protected:
		double side1, side2, side3, side4;
	public:
		Quad(double s1, double s2, double s3, double s4) {
			side1 = s1;
			side2 = s2;
			side3 = s3;
			side4 = s4;
		}
		
		void display() {
			cout << "Quad with sides : " << side1
				<< " " << side2 << " " << side3 << " " << side4 <<endl;
		}
};

class Trapezoid : public Quad {
	public:
		Trapezoid(double s1, double s2, double s3, double s4 ):
			Quad(s1,s2,s3,s4) {}
};

class Square: public Quad {
	public:
		Square(double side) : Quad(side, side, side, side) {}
};

int main() {
	Trapezoid t1(3,5,5,2);
	Square s1(9);
	t1.display();
	s1.display();
	return 0;	
}

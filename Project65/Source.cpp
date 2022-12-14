#include<iostream>
#include <vector>
using namespace std;
class point {
	int x;
	int y;
public:
	point() {
		x = 0;
		y = 0;
	}
	point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void set() {
		cout << "Enter X: ";
		cin >> x;
		cout << "Enter Y: ";
		cin >> y;
	}
	void setRand() {
		x = rand() % 10 + 1;
		y = rand() % 10 + 1;
	}
	void set(int xValue, int yValue) {
		x = xValue;
		y = yValue;
	}

	void setX(int xValue) {
		x = xValue;
	}

	void setY(int yValue) {
		y = yValue;
	}
	//Методи - інспектори 
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}


	void print() {
		cout << "X: " << x << "\nY: " << y << "\n";
	}

};

class Figure {
public:
	virtual void print() = 0;
};

class rectangle : public Figure {
	point points[4];
public:
	void set() {
		for (int i = 0; i < 4; i++)
			points[i].set();
	}
	void setR() {
		for (int i = 0; i < 4; i++)
			points[i].setRand();
	}
	void print() {
		for (int i = 0; i < 4; i++) {
			cout << "Point: " << i + 1 << endl;
			points[i].print();
		}
	}
};
class triangle : public Figure {
	point points[3];
public:
	void set() {
		for (int i = 0; i < 3; i++)
			points[i].set();
	}
	void setR() {
		for (int i = 0; i < 3; i++)
			points[i].setRand();
	}
	void print() {
		for (int i = 0; i < 3; i++) {
			cout << "Point: " << i + 1 << endl;
			points[i].print();
		}
	}
};

class diamond : public Figure {
	point points[4];
public:
	void set() {
		for (int i = 0; i < 4; i++)
			points[i].set();
	}
	void setR() {
		for (int i = 0; i < 4; i++)
			points[i].setRand();
	}
	void print() {
		for (int i = 0; i < 4; i++) {
			cout << "Point: " << i + 1 << endl;
			points[i].print();
		}
	}
};

class quadrangle : public Figure {
	point points[4];
public:
	void set() {
		for (int i = 0; i < 4; i++)
			points[i].set();
	}
	void setR() {
		for (int i = 0; i < 4; i++)
			points[i].setRand();
	}
	void print() {
		for (int i = 0; i < 4; i++) {
			cout << "Point: " << i + 1 << endl;
			points[i].print();
		}
	}
};
int main() {
	srand(time(0));

	diamond d[2];
	for (int i = 0; i < 2; i++) {
		d[i].setR();
	}
	for (int i = 0; i < 2; i++) {
		cout << endl << "Diamond: " << i + 1 << endl;
		d[i].print();
	}

	quadrangle q[2];
	for (int i = 0; i < 2; i++) {
		q[i].setR();
	}
	for (int i = 0; i < 2; i++) {
		cout << endl << "Quadrangle: " << i + 1 << endl;
		q[i].print();
	}

	rectangle r[2];
	for (int i = 0; i < 2; i++) {
		r[i].setR();
	}
	for (int i = 0; i < 2; i++) {
		cout << endl << "Rectangle: " << i + 1 << endl;
		r[i].print();
	}

	triangle t[2];
	for (int i = 0; i < 2; i++) {
		t[i].setR();
	}
	for (int i = 0; i < 2; i++) {
		cout << endl << "Triangle: " << i + 1 << endl;
		t[i].print();
	}


	return 0;
}
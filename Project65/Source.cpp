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

int main() {
	srand(time(0));

	diamond d[2];
	for (int i = 0; i < 2; i++) {
		d[i].setR();
	}
	for (int i = 0; i < 2; i++) {
		cout <<endl<< "Diamond: " << i + 1 << endl;
		d[i].print();
	}


	return 0;
}
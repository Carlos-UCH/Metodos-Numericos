#include <iostream>
#include <cmath>
using namespace std;


double f(double x) {
	return x*x - 5;
}


void metodoFalsi(double x1, double x2, double tol) {
	double fx1 = f(x1);
	double fx2 = f(x2);
	double x = (x2*fx1 - x1*fx2)/(fx1-fx2);
	double fx = f(x);
	
	while (abs(fx) > tol) {
		if (fx1*fx < 0) {
			x2 = x;
			fx2 = fx;
		} else {
			x1 = x;
			fx1 = fx;
		}
		x = (x2*fx1 - x1*fx2)/(fx1-fx2);
		fx = f(x);

		
	}
	
	cout << x << endl;
}

int main() {
	
	double x1 = 2;
	double x2 = 3;
	double tol = 0.00001;
	
	metodoFalsi(x1, x2, tol);
	return 0;
}

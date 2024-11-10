#include <iostream>
#include <cmath>
using namespace std;


double f(double x){
	return x*x*x - 13*x - 12;
}


double delta(double x0, double x1){
	return (f(x1) - f(x0)) / (x1 - x0);
}
void muller(double x0, double x1, double x2, int n){

	double f0, f1, f2;
	double h0, h1;
	double d0, d1;
	double a, b, c;
	double x3;

	for (int i = 0; i < n; i++){
	f0 = f(x0);
	f1 = f(x1);
	f2 = f(x2);

	h0 = x1 - x0;
	h1 = x2 - x1;

	d0 = delta(x0, x1);
	d1 = delta(x1, x2);
	
	a = (d1 - d0) / (h1 + h0);
	b = a*h1 + d1;
	c = f2;
	
  		
	if (b > 0){
		x3 = x2 - (2*c) / (b + sqrt(b*b - 4*a*c));
	}
	else{
		x3 = x2 - (2*c) / (b - sqrt(b*b - 4*a*c));
	}

	x0 = x1;
	x1 = x2;
	x2 = x3;
}
	cout << "x3 = " << x3 << endl;

}


int main() {

	double x0 = 4.5;
	double x1 = 5.5;
	double x2 = 5;

	int n = 4; 

	muller(x0, x1, x2, n);

return 0;
}

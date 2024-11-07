#include <iostream>
#include <cmath>
using namespace std;



double f(double x){
	return x*x - 7; 
}


void secante(double (*f)(double), double x0, double x1, int n){
	cout << "x0 = " << x0 << endl;
	cout << "x1 = " << x1 << endl;
	int i = 0;
	// for(int i = 0; i < n; i++){ For com n iterações
	
	while(abs(f(x1)) > 0.0001){ 
	
		double x2 = x1 - f(x1)*(x0 - x1)/(f(x0) - f(x1));
		x0 = x1;
		x1 = x2;
		cout << "x" << i+2 << " = " << x2 << endl;
	//} For com n iterações
	i++;	
	}
}
int main(){

	double x0 = 2; // chute inicial (xi-1)
	double x1 = 2.3; // chute inicial (xi)	

	int n = 7; // quantidade de iterações

	secante(f, x0, x1, n);
	return 0;
}


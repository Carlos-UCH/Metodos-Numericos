#include <iostream>
#include <cmath>
using namespace std;


double f(double x){
	return x*x -5;  
}

void bissec(double x1, double x2, double tol){
	double x;
	while(fabs(x2-x1) > tol){
		x = (x1+x2)/2;
		if(f(x1)*f(x) < 0){
			x2 = x;
		}else{
			x1 = x;
		}
	}
	cout << x << endl;

}

int main(){
	int i;
	double x1, x2, tol;

	x1 = 2;
	x2 = 3;
	tol = 0.00001;

	bissec(x1, x2, tol);

	return 0;
}



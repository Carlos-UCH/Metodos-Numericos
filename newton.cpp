#include <iostream>
#include <cmath>
using namespace std;

//função f(x) = x^2 - 3
double f(double x){
	return x*x - 3; 
}

//f'(x) = 2x
double df(double x){
	return 2*x;
}



void valNewton(double (*f)(double), double (*df)(double),double x0, int n){
	double derivada = df(x0);
	// for(int i = 0; i < n; i++){ For com iterações n 
	int i = 0;
	while(abs(f(x0)) > 0.0001){ 
	
		double x1 = x0 - f(x0)/derivada;
		derivada = df(x1);
		if(derivada == 0){
			cout << "x"<< i+1 << "="  << x1 << "(FIM)" << endl;
			break;
		}else{
			cout << "x"<< i+1 << "="  << x1 << endl;
		}
		x0 = x1;
		i++;
	}
	//} For com iterações n

}


int main(){

	int i = 5; // número de iterações

	double x0 = 1.0; // chute inicial

	valNewton(f, df, x0, i);

	return 0;
}

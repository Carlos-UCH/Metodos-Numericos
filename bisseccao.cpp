#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int i;
	double x1, x2, xr, funca, funcb, funcr;
	
	x1 = 2;
	x2 = 3;

	funca = x1*x1 - 5;
	funcb = x2*x2 - 5;
	while(true){
		if(funca*funcb < 0){
			xr = (x1+x2)/2;
			funcr = xr*xr - 5;

			if (funcr*funca <0){
				x2 = xr;
			}
			else{
				x1 = xr;
			}
		}
	if(abs(x2-x1) <= 0.00001){
		break;
	}

	cout << i << " " << xr << endl;
	cout << x2-x1 << endl;
	i++; 
}


cout << i << " " << xr << endl;


	return 0;
}


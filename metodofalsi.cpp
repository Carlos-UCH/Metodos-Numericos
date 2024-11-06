#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	int j = 0; 
	double x1, x2, xr, fx1,fx2,fxr;
	x1 = 1; 
	x2 = 2;
	fx1 = x1*x1 - 3;
	fx2 = x2*x2 - 3;
	
	while(abs(x1-x2) >= 0.00001){
		xr = (x2*fx1 - x1*fx2)/(fx1 - fx2);
		fxr = xr*xr - 3;
		if (fx1 * fxr < 0){
			x2 = xr;
			
		}else{
			x1 = xr;
		}
	j++;
	cout << j << setprecision(11) << " " << xr << endl;
	
	}
	return 0;
}

#include<iostream>
#include<vector>

using namespace std;

double interpollagrange(const vector<double>&x, const vector<double>&y, int n, double xx){
 double sum = 0.0;

 for (int i = 0; i <= n; ++i){
	double prod = y[i];

	for (int j = 0; j <= n; ++j){
		if(i != j){
			prod *= (xx - x[j])/(x[i] - x[j]);
		}

	}
	
	sum += prod;
    }

 return sum;
}

int main(){
	vector<double> x = {8, 9, 11}; 
	vector<double> y = {0.9030900, 0.9542425, 1.0413927};
	int grau = 2;
	double xx = 10;

	double result = interpollagrange(x, y,grau, xx);

	cout << result << endl;

return 0;
}

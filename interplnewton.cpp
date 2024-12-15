#include<iostream>
#include<vector>

using namespace std;

void interpolacaoNw(const vector<double>&x, const vector<double>&y, int n, double xi, double& yint, vector<double>& ea){
vector<vector<double>> fdd(n, vector<double>(n, 0.0));

for(int i=0; i<n; i++){
    fdd[i][0] = y[i];

}

for(int j = 1; j<n; j++){
    for(int i = 0; i<n-j; i++){
	fdd[i][j] = (fdd[i+1][j-1] - fdd[i][j-1])/(x[i+j] - x[i]);
    }
}

double xterm = 1.0;
yint = fdd[0][0];
ea.resize(n);

for(int order = 1; order< n; order++){
	xterm *= (xi - x[order-1]);
	double yint2 = yint + fdd[0][order]*xterm;
	ea[order-1] = yint2 - yint;
	yint = yint2;
	
	}
}

int main(){
	vector<double> x = {8.0, 9.0,11.0}; //pontos x
	vector<double> y = {0.9030900, 0.9542425, 1.0413927}; //pontos y
	int n = x.size();

	double xi = 10; //ponto a ser interpolado
	double yint;
	vector<double> ea;

	interpolacaoNw(x, y, n, xi, yint, ea);
	
	cout << "Valor interpolado em xi = " << xi << " é " << yint << endl;


return 0;
}

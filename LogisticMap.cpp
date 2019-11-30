#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>
using namespace std;

//Función Main.

int main()
{
    const int N_iter = 100;
    const double R = 2.1;
    vector <double> x(N_iter);
  
    x[0] = 0.5;
    
    for (int i = 1; i < N_iter; ++i) {
        x[i] = R*x[i-1]*(1-x[i-1]);
    }
  
    for (int k = 0; k < N_iter; ++k) {
        cout << k << "  " << x[k] << endl;
    }
    
    return 0;
}
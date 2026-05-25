#include <stdio.h>
#include <math.h>

double gaussianBump(double x, double mu, double s) {
    double num = pow(x-mu, 2);
    double denom = 2 * pow(s, 2);

    return exp(-num/denom);
}

int main(void) {

    //problem params
    double c = 2;
    double T = 1;
    double X = 1; 
    int nT = 1000;
    int nX = 1000;

    double dx = X/nX;
    double dt = T/nT;
    double cfl = c * dt/dx;
    double u[nX];

    //u(x,0) = exp(-(x-x0)^2 / 2s^2)
    double mu = 0;
    double s = 1;

    for (int i=0; i<nX; i++) {
        u[i] = gaussianBump(i * dx, mu, s);
    }

    return 0;
}
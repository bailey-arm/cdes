#include <stdio.h>

int main(void) {

    //params 

    double c  = 2;
    double dt = 0.1;
    double T = 1;

    printf("Simulating df/dt = %.1f from t=0 to t=%.1f with dt=%.2f\n", c, T, dt);

    double t = 0;
    double f = 0; //Initial condition

    while (t <= T) {
        printf("t = %.2f,  f = %.4f\n", t, f);
        f = f + c * dt;
        t = t + dt;
    }

    return 0;
}
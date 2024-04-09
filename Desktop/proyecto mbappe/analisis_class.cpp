#include <iostream>
#include <math.h>

using namespace std;

void calculate_roots(double A, double B, double C);
int main()
{
    calculate_roots(2,45,2);
    calculate_roots(2,20,2);
    calculate_roots(2,12,2);


    return 0;
}

void calculate_roots(double A,double B,double C){
    double D = B * B - 4 * A * C;
    if (D >= 0 && A != 0) {
        double d_sqr = sqrt(D);
        double x1 = -B + (d_sqr) / (2 * A);
        double x2 = (-B - d_sqr) / (2 * A);
        cout << x1 << endl;
        cout << x2 << endl;



    } else if (A == 0){
        cout << -C/B << endl;

    }   

}  
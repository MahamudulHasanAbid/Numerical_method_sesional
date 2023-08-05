// Ans: to the ques: no: 2

#include <iostream>
#include <cmath>

using namespace std;


double f(double x) {

    double y ;
    return y;
}


const double epsilon = 1e-6;


double bisection(double x1, double x2) {
    while (true) {

        double x3 = (x1 + x2) / 2;

        if (abs(f(x3)) < epsilon) {
            return x3;
        }

        if (f(x3) * f(x1) < 0) {
            x2 = x3;
        } else {
            x1 = x3;
        }
    }
}


double regula_falsi(double x1, double x2) {
    while (true) {

        double x3 = x2 - f(x2) * (x2 - x1) / (f(x2) - f(x1));

        if (abs(f(x3)) < epsilon) {
            return x3;
        }

        if (f(x3) * f(x1) < 0) {
            x2 = x3;
        } else {
            x1 = x3;
        }
    }
}

int main() {

    cout << "Enter the equation: ";
    string equation;
    getline(cin, equation);



    cout << "Enter the first initial guess: ";
    double x1;
    cin >> x1;


    cout << "Enter the second initial guess: ";
    double x2;
    cin >> x2;


    double root1 = bisection(x1, x2);
    cout << "The root found by the bisection method is approximately: " << root1 << endl;


    double root2 = regula_falsi(x1, x2);
    cout << "The root found by the regula falsi method is approximately: " << root2 << endl;

    return 0;
}

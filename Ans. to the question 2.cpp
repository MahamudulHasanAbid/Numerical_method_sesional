//Ans to the question no:5

#include <iostream>
#include <cmath>

using namespace std;

// define a small tolerance for the root
const double epsilon = 1e-6;

// define a function to implement the Newton-Raphson method
double newton_raphson(double x) {
    // define the equation here as a function of x
    double y = x*x - 3*x + 2;

    while (true) {
        // compute next approximation
        double x2 = x - y / (2*x - 3);
        // check if x2 is close enough to the root
        if (abs(x2 - x) < epsilon) {
            return x2;
        }
        // update x for the next iteration
        x = x2;
    }
}

int main() {
    // ask the user to enter the initial guess
    cout << "Enter the initial guess: ";
    double x0;
    cin >> x0;

    // find the root using the Newton-Raphson method
    double root = newton_raphson(x0);

    cout << "The root is approximately: " << root << endl;

    return 0;
}

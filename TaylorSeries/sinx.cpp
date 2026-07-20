// sin(x) = x-x^3/3! + x^5 / 5! - x^7 / 7! 
//sin(x) =  x^i / i !
//







#include <bits/stdc++.h>
using namespace std;

// Compute sin(x) using Taylor series around 0.
// term recurrence: term_{k+1} = term_k * ( - x^2 / ((2k+2)(2k+3)) )
double sin_taylor(double x, int terms=10) {
    double term = x; // k=0 term (x)
    double sum = term;
    for (int k = 0; k < terms-1; ++k) {
        double denom = (2.0*(k+1)) * (2.0*(k+1)+1.0);
        term *= - (x*x) / denom;
        sum += term;
    }
    return sum;
}

int main() {
    double x; int terms = 10;
    if (!(cin >> x)) return 0;
    if (!(cin.peek() == '\n')) {
        if (cin >> terms) { }
    }

    double approx = sin_taylor(x, terms);
    cout.setf(std::ios::fixed); cout<<setprecision(12);
    cout << approx << '\n';
    return 0;
}


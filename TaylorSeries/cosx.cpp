#include <iostream>
#include <iomanip>

// Compute cosine using Taylor series expansion around 0.
// cos(x) = sum_{n=0}^∞ (-1)^n * x^(2n) / (2n)!

double taylor_cos(double x, int terms = 12) {
    double term = 1.0;
    double sum = term;
    for (int n = 1; n < terms; ++n) {
        term *= -x * x / ((2.0 * n - 1.0) * (2.0 * n));
        sum += term;
    }
    return sum;
}

int main() {
    double x;
    if (!(std::cin >> x)) {
        return 0;
    }
    double result = taylor_cos(x);
    std::cout << std::setprecision(15) << result << '\n';
    return 0;
}

#include <iostream>
#include <cmath>
#include <limits>

// Compute natural logarithm using a Taylor series expansion.
// Uses the atanh-based series: ln(x) = 2 * sum_{n=0}^{N-1} ((x-1)/(x+1))^{2n+1} / (2n+1)
// This converges for x > 0 and is numerically stable for values near 1.

double taylor_ln(double x, int terms) {
    if (x <= 0.0) {
        return std::numeric_limits<double>::quiet_NaN();
    }
    double y = (x - 1.0) / (x + 1.0);
    double y_pow = y;
    double sum = y;
    for (int n = 1; n < terms; ++n) {
        y_pow *= y * y;
        sum += y_pow / (2 * n + 1);
    }
    return 2.0 * sum;
}

int main() {
    double x;
    int terms = 20;
    if (!(std::cin >> x)) {
        return 1;
    }
    double result = taylor_ln(x, terms);
    std::cout << result << '\n';
    return 0;
}
 
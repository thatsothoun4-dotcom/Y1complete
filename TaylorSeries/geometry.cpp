#include <cmath>
#include <iostream>
#include <limits>

static double normalize_radians(double x)
{
    const double pi = 3.14159265358979323846;
    x = std::fmod(x, 2.0 * pi);
    if (x < -pi)
        x += 2.0 * pi;
    else if (x > pi)
        x -= 2.0 * pi;
    return x;
}

static double taylor_sin(double x, int terms = 10)
{
    x = normalize_radians(x);
    double term = x;
    double sum = x;
    for (int n = 1; n < terms; ++n) {
        term *= -x * x / ((2 * n) * (2 * n + 1));
        sum += term;
    }
    return sum;
}

static double taylor_cos(double x, int terms = 10)
{
    x = normalize_radians(x);
    double term = 1.0;
    double sum = 1.0;
    for (int n = 1; n < terms; ++n) {
        term *= -x * x / ((2 * n - 1) * (2 * n));
        sum += term;
    }
    return sum;
}

static double taylor_tan(double x, int terms = 10)
{
    double cosx = taylor_cos(x, terms);
    if (std::fabs(cosx) < 1e-12)
        return std::numeric_limits<double>::infinity();
    return taylor_sin(x, terms) / cosx;
}

static double taylor_cot(double x, int terms = 10)
{
    double sinx = taylor_sin(x, terms);
    if (std::fabs(sinx) < 1e-12)
        return std::numeric_limits<double>::infinity();
    return taylor_cos(x, terms) / sinx;
}

int main()
{
    double x;
    std::cout << "Enter angle in radians: ";
    if (!(std::cin >> x))
        return 0;

    std::cout << "taylor_tan(" << x << ") = " << taylor_tan(x) << '\n';
    std::cout << "std::tan(" << x << ")       = " << std::tan(x) << '\n';
    std::cout << "taylor_cot(" << x << ") = " << taylor_cot(x) << '\n';
    std::cout << "std::cos(" << x << ")/std::sin(" << x << ") = ";
    if (std::sin(x) == 0.0)
        std::cout << "inf";
    else
        std::cout << std::cos(x) / std::sin(x);
    std::cout << '\n';
    return 0;
}

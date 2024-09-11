#include <iostream>
#include <cmath>

int main()
{
    std::cout<<"Enter Data\n";
    int x, y;
    std::cin >> x >> y;
    float f;
    f = float(1 / 2) * ((sqrt(exp(x * x + y * y)) - y * x) / ((x * x) + (y * y))) + log((sqrt(x * x * x * x) / (sqrt(y * y * y * y))));
    std::cout << f << "\n";
}

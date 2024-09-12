//
//  test.cpp
//  Proga
//
//  Created by Сергей Дарьин on 12.09.2024.
//

#include <iostream>
#include <cmath>


int test() {
    int x, x1, x2, x3;
    int a, b, c;
    std::cin>>x;
    x3 = x % 10;
    x2 = (x % 100) / 10;
    x1 = x / 100;
    a = (x1 + x2 + x3) % 10;
    b = (x1 * x2 * x3) / 100;
    c = (x2 + x3) % x1;
    int y;
    y = a * 100 + b * 10 + c;
    std::cout << y << "\n";
    return 0;
}

#include <iostream>

int main()
{
    double a;
    double b;
    double c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    double distAB = (a - b) >= 0 ? a - b : b - a;
    double distAC = (a - c) >= 0 ? a - c : c - a;
    if(distAB < distAC)
    {
        std::cout << "the nearest point is " << b << " and the distance is equal to " << distAB << std::endl;
    }
    else
    {
        std::cout << "the nearest point is " << c << " and the distance is equal to " << distAC << std::endl;
    }

    return 0;
}

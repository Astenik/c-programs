#include <iostream>

int main()
{
    double x;
    double y;
    std::cin >> x;
    std::cin >> y;
    int point = (x == 0 && y == 0) ? 0 : 1;
    point = (point == 1 && y == 0) ? 2 : point;
    point = (point == 1 && x != 0) ? 3 : point;
    std::cout << point << std::endl;

    return 0;
}

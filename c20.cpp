#include <iostream>

int main()
{
    double x;
    double y;
    std::cin >> x;
    std::cin >> y;
    bool t = (x > -1 && x < 0) && (y > -1 && y < 0) && x + y + 1 > 0 ? true : false;
    std::cout << std::boolalpha << t << std::endl;
    return 0;
}

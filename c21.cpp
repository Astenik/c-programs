#include <iostream>

int main()
{
    double x1;
    double y1;
    std::cin >> x1;
    std::cin >> y1;
    double x2;
    double y2;
    std::cin >> x2;
    std::cin >> y2;
    double x3;
    double y3;
    std::cin >> x3;
    std::cin >> y3;
    double x;
    double y;
    if(x1 == x2)
    {
        x = x3;
    }
    else if(x1 == x3)
    {
        x = x2;
    }
    else
    {
        x = x1;
    }
    if(y1 == y2)
    {
        y = y3;
    }
    else if(y1 == y3)
    {
        y = y2;
    }
    else
    {
        y = y1;
    }
    std::cout << "(" << x << " , " << ")" << std::endl;
    return 0;
}

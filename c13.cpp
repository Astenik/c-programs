#include <iostream>

int main()
{
    int r;
    std::cin >> r;
    int x;
    int y;
    std::cin >> x;
    std::cin >> y;
    //a
    if(x*x + y*y == r*r)
    {
        std::cout << "YES" << std::endl;
    }
    //b
    if(x*x + y*y < r*r)
    {
        std::cout << "YES" << std::endl;
    }
    //g
    if(x*x + y*y > r*r)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
    return 0;
}

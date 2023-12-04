#include <iostream>

int main() {
    int x;
    int y;
    std::cin >> x;
    std::cin >> y;
    int x1;
    int y1;
    std::cin >> x1;
    std::cin >> y1;
    int x2;
    int y2;
    std::cin >> x1;
    std::cin >> y1;
    if(x1 < x && x < x2 && y2 < y && y < y1)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
    return 0;
}

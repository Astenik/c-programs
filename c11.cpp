#include <iostream>

int main() {
    unsigned x1;
    unsigned y1;
    std::cin >> x1;
    std::cin >> y1;
    unsigned x2;
    unsigned y2;
    std::cin >> x2;
    std::cin >> y2;
    if(x1 >= 1 && x1 <= 8 && x2 >= 1 && x2 <= 8  && y1 >= 1 && y1 <= 8 && y2 >= 1 && y2 <= 8)
    {
        if ((x1 + y1) % 2 == (x2 + y2) % 2) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    else
    {
        std::cout << "Invalid input" << std::endl;
    }
    return 0;
    }

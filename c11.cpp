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
    if((x1 + y1)%2 == (x2 + y2)%2)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
    
    return 0;
}

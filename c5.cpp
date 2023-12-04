#include <iostream>

int main() {
    int a;
    std::cin >> a;
    int dig1 = a / 100;
    int dig2 = (a / 10) % 10;
    int dig3 = a %  10;
    //a
    if(dig1 != dig2 && dig1 != dig3 && dig2 != dig3)
    {
        std::cout << "YES" << std::endl;
    }
    //b
    if(dig1 < dig2 && dig2 < dig3)
    {
        std::cout << "YES" << std::endl;
    }
    //g
    if(dig1 == dig3)
    {
        std::cout << "YES" << std::endl;
    }
    else //bolor depqerum
    {
        std::cout << "NO" << std::endl;
    }
    return 0;
}


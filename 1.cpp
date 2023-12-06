#include <iostream>

int main() {
    unsigned a;
    unsigned b;
    std::cin >> a;
    std::cin >> b;
    //a
    if(a%2 & b&2)
    {
        std::cout << "YES" << std::endl;
    }
    //b
    if(a%2 | b&2)
    {
        std::cout << "YES" << std::endl;
    }
    //g
    if(a%2 ^ b&2)
    {
        std::cout << "YES" << std::endl;
    } 
    //d
    if(!((a+b)%2))
    {
        std::cout << "YES" << std::endl;
    }
    else //bolor depqerum
    {
        std::cout << "NO" << std::endl;
    }
    
    return 0;
}

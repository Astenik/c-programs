#include <iostream>

int main() {
    int a;
    int b;
    int c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
   //a
    if(a > 0 && b > 0 && c > 0)
    {
        std::cout << "YES" << std::endl;
    }
    //b
    if(a > 0 || b > 0 || c > 0)
    {
        std::cout << "YES" << std::endl;
    }
    //g
    if(a > 0 ^ b > 0 ^ c > 0)
    {
        std::cout << "YES" << std::endl;
    }
    //d
    if(a*b*c < 0 && (c*b < 0 ||  a*b < 0))
    {
        std::cout << "YES" << std::endl;
    }
    //e
    if(a == b || b == c || a == c)
    {
        std::cout << "YES" << std::endl;
    }
    if(a == -b || b == -c || c == -a)
    {
        std::cout << "YES" << std::endl;
    }
    else //bolor depqerum
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}

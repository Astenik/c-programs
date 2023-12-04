#include <iostream>

int main() {
    unsigned a;
    unsigned b;
    unsigned c;
    if(a + b > c && a + c > b && b + c > a)
    {
        //a
        if(a == b && b == c)
        {
            std::cout << "YES" << std::endl;
        }
        //b
        if((a == b && b != c) || (a == c && b != c) || (c == b && a != c))
        {
            std::cout << "YES" << std::endl;
        }
        //c
        if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a))
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }
    else
    {
        std::cout << "Invalid Input" << std::endl;
    }
    return 0;
}

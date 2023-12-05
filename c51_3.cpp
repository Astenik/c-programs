#include <iostream>

int main()
{
    short n;
    std::cin >> n;
    if(n < 0)
    {
        std::cout << "wrong input" << std::endl;
    }
    else
    {
        for(int i = 0; i <= n; ++i)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

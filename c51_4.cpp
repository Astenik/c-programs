#include <iostream>

int main()
{
    short n;
    std::cin >> n;
    int mul = 1;
    for(int i = 1; i <= 9; ++i)
    {
        mul *= n;
        std::cout << mul << " ";
    }
    std::cout << std::endl;

    return 0;
}

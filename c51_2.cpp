#include <iostream>

int main()
{
    int k;
    int N;
    std::cin >> k;
    std::cin >> N;
    if(N <= 0)
    {
        std::cout << "wrong input" << std::endl;
    }
    else
    {
        for(int i = 0; i < N; ++i)
        {
            std::cout << k << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int lastDig = n % 10;
    int thirdDig = (n / 100) % 10;
    int t = lastDig - thirdDig == 3 ? 1 : n*n;
    std::cout << t << std::endl;
    return 0;
}

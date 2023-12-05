#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int lastDig = n % 10;
    int thirdDig = (n / 100) % 10;
    bool t = lastDig - thirdDig == 3 ? true : false;
    std::cout << std::boolalpha << t << std::endl;
    return 0;
}

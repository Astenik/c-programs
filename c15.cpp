#include <iostream>

int main()
{
    unsigned AB;
    unsigned AC;
    unsigned BC;
    std::cin >> AB;
    std::cin >> AC;
    std::cin >> BC;
    unsigned AB1;
    unsigned AC1;
    unsigned BC1;
    std::cin >> AB1;
    std::cin >> AC1;
    std::cin >> BC1;
    if(BC > AC)
    {
        BC = BC + AC;
        AC = BC - AC;
        BC = BC - AC;
    }
    if(AB > BC)
    {
        AB = AB + BC;
        BC = AB - BC;
        AB = AB - BC;
    } 
    if(BC > AC)
    {
        BC = BC + AC;
        AC = BC - AC;
        BC = BC - AC;
    }
    if(BC1 > AC1)
    {
        BC1 = BC1 + AC1;
        AC1 = BC1 - AC1;
        BC1 = BC1 - AC1;
    }
    if(AB1 > BC1)
    {
        AB1 = AB1 + BC1;
        BC1 = AB1 - BC1;
        AB1 = AB1 - BC1;
    } 
    if(BC1 > AC1)
    {
        BC1 = BC1 + AC1;
        AC1 = BC1 - AC1;
        BC1 = BC1 - AC1;
    }
    //a
    if(AB == AB1 && AC == AC1 && BC == BC1)
    {
        std::cout << "YES" << std::endl;
    }
    //b
    if(AB / AB1 == AC / AC1 == BC / BC1)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
    
    return 0;
}

#include <iostream>

int main()
{
   double a;
   double b;
   double c;
   std::cin >> a;
   std::cin >> b;
   std::cin >> c;
   if((a > b && b > c) || (a < b && b <  c))
   {
       a *= 2;
       b *= 2;
       c *= 2;
   }
   else
   {
       a *= -1;
       b *= -1;
       c *= -1;
   }
   std::cout << a << " " << b << " " << c << std::endl;

    return 0;
}

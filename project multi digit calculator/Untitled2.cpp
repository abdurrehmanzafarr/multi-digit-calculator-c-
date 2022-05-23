#include <iostream>
#include <iomanip>

int main()
{
  long double d = 3469692.6031362;
  std::cout << d << std::endl;
  std::cout << std::fixed;
  std::cout << d << std::endl;
  std::cout << std::setprecision(9) << std::showpoint;
  std::cout << d << std::endl;
  
  return 0;
}

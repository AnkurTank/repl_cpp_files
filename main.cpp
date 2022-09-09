#include "Integer.h"
#include <iostream>

int main() {
  Integer a{40};
  std::cout << "Int value:" << a.get() << std::endl;
  std::cout << "exiting" << std::endl;
  return 0;
}
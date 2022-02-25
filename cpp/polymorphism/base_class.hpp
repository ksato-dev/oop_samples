#pragma once
#include <iostream>

class BaseClass {
 public:
  virtual void Method();
};

void BaseClass::Method() {
  std::cout << "Execute Method() of BaseClass." << std::endl;
}

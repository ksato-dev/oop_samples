#pragma once
#include "base_class.hpp"

class DerivedClass : public BaseClass {
 public:
  void Method() override;
};

void DerivedClass::Method() {
  std::cout << "Execute Method() of DerivedClass." << std::endl;
}

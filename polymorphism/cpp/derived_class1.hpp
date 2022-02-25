#pragma once
#include "base_class.hpp"

class DerivedClass1 : public BaseClass {
 public:
  void Method() override;
};

void DerivedClass1::Method() {
  std::cout << "Execute overrided Method() of DerivedClass1." << std::endl;
}

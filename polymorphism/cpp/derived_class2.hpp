#pragma once
#include "base_class.hpp"

class DerivedClass2 : public BaseClass {
 public:
  void Method() override;
};

void DerivedClass2::Method() {
  std::cout << "Execute overrided Method() of DerivedClass2." << std::endl;
}

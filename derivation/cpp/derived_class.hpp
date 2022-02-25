#pragma once
#include "base_class.hpp"

class DerivedClass : public BaseClass {
 public:
  void Method2();  // Method() メソッドの宣言（この例では定義を外部で行う）
};

void DerivedClass::Method2() {
  std::cout << "Execute Method2() of DerivedClass." << std::endl;
}

#pragma once
#include <iostream>

class BaseClass {
 public:
  virtual void
  Method();  // Method() メソッドの宣言（この例では定義を外部で行う）
};

void BaseClass::Method() {
  std::cout << "Execute Method() of BaseClass." << std::endl;
}

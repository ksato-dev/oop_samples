#pragma once
#include <iostream>

class BaseClass {
 public:
  void Method1();  // Method() メソッドの宣言（この例では定義を外部で行う）
};

void BaseClass::Method1() {
  std::cout << "Execute Method1() of BaseClass." << std::endl;
}

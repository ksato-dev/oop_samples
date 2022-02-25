#include "derive_class.hpp"

int main() {
  DerivedClass derived_class_obj;
  derived_class_obj.Method1();  // BaseClass（基底クラス）のメソッド呼び出し
  derived_class_obj.Method2();  // DerivedClass のメソッド呼び出し
}
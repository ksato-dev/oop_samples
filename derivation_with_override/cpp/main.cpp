#include "derived_class.hpp"

int main() {
  BaseClass base_class_obj;
  DerivedClass derived_class_obj;
  base_class_obj.Method();  // 基底クラスのメソッド呼び出し
  derived_class_obj.Method();  // オーバーライドされたメソッド呼び出し
}
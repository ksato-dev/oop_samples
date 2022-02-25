#include <iostream>
#include <vector>

#include "base_class.hpp"
#include "derive_class1.hpp"
#include "derive_class2.hpp"

int main() {
  std::vector<BaseClass*> obj_list;
  DerivedClass1* derived_class1_obj = new DerivedClass1();
  DerivedClass2* derived_class2_obj = new DerivedClass2();
  obj_list.push_back(derived_class1_obj);
  obj_list.push_back(derived_class2_obj);

  // 呼び出し方が抽象化されているので for 文で回せる。
  for (int obj_id = 0; obj_id < obj_list.size(); obj_id++)
    obj_list[obj_id]->Method();
  for (int obj_id = 0; obj_id < obj_list.size(); obj_id++)
    delete obj_list[obj_id];
}

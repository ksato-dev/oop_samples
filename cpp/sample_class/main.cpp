#include "sample_class.hpp"

int main() {
  SampleClass sample_class_obj;
  sample_class_obj.Method();

  // public 属性なのでクラス外からアクセス可
  std::cout << "Refer to `sample_class_obj.pub_param`: "
            << sample_class_obj.pub_param_ << std::endl;

  // private 属性なのでクラス外からアクセス不可（コンパイルもできない）
  // std::cout << "Refer to `sample_class_obj.pvt_param`: "
  //           << sample_class_obj.pvt_param
  //           << std::endl;
}

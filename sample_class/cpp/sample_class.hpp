#pragma once
#include <iostream>
#include <string>

class SampleClass {
 private:
  std::string pvt_param_;  // private ダミー変数（外部呼び出しできるかの確認用）
  int pvt_cnt_;  // メソッド呼び出し回数記録用

 public:
  std::string pub_param_;  // public ダミー変数（外部呼び出しできるかの確認用）
  SampleClass();  // コンストラクタ（初期化メソッド。今回はここで定義してる）
  void Method();  // Method() メソッドの宣言（この例では定義を外部で行う）
};

SampleClass::SampleClass() {
  pvt_param_ = "private";
  pvt_cnt_ = 0;
  pub_param_ = "public";
}

void SampleClass::Method() {
  pvt_cnt_++;  // class 内からは private メンバにアクセスできる。
  std::cout << "Execute Method()." << std::endl;
}

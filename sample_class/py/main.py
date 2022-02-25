# -*- coding utf-8 -*-
from sample_class import SampleClass

if __name__ == "__main__":
    sample_class_obj = SampleClass()
    sample_class_obj.Method()
    print("Refer to", sample_class_obj.pub_param, "from main().")

    # private 属性の参照はできない。
    # print("Refer to", sample_class_obj.__pvt_param, "from main().")

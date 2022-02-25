# -*- coding utf-8 -*-
from derived_class1 import DerivedClass1
from derived_class2 import DerivedClass2

if __name__ == "__main__":
    obj_list = list()  # [] と同じ
    derived_class1_obj = DerivedClass1()
    derived_class2_obj = DerivedClass2()
    obj_list.append(derived_class1_obj)
    obj_list.append(derived_class2_obj)

    for obj in obj_list:
        obj.Method()

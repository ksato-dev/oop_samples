

class SampleClass(object):
    """サンプルのクラス"""

    def __init__(self):
        """初期化メソッド"""
        self.pvt_param: str = "private"
        self.pvt_cnt: int = 0

        self.pub_param: str = "private"

    def Method(self):
        """何らかの処理を行うメンバ関数"""
        self.pvt_cnt += 1
        print("Execute Method().")


if __name__ == "__main__":
    sample_class_obj = SampleClass()
    sample_class_obj.Method()
    print(sample_class_obj.pub_param)
    print(sample_class_obj.pvt_param)

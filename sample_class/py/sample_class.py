# -*- coding utf-8 -*-

class SampleClass(object):
    """サンプルのクラス（C++に合わせ実装）"""

    def __init__(self):
        """初期化メソッド"""
        self.__pvt_param: str = "private"
        self.__pvt_cnt: int = 0

        self.pub_param: str = "public"

    def Method(self):
        """何らかの処理を行うメンバ関数"""
        self.__pvt_cnt += 1
        print("Execute Method().")


/*
题目
给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。

思路
当指数为负数的时候，可以先对指数求绝对值，然后算出次方的结果之后再取倒数。
如果底数为0，则直接返回0。此时的次方在数学上是没有意义的。

除此之外，我们要注意：由于计算机表示小数（包括float和double型小数）都有误差，
我们不能直接用等号（==）判断两个小数是否相等。如果两个小数的差的绝对值很小，比如小于0.0000001，就可以认为它们相等。
*/

# -*- coding:utf-8 -*-
class Solution:
    def Power(self, base, exponent):
        # write code here
        flag = 0
        result = 1
        if base ==0 :
            return False
        if exponent <0:
            flag =1
        for i in range(abs(exponent)):
            result*=base
        if flag == 1:
            result = 1/result
        return result
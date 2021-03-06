/*
题目
一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。

1、思路
我想说，这青蛙真变态，真能跳。

当n=1时，结果为1；
当n=2时，结果为2；
当n=3时，结果为4；
以此类推，我们使用数学归纳法不难发现，跳法f(n)=2^(n-1)。
*/

class Solution {
public:
    int jumpFloorII(int number) {
        if (number <=0){
            return 0;
        }
        else if(number==1)
        {
            return 1;
        }
        else{
            int answer=1;
            for(int i=2; i<=number;i++){
                answer *= 2;
            }
            return answer;
        }

    }
};
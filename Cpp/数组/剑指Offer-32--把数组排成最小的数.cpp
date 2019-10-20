/*
题目
输入一个正整数数组，把数组里所有数字拼接起来排成一个数，打印能拼接出的所有数字中最小的一个。
例如输入数组{3，32，321}，则打印出这三个数字能排成的最小数字为321323。

思路
遇到这个题，全排列当然可以做，但是时间复杂度为O(n!)。在这里我们自己定义一个规则，对拼接后的字符串进行比较。

排序规则如下：

若ab > ba 则 a 大于 b，
若ab < ba 则 a 小于 b，
若ab = ba 则 a 等于 b；
根据上述规则，我们需要先将数字转换成字符串再进行比较，因为需要串起来进行比较。比较完之后，按顺序输出即可
*/

class Solution {
public:
    string PrintMinNumber(vector<int> numbers) {
        
        if (numbers.empty())
        {
            return "";
        }
        string str;
        sort(numbers.begin(),numbers.end(),cmp);
        
        for (int i =0; i<numbers.size();i++)
        {
            str += to_string(numbers[i]);
        }
        
        return str;
    }

    private:
    
    static bool cmp(int a , int b)
    {
        string A = to_string(a) + to_string(b);
        string B = to_string(b) + to_string(a);
        return A < B;
    }
};
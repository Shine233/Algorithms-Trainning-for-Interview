/*
题目
大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项。（n<=39）

思路
这道题递归很好写，但是存在很严重的效率问题。我们以求解f(10)为例类分析递归的求解过程。
想求f(10)，需要先求得f(9)和f(8)。同样，想求得f(9)，需要先求的f(8)和f(7)....我们可以用树形结构来表示这种依赖关系，

我们不难发现在这棵树中有很多结点是重复的，而且重复的结点数会随着n的增加而急剧增加，这意味计算量会随着n的增加而急剧增大。
事实上，递归方法计算的时间复杂度是以n的指数的方式递增的。所以，使用简单的循环方法来实现。
*/

class Solution {
public:
    int Fibonacci(int n) {
        
        if (n<=0){
            return 0;
        }
        if (n==1){
            return 1;
        }
        int first=0, second=1, third = 0;
        for (int i =2; i<=n;i++){
            third = first + second;
            first = second;
            second = third;
            
        }
        return third;

    }
};
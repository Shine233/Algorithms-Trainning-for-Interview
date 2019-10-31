/*
题目
输入一个链表，输出该链表中倒数第k个结点。

1、思路
我们可以定义两个指针。第一个指针从链表的头指针开始遍历向前走k-1，第二个指针保持不动；
从第k步开始，第二个指针也开始从链表的头指针开始遍历。由于两个指针的距离保持在k-1，
当第一个（走在前面的）指针到达链表的尾结点时，第二个指针（走在后面的）指针正好是倒数第k个结点。

除此之外，要注意代码的鲁棒性。需要判断传入参数合法性问题。
*/

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(pListHead == NULL || k ==0){
            return NULL;
        }
        ListNode* pre = pListHead;
        ListNode* after = pListHead;
        for (int i = 0; i < k - 1; i++){
            if (pre->next !=NULL){
                pre= pre->next;
            }
            else{
                return NULL;
            }
        }
        
        while(pre->next !=NULL){
            pre = pre->next;
            after = after->next;
        }
        return after;
    }
};
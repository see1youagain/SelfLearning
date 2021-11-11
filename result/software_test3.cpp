//本程序旨在写排序树，树由随机数生成
//对生成的树计数

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//结构体
typedef struct TreeNode{
    int data;
    struct TreeNode *LeftChild;
    struct TreeNode *RightChild;
}TreeNode,*TreeNodePtr;

//判断是否为树空
inline bool IsEmpty(TreeNodePtr root)
{
    if(root->LeftChild==NULL&&root->RightChild==NULL)
        return true;
    return false;
}
//创建树
TreeNodePtr CreateTree(TreeNodePtr &root)
{
    root=new TreeNode;
    root->LeftChild=NULL;
    root->RightChild=NULL;
    root->data=rand()%100;
    return root;
}
//添加元素，主要调用排序函数
void AddTree(TreeNodePtr &root)
{
    int x;
    TreeNodePtr p;
    x=rand()%100;
    p=SortTree(p,x);
    p->data=x;
}
//比较函数
inline bool CmpNodeData(int a,int b)
{
    return ((a>=b)?1:0);
}
//排序函数，确定所插元素的位置
TreeNodePtr SortTree(TreeNodePtr &q,int x)
{
    static TreeNodePtr p;
    
    if(CmpNodeData(q->data,x))
    {
        p=q->RightChild;
    }
    else{
        p=q->LeftChild;
    }
    if(!p)
    {
        p=new TreeNode;
        if(CmpNodeData(p->data,q->data))
        {
            q->RightChild=p;
            return p;
        }
        q->LeftChild=p;
        return p;
    }

}
//先序遍历，遍历树
void ShowTree(TreeNodePtr root)
{

}
//本次任务，对非叶子结点计数
int CountTree(TreeNodePtr root)
{

}
//清空树
bool ClearTree(TreeNodePtr &root)
{

}

//主函数
int main()
{

}
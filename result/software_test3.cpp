//������ּ��д���������������������
//�����ɵ�������

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//�ṹ��
typedef struct TreeNode{
    int data;
    struct TreeNode *LeftChild;
    struct TreeNode *RightChild;
}TreeNode,*TreeNodePtr;

//�ж��Ƿ�Ϊ����
inline bool IsEmpty(TreeNodePtr root)
{
    if(root->LeftChild==NULL&&root->RightChild==NULL)
        return true;
    return false;
}
//������
TreeNodePtr CreateTree(TreeNodePtr &root)
{
    root=new TreeNode;
    root->LeftChild=NULL;
    root->RightChild=NULL;
    root->data=rand()%100;
    return root;
}
//���Ԫ�أ���Ҫ����������
void AddTree(TreeNodePtr &root)
{
    int x;
    TreeNodePtr p;
    x=rand()%100;
    p=SortTree(p,x);
    p->data=x;
}
//�ȽϺ���
inline bool CmpNodeData(int a,int b)
{
    return ((a>=b)?1:0);
}
//��������ȷ������Ԫ�ص�λ��
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
//���������������
void ShowTree(TreeNodePtr root)
{

}
//�������񣬶Է�Ҷ�ӽ�����
int CountTree(TreeNodePtr root)
{

}
//�����
bool ClearTree(TreeNodePtr &root)
{

}

//������
int main()
{

}
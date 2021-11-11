#ifndef Calculator_
#define Calculator_


#include<iostream>
#define CALCULATOR_H
enum MAXSIZE
{
    STACK_INIT_SIZE=20,
    STACKINCREMENT=10,
    MAXBUFFER=10,
    MAX_EXP_LEN=100
};

template<typename ElemType>
class Calculator
{
public:
    struct sqStack
    {
        ElemType *base;//指向栈顶
        ElemType *top;
        int stackSize;//当前栈的最大容量
    };
    Calculator();
    ~Calculator();
    void Push(ElemType e);
    bool Pop(ElemType &e);
    void clearStack();
    int StackLen();
    
    int Calculation(char Postfix[]);//后缀表达式的计算
    bool Infix2Postfix(char Infix[],char Postfix[]);//中缀表达式变为后缀表达式

private:
    sqStack s;
};


#endif
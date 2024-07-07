#include<iostream>
using namespace std;
// Implement it with array
class Stack
{
    int *arr;
    int size;
    int top;
    public:

    bool flag;
    // Constructor
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
        flag = 1;
    }
    // Push
    void push(int value)
    {
        if(top == size-1)
        {
            cout<<"Stack Overflow\n";
            return;
        }
        else{
            top++
        ;
        arr[top]= value;
            cout << "Pushed " << value << " into the Stack\n";
        flag = 0;
        }
    }
    // Pop
    void pop()
    {
        if(top == -1)
        {
           cout<<"Stack Underflow\n"; 
        }
        else{
            top--;
            cout<<"Popped "<< arr[top]<<" from the stack\n";
            if (top == -1)
                flag = 1;
        }
    }
    // peek
    int peek()
     {
        if(top == -1)
        {
           cout<<"Stack is empty\n"; 
           return -1;
        }
        else{
            return arr[top];
        }
    }
    // IsEmpty()
    bool IsEmpty()
    {
        return top == -1;
    }
    // IsSize
    int IsSize()
    {
        return top+1;
    }


};
int main()
{
    Stack S(5);
    // S.push(5);
    // S.push(6);
    // S.push(8);
    // S.push(6);
    // S.push(8);
    // S.push(6);
    // S.push(8);
    // S.pop();
    // S.pop();
    S.push(-1);
    int value = S.peek();
    if(S.flag == 0)
        cout<<value<<endl;
    // cout<<S.peek()<<endl;
    // cout<<S.IsEmpty()<<endl;
    // cout<<S.IsSize()<<endl;
}
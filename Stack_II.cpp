#include <iostream>
#include <stack>
using namespace std;

// Implement using LinkedList

// class Node
// {
// public:
// int data;
// Node *next;

// Node(int value)
// {
//   data = value;
//   next = NULL;
// }
// };

// class Stack
// {
// Node *top;
// int size;//Actual Size of stack
// public:
// Stack()
// {
//   top = NULL;
//   size = 0;
// }

// //push
// void push(int value)
// {
//   Node *temp = new Node(value);
//   if(temp == NULL)
//   {
//     cout<<"Stack Overflow"<<endl;
//     return;
//   }
//   else
//   {
//     temp->next = top;
//     top = temp;
//     size++;
//     cout<<"Pushed "<< value<<" into the stack\n";
//   }
// }
// // pop
// void pop()
// {
//   if(top == NULL)
//   {
//     cout<<"Stack Underflow\n";
//     return;
//   }
//   else 
//   {
//     Node *temp = top;
//     cout<<"Popped "<< top->data<< "from the stack\n";
//     top = top->next;
//     delete temp;
//     size--;
//   }
  
// }
// // peek
// int peek()
// {
//   if(top == NULL)
//   {
//     cout<<"Stack is Empty\n";
//     return -1;
//   }
//   else 
//   {
//     return top->data;
//   }
// }
// // IsEmpty
// bool IsEmpty()
// {  return top==NULL;}
// // IsSize
// int IsSize()
// {
//   return size;
// }

// };

int main() {
  // Stack S;
  // S.push(6);
  // S.push(16);
  // S.push(62);
  // S.push(86);
  // S.pop();
  // cout<<S.peek()<<endl;
  // cout<<S.IsEmpty()<<endl;
  // cout<<S.IsSize()<<endl;

  // Implementing of stack using STL
  stack<int>S;
  S.push(6);
  S.push(6);
  S.push(16);
  S.push(62);
  S.push(86);
  S.pop();
  cout<<S.size()<<endl;
  cout<<S.top()<<endl;
  cout<<S.empty()<<endl;

  
  
}
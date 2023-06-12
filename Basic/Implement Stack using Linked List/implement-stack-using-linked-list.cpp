//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct StackNode {
    int data;
    StackNode *next;
    StackNode(int a) {
        data = a;
        next = NULL;
    }
};

class MyStack {
  private:
    StackNode *top;

  public:
    void push(int);
    int pop();
    MyStack() { top = NULL; }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        MyStack *sq = new MyStack();

        int Q;
        cin >> Q;
        while (Q--) {
            int QueryType = 0;
            cin >> QueryType;
            if (QueryType == 1) {
                int a;
                cin >> a;
                sq->push(a);
            } else if (QueryType == 2) {
                cout << sq->pop() << " ";
            }
        }
        cout << endl;
    }
}

// } Driver Code Ends


//Function to push an integer into the stack.
void MyStack ::push(int x) 
{
    // Your Code
    StackNode *new1;
    new1=new StackNode(x);
    if(top==NULL)
        top=new1;
    else
    {
        new1->next=top;
        top=new1;
    }
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    // Your Code
    int d;
    StackNode *temp;
    if(top==NULL)
        return -1;
    else
    {
        temp=top;
        d=temp->data;
        top=top->next;
        free(temp);
        return d;
    }
    
}

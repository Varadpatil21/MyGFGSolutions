//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        if(head==NULL)
            return NULL;
        else if(head->next==NULL)
        {
            return head;
        }
        head=reverse(head);
        Node *temp=head;
        Node *temp1=head->next;
        while(temp1!=NULL)
        {
            if(temp->data>temp1->data)
            {
                temp->next=temp1->next;
                free(temp1);
                temp1=temp1->next;
            }
            else
            {
                temp=temp->next;
                temp1=temp1->next;
            }
        }
        head=reverse(head);
        return head;
    }
    Node* reverse(Node *head)
    {
      
        Node* current = head;
        Node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            
            next = current->next;
          
            current->next = prev;
           
            prev = current;
            current = next;
        }
        head = prev;
        return head;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends
//Linked  list
// how to reverse a linked lis
 #include<bits/stdc++.h>
using namespace std;

struct Node
{
   int data;
   struct Node *next;
}*head=NULL;

void pri()
{
	if(head == NULL)
   {
      printf("\nList is Empty\n");
   }
   else
   {
      struct Node *temp = head;
      printf("\n\nList elements are - \n");
      while(temp->next != NULL)
      {
	 printf("%d --->",temp->data);
	 temp = temp->next;
      }
      printf("%d --->NULL",temp->data);
   }

}


Node* insertAtEnd(Node*head,int value)
{
struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode->next = NULL;
   if(head == NULL)
	head = newNode;
   else
   {
      struct Node *temp = head;
      while(temp->next != NULL)
	temp = temp->next;
      temp->next = newNode;
   }
   
   return(head);
 
}

Node*insertAtspec(Node*head, int x)
{
    int l;
    struct Node *newNode;
    int h=1;
    cout<<"Enter the value you want to Enter";
    cin>>l;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data=l;
   
    if(head==NULL)
    cout<<"EMTY"<<endl;
    else if(x==1)
    cout<<"case";
    else
    {
        
        struct Node *temp = head;
      while(h<x-1){
	temp = temp->next;
        h++;
        }
      newNode->next = temp->next;
      temp->next = newNode;
        
    }
    
    return(head);
}

	
Node*reverse(Node*head){
	Node*curr=head;
	Node*prev=NULL;
	Node*nxt;
	while(curr!=NULL){
	nxt=curr->next;
	curr->next=prev;
	prev=curr;
	curr=nxt;
		}
	head=prev;	
	}
 
 
 int main()
 {
 	
 
 int n;
 cin>>n;
for(int i=0;i<n;i++){

int m;
cin>>m;
head=insertAtEnd(head, m);
}
 cout<<"---------------------------------------------"<<endl;
 pri();
 cout<<"---------------------------------------------"<<endl;
 head=reverse(head);
  cout<<"---------------------------------------------"<<endl;
 pri();
 cout<<"---------------------------------------------"<<endl;
  int x;
  cin>>x;
    head=insertAtspec(head,x);
    
 pri();
 cout<<"---------------------------------------------"<<endl;
    
    

 }

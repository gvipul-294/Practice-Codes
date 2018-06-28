

// Problem :- Given a singly linked list, rotate the linked list counter-clockwise by k nodes. Where k is a given positive integer smaller than or equal to length of the linked list. For example, if the given linked list is 10->20->30->40->50->60 and k is 4, the list should be modified to 50->60->10->20->30->40.

//Can see Editorial

//Code : void rotate(struct node **head_ref, int k)
{ 
  node* lenF=*head_ref;
  int len=1;
  while(lenF->next!=NULL){
      lenF=lenF->next;
      len++;
  }
  // Complete this method
  if(len!=k){
  node* temp=*head_ref;
//   cout<<temp->data<<endl;
  node* init=temp;
  node* last;
  
  while(k--){
       
      if(k+1==1){
          last=temp;
      }
      temp=temp->next;
      last->next=NULL;
       
  }
   
  *head_ref=temp;
  while(temp->next!=NULL){
      temp=temp->next;
  }
  temp->next=init;
  }
}

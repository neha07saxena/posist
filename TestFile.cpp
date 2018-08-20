#include<bits/stdc++.h>
#include<time.h>
using namespcae std;
int Node_number=0,NodeId=0,RefNodeId=0,ChildNodeId=0,RefChildNodeId=0;

struct data{  //encrypted
 string owner_name;
 string password;
 string address;
 string mobile;
 string phone;
 float value;
};

 struct node{
 time_t timer;  //time(&timer)
 struct data enc_data;
 int Node_number;
 int Node_id;
 int Ref_node_id;
 int child_node_id;
 int ref_child_node_id;
 struct node *nextMainNode=NULL;
 struct node *nextSubNode=NULL;
 struct node *RefNode;
 }*head=NULL;

 struct node * create(){
   struct node *temp;
   temp=new node;
   time(&temp->timer);
   temp->RefNode=NULL;
   cout<<"Enter owner name: "
   cin>>temp->enc_data.owner_name;
   cout<<"Enter password: "
   cin>>temp->enc_data.password;
   cout<<"Enter mobile no.: "
   cin>>temp->enc_data.mobile;
   cout<<"Enter phone no.:"
   cin>>temp->enc_data.phone;
   cout<<"Enter value: "
   cin>>temp->enc_data.value;
   temp->Node_number=++Node_number;
   temp->Node_id=++NodeId;
   if(head==NULL){
   temp->child_node_id=0;
   temp->ref_child_node_id=0;
   temp->Ref_node_id=0;
   return temp;}



   return temp;
 }

void createFirst(){
   head=create();
 }

 void createMultiFirst(){
     int N;
     cout<<"\nHow many nodes required in multiset? ";
     cin>>N;
     while(N--){

     }
 }

int main(){
int choice;
 do{
    cout<<"1:Create first node, 2:Create multiset of first node,3:Add new node to particular set of node,\n4:Encrypt data of node, 5:Verify owner using password,6:Break up a node, 7: Change owner of Node, 8:Find longest chain of main node,\n9: Longest chain of sub node,10:Merge 2 sets of nodes, 0:Exit\n";
    cin>>choice;
 switch(choice){
  case 1: createFirst();
        break;
  case 2: createMultiFirst();
          break;
 }
 }while(choice!=0)
 return 0;
}


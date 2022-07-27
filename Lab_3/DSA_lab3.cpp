#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Node{
	private:
		int data;
	public:
		Node *next;
		//set value to data member
		void setData(int data){
			this->data = data;
		}
		
		int getData(){
			return data;
		}
		
		//return address of obj
		Node* address(){
			return this;
		}
};
class LinkedList{
	private:
		Node* head;
	public:
		
		LinkedList(){
			head = NULL;
		}
//==========================================================
		//this function use to insert front
		void InsertFront(int d){
			Node* new_node = new Node();
			new_node->setData(d);
			new_node->next = head;//next address
			head = new_node;//address this node
		}
//==========================================================
		//this function use to insert last
		void InsertLast(int lastValue){
			Node* newNode = new Node();
			newNode->setData(lastValue);
			newNode->next = NULL;
			
			Node* tempNode = head;
			while(tempNode->next!=NULL){
				tempNode = tempNode->next;
			}
			
			tempNode->next = newNode;
			cout<<"The last is:"<<newNode->getData()<<endl;
		}
//==========================================================
		bool Empty(){
			if(head==NULL){
				return true;
			}else{
				return false;
			}
		}
//==========================================================
		void InsertPosition(int pos,int data){
			Node* newNode = new Node();
			newNode->setData(data);
			newNode->next = NULL;
			
			//insert at the given position
			Node* temp2 = head;
			for(int i=1;i<pos;i++){
				temp2=temp2->next;
			}
			
			newNode->next = temp2->next;
			temp2->next = newNode;
		}
//==========================================================
		void SearchList(int item){
			Node *temp;
			int i=0,f=0;
			temp = head;
			while(temp!=NULL){
				if(temp->getData() == item){
					cout<<"Item found at location "<<(i+1)<<endl;
					cout<<"At Address :"<<temp->address()<<endl;
					f = 1;
				}
				i++;
				temp = temp->next;
			}
			if(f==0){
				cout<<"Search value not found...."<<endl;
			}
		}
//==========================================================
		//this function use to delete front
		void DeleteFront(){
			Node* temp = head;
			if(head == NULL){
				cout<<"Link is empty..."<<endl;
			}
			
			head = head->next;
			cout<<"Value deleted :"<<temp->getData()<<endl;
			free(temp);
		}
//==========================================================
		//this function use to delete tail
		void DeleteLast(){
			Node *ptr;
			Node *temp;
			ptr = head;
			while(ptr->next!=NULL){
				temp = ptr;
				ptr = ptr->next;	
			}
			temp->next = NULL;
		}
//==========================================================
		//this function use to display value,address of value and next address
		void PrintList(){
			Node* node = new Node();
			node = head;
			cout<<"=>=>=>Linked list:"<<endl;
			while(node!=NULL){
				cout<<"------------------------"<<endl;
				cout<<"Data         :"<<node->getData()<<endl;
				cout<<"Address      :"<<node->address()<<endl;
				cout<<"Next Address :"<<node->next<<endl;
				node = node->next;
			}
			cout<<"------------------------"<<endl;
			cout<<endl;
		}
//==========================================================
		void GetFirst(){
			Node* check = head;
			cout<<"     The first node "<<endl;
			cout<<"Data         :"<<check->getData()<<endl;
			cout<<"Address      :"<<check->address()<<endl;
			cout<<"Next Address :"<<check->next<<endl;
		}
//==========================================================
		void GetTail(){
			Node* check = head;
			while (check->next != NULL){
				check = check->next;
			}
			cout<<"Data         :"<<check->getData()<<endl;
			cout<<"Address      :"<<check->address()<<endl;
			cout<<"Next Address :"<<check->next<<endl;
		}
};
int main(){
	
	LinkedList* obj = new LinkedList();
	int value;
	int op,i,n;
	again:
		cout<<"\n================================"<<endl;
		cout<<"1. Insert front      "<<endl;
		cout<<"2. Insert by position"<<endl;
		cout<<"3. Insert last       "<<endl;
		cout<<"4. Delete front      "<<endl;
		cout<<"5. Delete last       "<<endl;
		cout<<"6. Search value      "<<endl;
		cout<<"7. Display value     "<<endl;
		cout<<"8. Get first node    "<<endl;
		cout<<"9. Get last node     "<<endl;
		cout<<"10.Empty             "<<endl;
		cout<<"================================"<<endl;
		cout<<"Please, choose one option :";cin>>op;
		switch(op){
			case 1:{
				cout<<"Input n number of node :";cin>>n;
				for(i=0;i<n;i++){
					cout<<"Enter value in node"<<i+1<<":";cin>>value;
					obj->InsertFront(value);
				}
			}break;
			case 2:{
				int position,data;
				cout<<"Input positon to insert:";cin>>position;
				cout<<"Input new value :";cin>>data;
				obj->InsertPosition(position,data);
			}break;
			case 3:{
				int lastValue;
				cout<<"Input last value :";cin>>lastValue;
				obj->InsertLast(lastValue);
			}break;
			case 4:{
				obj->DeleteFront();
			}break;
			case 5:{
				obj->DeleteLast();
			}break;
			case 6:{
				int searchValue;
				cout<<"Input value to search :";cin>>searchValue;
				obj->SearchList(searchValue);
			}break;
			case 7:{
				obj->PrintList();
			}break;
			case 8:{
				obj->GetFirst();
			}break;
			case 9:{
				obj->GetTail();
			}break;
			case 10:{
				if(true!=obj->Empty()){
					cout<<"Have value";
				}else{
					cout<<"Have not value";
				}
			}break;
		}
	goto again;
	return 0;
}

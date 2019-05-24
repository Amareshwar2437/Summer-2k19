#include<iostream>
using namespace std;

class node{
	public:
	int data; //Value of node
	node*next;	//Pointer to the next node
	node(){
		next = NULL;	
	}
};

class LinkedList{
	public:
	
	node*head; //Locate the head of the linked list first
	LinkedList(){
		head = NULL;		//Use of constructor
	}
	
void insert(int value){
		//Create a new node
		node*temp = new node();
		//Assign value to it
		temp -> data = value;
		//Now pointers
		//Check if linked list is empty
			
		if(head==NULL){
				head = temp; }

		else{
				temp -> next = head;
				head = temp;
		}		
					
	}

void display(){
		node*current = head;
		while (current != NULL){
				cout << current -> data <<"->";
				current = current -> next;
		}
		
		cout << "NULL" <<endl;
	}	
};

int main(){
		LinkedList l1;
		for (int i =0 ; i < 10; i++){
			l1. insert(i);	
	}
	l1.display();
}


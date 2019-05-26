#include<iostream>
using namespace std;

class Node{
	public:
	//Insert data
	int data;
	//Pointer to the next node
	Node * next;
	//Constructor that makes the pointer to NULL
	Node(){
		next = NULL;
	}
	
};

class LinkedList{
	public:
	//Declare head
	Node*head;
	Node*tail;
	//Use constructor to point them to NULL first
	LinkedList(){
		head = NULL;
		tail = NULL;
	}
	
	//Insert a new node at beginning
	
	void insert(int value){
		//1st step :- Create a new node
		Node * temp = new Node();
		//Assign value to that node
		temp -> data = value;
		//Use of pointers now
		//First check if the linked list is empty or not
	
// If linked list is empty, then the new node inserted will be the only node annd hence all u need to do, is to point the head to that node.

// If linked list is not empty, then to insert the new node at the beginning, means the first step is new node creation, 2nd step is assigning a value to it, 3rd step is update the head.

		//Use of conditions
		
		if ( head == NULL){
				head = temp;
		}
		
		else {
				temp -> next = head;
				head = temp;
		}
}
	void display(){
			//FIND HEAD FIRST then start printing
			Node * current = head;
			//Use conditions now
			while (current != NULL){
				cout << current -> data << " -> ";
				current = current -> next;			
			}
		cout << "NULL" <<endl;
	}
	
	void delet(){
			//Delete the node from ending
			//first go to the tail and store it in temp
	
			Node * temp = tail;
			
			//Now store the head in current

			Node * current = head;
			
			//Now use conditions

			while (current -> next != tail){
					current = current -> next;
					
			}
				current -> next = NULL;
				// The last element now points to null
				//So updating the tail would delete the required element
				
				tail = current;
				delete temp;
	}
};


int main(){

	LinkedList l1;
	for (int i =0; i < 10; i++){
		l1.insert(i);
	}
	
	l1.display();
	l1.delet();
}

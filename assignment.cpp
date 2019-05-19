#include <iostream>
using namespace std;
void sort(int beg, int end);

typedef struct node{
	
	int no_of_books;
	int rank;
	int sorted;
	node *next;
	node *prev;

}node;

node *start = NULL;
node *ptr = NULL;
int T,N,n,Q,beg,end;


int main(){
	

	
	cout << "Enter no of Test cases: ";
	cin >> T;
	
	for(int i=0; i<T; i++){
		cout << "Enter no of  shelves: ";
		cin >> N;
		
		cout << "Enter no of books : ";
		//create node
		for(int i=1; i<=N; i++){
			node *shelf = new node();
			shelf->rank = i;
			cin >> shelf->no_of_books ;
			shelf->sorted = 0;
			shelf->next = NULL;
			
			if(ptr != NULL){
				shelf->prev = ptr;
				ptr->next= shelf;
			}else{
				shelf->prev=NULL;
				start = shelf;
			}
			ptr = shelf;			
		}
		
	
		
		cout << "Enter no of  queries : ";
		cin >> Q;
		
		cout << "Enter queries : "<<endl;
		int a,arr[4];
		for(int i=0; i<Q; i++){
			
			cin >> arr[i];
			if(arr[i]==0){
				for(int j=1; j<4; j++){
					cin >> arr[j];	
				}
					beg = arr[1];
					end = arr[2];
				
					sort(beg,end);
					
			}else{
				for(int j=1; j<3; j++){
					cin >> arr[j];	
				}
					
			}	
		}
		
		
		cout <<"---------------"<<endl;
		
	}

	node *temp = new node();
	temp=start;
	while(temp!=NULL){
		cout << temp->no_of_books<< temp->rank << temp->sorted<< endl;
		temp=temp->next;
	}

}

void sort(int beg, int end){
	node *head=NULL;
	node *tail =NULL;
	
		node *p = new node();
		p=start;
	while(p!=NULL){
			
		if(beg == p->rank){
			head = p;
		
		}
		if(end == p->rank){
			tail = p;
		
		}
		p = p->next;
	}

	node *temp1 = NULL;
	node *temp2 = NULL;
	
	int t;
	head->sorted = head->no_of_books;
	cout<< head->sorted;
	temp1=head;
	while( temp1->next!=tail->next){
		cout << "vgdftsygiu";
		temp2=temp1->next;
		
		while(temp2->prev->sorted > temp2->no_of_books && temp2->prev != NULL){
			cout << "vjhyfugu";
			t = temp1->sorted;
			temp1->sorted= temp2->no_of_books;
			temp2->sorted=t;
			temp2= temp2->prev;
			
		}
		temp1 = temp1->next;
	}
	
	node *temp = new node();
	temp=start;
	while(temp!=NULL){
		cout << temp->no_of_books<< temp->rank << temp->sorted<< endl;
		temp=temp->next;
	}

}







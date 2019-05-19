#include <iostream>
using namespace std;


typedef struct node{
	
	int no_of_books;
	int rank;
	int sorted;
	node *next;
	node *prev;

}node;

void sort(int beg, int end , int find, node *start);

int main(){
	
int T,N,n,Q;

cout << "Enter no of Test cases: ";
cin >> T;
node *start = NULL;

	for(int i=0; i<T; i++){
		cout << "Enter no of  shelves: ";
		cin >> N;
		//craete ptr node
		node *ptr = NULL;
		//create start node
		node *start = NULL;
		cout << "Enter no of books : ";
		//create nodes of shelves
		for(int i=1; i<=N; i++){
			node *shelf = new node();
			shelf->rank = i;
			cin >> shelf->no_of_books ;
			shelf->sorted = shelf->no_of_books;
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
			cin >> arr[0];
			if(arr[0]==0){
				for(int j=1; j<4; j++){
					cin >> arr[j];	
				}
				sort(arr[1],arr[2],arr[3],start);		
			}else{
				for(int j=1; j<3; j++){
					cin >> arr[j];	
				}
				//update no of books
				node *t = start;
					while(t!=NULL){
					if(arr[1]== t->rank){
						t->no_of_books=arr[2];
						break;
					}
					t=t->next;
				}
					
			}	
		}
		cout <<"---------------"<<endl;
	}
}

void sort(int beg, int end, int find , node *start){
	
	node *head=NULL;
	node *tail =NULL;
	node *p = start;
	while(p!=NULL){
		if(beg == p->rank){
			head = p;
		}
		if(end == p->rank){
			tail = p;
		}
		p = p->next;
	}
	node *x = start;
	while(x!=NULL){
		x->sorted = x->no_of_books;
		x=x->next;
	}
	node *temp1 = NULL;
	node *temp2 = NULL;
	
	int t;
	head->sorted = head->no_of_books;

	temp1=head;

	while( temp1 !=tail){
	temp2=temp1->next;
	while(temp2->rank > head->rank ){
		if(temp2->prev->sorted >= temp2->sorted){
			t = temp2->prev->sorted;
			temp2->prev->sorted= temp2->sorted;
			temp2->sorted=t;
		}
		temp2= temp2->prev;	
	}	
	temp1 = temp1->next;
	
		
	}
	node *y = start;	
	while(y!=NULL){
		
		if(y->rank == find){
			cout << y->sorted << endl;
		}
		y=y->next;
	}


	

}







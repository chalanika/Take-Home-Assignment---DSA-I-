#include <iostream>
using namespace std;

typedef struct node{
	
	int no_of_books;
	int rank;
	int sorted;
	node *next;
	node *prev;

}node;

node *start = NULL;
node *ptr = NULL;
int T,N,n,Q;
node*head,node*tail =NULL;

int main(){
	

	
	cout << "Enter no of Test cases: ";
	cin >> T;
	
	for(int i=0; i<T; i++){
		cout << "Enter no of  shelves: ";
		cin >> N;
		
		cout << "Enter no of books : ";	
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
		int a,arr[4],i=0;
		for(int j=0; j<Q; j++){
			
			cin >> arr[i];
			if(arr[i]==0){
				for(int i=1; i<4; i++){
					cin >> arr[i];	
				}
					head = arr[i];
					tail = arr[i+1];
					sort(head,tail);	
			}else{
				for(int i=1; i<3; i++){
					cin >> arr[i];	
				}
					head = arr[i];
					tail = arr[i+1]	;
					sort(head,tail);
			}	
		}
		
		
		cout <<"---------------"<<endl;
		
	}
	
}

void sort(node *head, node*tail){
	
	node *i,*j;
	int temp;
	head->sorted = head->no_of_books;
	
	for(i=head; i->next=tail->next;  i=i->next){
		
		j=i>next;
		
		while(j->prev->sorted > j->no_of_books && j->prev != NULL){
			temp = i -> sorted;
			i->sorted= j->no_of_books;
			j->sorted=temp;
			j= = j->prev;
			
		}
	}
}







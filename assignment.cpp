#include <iostream>
using namespace std;

typedef struct node{
	
	int no_of_books;
	int rank;
	node *next;
	node *prev;

}node;

node *start = NULL;
node *ptr = NULL;

int main(){
	
	int T,N,n,Q;
	
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
		int a;
		for(int j=0; j<Q; j++){
			
			cin >> a;
			if(a==0){
				for(int i=0; i<3; i++){
					cin >> a;
					
				}
				
			}else{
				for(int i=0; i<2; i++){
					cin >> a;
					
				}	
			}
			
		}
		
		
		cout <<"---------------"<<endl;
		
	}
	
}

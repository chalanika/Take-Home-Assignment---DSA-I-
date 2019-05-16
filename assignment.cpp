#include <iostream>
using namespace std;

typedef struct node{
	
	int no_of_books;
	int rank;
	node *next;
	node *prev;

}node;

node *start;

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
			shelf->rank=i;
			cin >> n ;
			shelf->no_of_books=n;
			
		}
		cout << "Enter no of  queries : ";
		cin >> Q;
		
		cout << "Enter queries : ";
		int arr[Q];
		for(int i=0; i<Q; i++){
			cin >> arr[i] ;
		}
		
	cout <<"---------------"<<endl;
		
	}
	
}

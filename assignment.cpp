#include <iostream>
using namespace std;

struct node{
	
	int no_of_books;
	int rank;
	struct node *next;
	struct node *prev;

};


int main(){
	
	int T,N,n,Q;
	
	cout << "Enter no of Test cases: ";
	cin >> T;
	
	for(int i=0; i<T; i++){
		cout << "Enter no of  shelves: ";
		cin >> N;
		
		cout << "Enter no of books : ";
		for(int i=0; i<N; i++){
			cin >> n ;
		}
		cout << "Enter no of  queries : ";
		cin >> Q;
		
		cout << "Enter queries : ";
		int arr[];
		for(int i=0; i<Q; i++){
			cin >> arr[i] ;
		}
		
	
		
	}
	
}

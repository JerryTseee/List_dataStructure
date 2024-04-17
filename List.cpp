#include<iostream>
using namespace std;


/*
create(L): create an empty list L
search(L,x): return an index to the element x or return -1 if no x
insert(L,x,i): insert the item x in L at position (i+1)
delete(L,i): delete the item in L at position i
*/

struct list {
	int length;
	int entry[100];
};
list l;

//O(1)
void Create(list &l) {
	l.length = 0;
};

//O(n)
int Search(list& l, int x) {
	for (int i = 0; i <= l.length; i++) {
		if (l.entry[i] == x)
			return i;
	};
	return -1;
};

//O(n)
void Insert(list& l, int x, int i) {
	//move all elements from position i+1 to the right, then insert x in i+1
	l.length++;
	for (int j = l.length; j >= i+2; j--) {
		l.entry[j] = l.entry[j - 1];
	};
	l.entry[i + 1] = x;
}; 

//O(1)
void Insert2(list& l, int x) {
	l.length++;
	l.entry[l.length] = x;
};

//O(n)
void Delete(list& l, int x, int i) {
	for (int j = l.length; j >= i + 1; j--) {
		l.entry[j - 1] = l.entry[j];
	};
	l.length--;
};

void printList(list& l) {
	for (int i = 0; i <= l.length; i++) {
		cout << l.entry[i] << " ";
	};
	cout << endl;
};
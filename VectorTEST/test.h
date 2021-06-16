#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>

#define DATA int

using namespace std;

void print_vector_info(vector<DATA>* v) {
	cout << "Vector address :" << v->data() << endl;
	cout << "Vector size    :" << v->size() << endl;
	cout << "Vector capacity:" << v->capacity() << endl;
	cout << "Vector data    :";
	for ( auto i : *v ) cout << i << " ";
	cout << endl;
	cout << "========================" << endl;
}

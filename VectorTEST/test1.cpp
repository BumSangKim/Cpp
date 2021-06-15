#include <test.h>

int main() {
	//cout << "hello world" << endl;
	vector<int> v;
#if 0 // If you want to know the relationship between the reserve function and capacity, change it to 1 and test.
	v.reserve(2000);
#endif
	for ( int i = 0 ; i < 50 ; i++ ) {
		v.emplace_back(10);
		cout << "start addr     \t:" << v.data() << endl;
		cout << "vector cont num\t:" << v.size() << endl;
		cout << "vettor capacity\t:" << v.capacity() << endl << endl;
	}
	
	cout << "vec size ="  <<v.size() << endl;
	for (int i=0; i < v.size() ; i++) {
		cout << v[i] << endl;
	}
	
	v.resize(60, 5);
	cout << "vec size ="  <<v.size() << endl;
	for (int i = 0 ; i < v.size() ; i++ ) {
		cout << v[i] << endl;
	}
	return 0;
}

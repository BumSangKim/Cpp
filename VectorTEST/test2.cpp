#include <test.h>

int main() {
	vector<DATA> v1;
	vector<DATA> v2 = {1,2,3,4,5};
	vector<DATA> v3(10);
	vector<DATA> v4(10, 3);
	vector<DATA> v5(v4);
	vector<DATA> v6[10];
//	vector<DATA> v7[];
	vector<DATA> v8[] = {{10, 20, 30}, {11, 12, 13, 14}};
	vector<vector<DATA>> v9;
	
	print_vector_info(&v1);
	print_vector_info(&v2);
	print_vector_info(&v3);
	print_vector_info(&v4);
	print_vector_info(&v5);
	for (int i = 0 ; i  < 10 ; i++ ) {
		print_vector_info(&v6[i]);
	}
	for (int i = 0 ; i  < 2 ; i++ ) {
		print_vector_info(&v8[i]);
	}
//	print_vector_info(&v9[0]);
	return 0;

}

#include <iostream>

#include "lib/sort_alg.h"


int main(){

	int list[]{7, 5, 1, 8, 3};
	int size_list{sizeof(list)/sizeof(list[0])};

	print_vector(&list[0], &list[size_list]);
	selection_sort(list,size_list);
	print_vector(&list[0], &list[size_list]);

	return 0;
}



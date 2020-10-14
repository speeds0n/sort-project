#include <iostream>

#include "lib/sort_alg.h"


int main(){

	std::cout << "SELECTION SORT" << std::endl;
	int list[]{7, 5, 1, 8, 3};
	int size_list{sizeof(list)/sizeof(list[0])};

	std::cout << "UNSORTED LIST: ";
	print_vector(&list[0], &list[size_list]);
	std::cout << "EXPECTED LIST: V[ 1 3 5 7 8 ]" << std::endl;
	selection_sort(list,size_list);
	std::cout << "SORTED LIST: ";
	print_vector(&list[0], &list[size_list]);
	std::cout << std::endl;

	std::cout << "BUBBLE SORT" << std::endl;
	int list_2[]{8,7,6,5,4};
	int size_list2{sizeof(list_2)/sizeof(list_2[0])};

	print_vector(&list_2[0], &list_2[size_list]);
	bubble_sort(list_2, size_list2);
	print_vector(&list_2[0], &list_2[size_list]);
	std::cout << std::endl;

	std::cout << "BUBBLE SORT" << std::endl;
	int list_3[]{1,2,3,4,5};
	int size_list3{sizeof(list_3)/sizeof(list_3[0])};

	print_vector(&list_3[0], &list_3[size_list]);
	bubble_sort(list_3, size_list3);
	print_vector(&list_3[0], &list_3[size_list]);
	std::cout << std::endl;

	return 0;
}



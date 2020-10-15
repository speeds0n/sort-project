#include <iostream>

#include "lib/sort_alg.h"


int main(){

	std::cout << "SELECTION SORT" << std::endl;
	int list[]{7, 5, 1, 8, 3};
	int size_list{sizeof(list)/sizeof(list[0])};
	selection_sort(list,size_list);
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
	int list_3[]{7,7,3,5,5,2,4,5,6,7,8};
	int size_list3{sizeof(list_3)/sizeof(list_3[0])};
	print_vector(&list_3[0], &list_3[size_list3]);
	bubble_sort(list_3, size_list3);
	print_vector(&list_3[0], &list_3[size_list3]);
	std::cout << std::endl;

	std::cout << "INSERTION SORT" << std::endl;
	int list_4[]{6,5,3,1,8,7,2,4};
	int size_list4{sizeof(list_4)/sizeof(list_4[0])};
	print_vector(&list_4[0], &list_4[size_list4]);
	insertion_sort(list_4, size_list4);
	print_vector(&list_4[0], &list_4[size_list4]);
	std::cout << std::endl;

	return 0;
}



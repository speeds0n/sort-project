#include <iostream>

#include "../lib/sort_alg.h"

void print_vector(int *first, int *last){
	std::cout << "V [ ";
	while(first < last){
		std::cout << *first << " ";
		first++;
	}
	std::cout << "]" << std::endl;
}

int *selection_sort(int *list, const int size_list){

	int min_index{0};
	int aux{0};

	for(int i{0};i < size_list-1;i++){
		min_index = i;
		for(int j{i};j < size_list;j++){
			if(list[j] < list[min_index]){
				min_index = j;
			}
		}
		if(list[i] > list[min_index]){
			aux = list[i];
			list[i] = list[min_index];
			list[min_index] = aux;
		}
	}
	return list;
}

int *bubble_sort(int *list, const int size_list){

	int aux{0};

	for(int i{0};i < size_list-1;i++){
		for(int j{0};j < (size_list-1)-i;j++){
			if(list[j] > list[j+1]){
				aux = list[j];
				list[j] = list[j+1];
				list[j+1] = aux;
			}
		}
	}

	return list;
}

int *insertion_sort(int *list, const int size_list){

	int key{0}, j{0};
	for(int i{1};i < size_list;i++){
		key = list[i];
		j = i - 1;
		while(j >= 0 && list[j] > key){
			list[j+1] = list[j];
			j--;
		}
		list[j+1] = key;
	}

	return list;
}

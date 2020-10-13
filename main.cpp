#include <iostream>

void print_vector(int *first, int *last);

int *selection_sort(int *list, int size_list);

int main(){

	int list[]{7, 5, 1, 8, 3};
	int size_list{sizeof(list)/sizeof(list[0])};

	print_vector(&list[0], &list[size_list]);
	selection_sort(list,size_list);
	print_vector(&list[0], &list[size_list]);

	return 0;
}

void print_vector(int *first, int *last){
	std::cout << "V [ ";
	while(first < last){
		std::cout << *first << " ";
		first++;
	}
	std::cout << "]" << std::endl;
}

int *selection_sort(int *list, int size_list){

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

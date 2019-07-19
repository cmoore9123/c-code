#include <iostream>

void print_array(int *array, int n) {
	for (int i = 0; i < n; ++i)
		std::cout << array[i] << " " << std::flush;
	std::cout << std::endl;
}

void bubble_sort(int *array, int n) {
	bool swapped = true;
	int j = 0;
	int temp;

	while (swapped) {
		swapped = false;
		j++;
		for (int i = 0; i < n - j; ++i) {
			if (array[i] > array[i + 1]) {
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = true;
			}
		}
	}
}

int main() {
	int array[] = {94, 42, 50, 95, 333, 65, 54, 456, 1, 1234};
	int n = sizeof(array)/sizeof(array[0]);

	std::cout << "Before sort : " << std::endl;
	print_array(array, n);

	bubble_sort(array, n);

	std::cout << "After sort : " << std::endl;
	print_array(array, n);
	return (0);
}
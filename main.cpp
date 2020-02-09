#include <iostream>

#include <vector>

/* An example of a range based for loop */
void print_numbers() {

	std::vector<int> my_little_list {5,15,25,35,45,55,65,75,85};

	std::cout << "Printing a list of numbers inline...\n";
	for (auto x : {10,20,30,40,50,60,70,80,90,100})	{
		std::cout << x << '\n';
	}

	std::cout << "Printing a list of numbers that have already been defined using auto deduction...\n";
	for (auto x : my_little_list) {
		std::cout << x << '\n';
	}
}


int main() {
	
	std::cout << "This small programs demenstrats the use of modern C++ concepts\n";

	print_numbers();

	return 1;
}
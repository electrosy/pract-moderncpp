#include <iostream>

#include <vector>

void lambda_test(const std::vector<int> &vn, void(*func)(int)) {

	for (int v : vn) {
		func(v);
	}
}

/* An example of a range based for loop and Initilizations Lists */
void print_numbers() {

	std::vector<int> my_little_list {5,15,25,35,45,55,65,75,85};

	std::cout << "Printing a list of numbers inline...\n";
	for (auto x : {10,20,30,40,50,60,70,80,90,100})	{
		std::cout << x << '\n';
	}

	std::cout << "Printing a collection of numbers that have already been defined...\n";
	for (auto x : my_little_list) {
		std::cout << x << '\n';
	}
}


int main() {
	
	std::cout << "This small program demenstrats the use of modern C++ concepts\n";

	print_numbers();

	std::vector<int> vn = {1,2,3,4,5,6,7,8,9,10,11,12};
	std::cout << "Printing the values of a vector collection...\n";
	/* An example of a Lambda expressions */
	lambda_test(vn, [](int v) {std::cout << "Value: " << v << "\n";});

	return 1;
}
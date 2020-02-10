#include "Record.h"
#include "Rand_int.h" /* TODO put all the rand stuff in its class */

#include <iostream>
#include <iomanip>
#include <vector>
#include <random>
#include <chrono>


/* TODO */
// * enums for firstnames, last names

void lambda_test(const std::vector<int> &vn, void(*func)(int)) {
	for (int v : vn) {
		func(v);
	}
}

/* An example of a range based for loop and initilization lists */
void print_numbers() {	
	std::cout << "Printing a list of numbers inline...\n";
	for (auto x : {10,20,30,40,50,60,70,80,90,100})	{
		std::cout << x << ' ';
	}
	std::cout << "\n";

	std::vector<int> my_little_list {5,15,25,35,45,55,65,75,85};
	std::cout << "Printing a collection of numbers that have already been defined...\n";
	for (auto x : my_little_list) {
		std::cout << x << ' ';
	}
	std::cout << "\n";
}

/* TODO a function that creates a random set of records */


/* TODO a function that creates a random name using a list of first and last names */


/* Use the Rand_int object to return a random int. */
std::vector<int> get_rand_ints() {
	std::random_device rd;  //Will be used to obtain a seed for the random number engine
	std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	std::uniform_int_distribution<> dis(1, 6);
	
	std::vector<int> v;
	for(auto i=0;i<10;++i) {
			v.push_back(dis(gen));
	}

	return v;
}

 void print_time() {
	std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    std::time_t t_c = std::chrono::system_clock::to_time_t(now);
    std::cout << std::put_time(std::localtime(&t_c), "%F %T");
}

int main() {
	std::cout << "Version: 0.05\n";
	std::cout << "This small program demenstrats the use of modern C++ concepts\n";


	/* Create a Record object */
	ley::Record myRecord;
	/* Print the record using operator<< */
	std::cout << myRecord << "\n";

	std::cout<< "Printing 10 random numbers using the helper function...\n";
	std::vector<int> randoms = get_rand_ints();
	for(auto v : randoms) {
		std::cout << std::to_string(v) << " ";
	}
	std::cout << "\n";


	std::cout<< "Printing 10 random numbers using the Rand_int object...\n";
	ley::Rand_int myRandObject(1,6);

	//get randoms
	std::vector<int> randoms2;
	for(int i=0;i<10;++i) {
		randoms2.push_back(myRandObject());
	}
	//print randoms out

	for(auto rand : randoms2) {
		std::cout << std::to_string(rand) << " ";
	}
	std::cout << "\n";


	std::cout<< "The time is:";
	print_time();
	std::cout << "\n";

	print_numbers();

	std::vector<int> vn = {1,2,3,4,5,6,7,8,9,10,11,12};
	std::cout << "Printing the values of a vector collection...\n";
	/* An example of a Lambda expressions */
	lambda_test(vn, [](int v) {std::cout << v << " ";});
	std::cout << "\n";


	return 1;
}
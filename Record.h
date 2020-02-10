#ifndef RECORD_H
#define RECORD_H

#include <iostream>
#include <string>

class Record {

private:
	int num; //record number
	std::string name; //record name

	
public:
	void test_func();

	int getNum() const;
	std::string getName() const;


	Record();
	~Record();


	
};

/* Operators */
std::ostream& operator<<(std::ostream& os, const Record& rc);

#endif
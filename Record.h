#ifndef RECORD_H
#define RECORD_H

#include <iostream>
#include <string>

namespace ley{


class Record {

private:
	int num; //record number
	int employeeId;

	std::string firstName; //record name
	std::string lastName; 
	std::string gender;

public:
	void test_func();

	int getNum() const;
	std::string getName() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getGender() const;

	Record(std::string, int, std::string, std::string);
	~Record();
	
};

/* Operators */
std::ostream& operator<<(std::ostream& os, const Record& rc);

}

#endif
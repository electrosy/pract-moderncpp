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

	bool copied = 0; //if true then this object was copied with the copy constructor

	void copy_logic(const Record&);

public:
	int getNum() const;
	std::string getName() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getGender() const;
	bool getCopied() const;

	Record(std::string, int, std::string, std::string);
	~Record();
	
	Record(const Record& a);
	Record& operator=(const Record& a);

};

/* Operators */


std::ostream& operator<<(std::ostream& os, const Record& rc);

}

#endif
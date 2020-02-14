/* 

Author: Steven Philley
Purpose: An Employee Record with copy and move semantics.
Date: Feb/12/2020

*/

#ifndef RECORD_H
#define RECORD_H

#include <iostream>
#include <string>

namespace ley {


class Record {

private:
	int num; //record number
	int employeeId;

	std::string firstName; //record name
	std::string lastName; 
	std::string gender;

	bool copied = 0; //if true then this object was copied with a copy constructor
	bool moved = 0; //if true then this object was moved 'here'.

	/* Functions */
	void copy_logic(const Record&);
	void re_move(Record&&); //set the r-value to be some form of 'indeterminate';

public:
	/* Accessors */
	int getNum() const;
	std::string getName() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getGender() const;
	bool getCopied() const;
	bool getMoved() const;

	/* RAII */
	void init();
	Record();
	Record(std::string, int, std::string, std::string);
	~Record();
	
	/* Copy */
	Record(const Record& a);
	Record& operator=(const Record& a);

	/* Move */
	Record(Record&& a);
	Record& operator=(Record&& a);
};

/* Operators */
std::ostream& operator<<(std::ostream& os, const Record& rc);

}

#endif
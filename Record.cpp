#include "Record.h"

/* RAII */
ley::Record::Record(std::string gender, int num, std::string firstName, std::string lastName) {
	this->num = num;
	this->gender = (gender=="m" || gender=="f") ? gender : "n";
	this->firstName = firstName;
	this->lastName = lastName;
}

ley::Record::~Record() {

}

/* Accessors */
std::string ley::Record::getGender() const {
	return this->gender;
}

int ley::Record::getNum() const {
	return this->num;
}

std::string ley::Record::getName() const {
	return this->firstName + " " + this->lastName;
}

std::string ley::Record::getFirstName() const {
	return this->firstName;
}

std::string ley::Record::getLastName() const {
	return this->lastName;
}

/* Functions */
void ley::Record::test_func() {
	std::cout << "Inside test_func\n";
}

/* Operators */
std::ostream& ley::operator<<(std::ostream& os, const ley::Record& rc) {
	os << "Record Number: " << rc.getNum() << " Record Name: " << rc.getName() 
		<< " Gender:" << rc.getGender();
	return os;
}



#include "Record.h"

/* RAII */
ley::Record::Record() {
	this->num = -1;
	this->name = "null";

	std::cout << "Constructed Record Version 0.2...\n";
}

ley::Record::~Record() {

}

/* Accessors */
int ley::Record::getNum() const {
	return this->num;
}

std::string ley::Record::getName() const {
	return this->name;
}

/* Functions */
void ley::Record::test_func() {
	std::cout << "Inside test_func\n";
}

/* Operators */
std::ostream& ley::operator<<(std::ostream& os, const ley::Record& rc) {
	os << "Record Number: " << rc.getNum() << "Record Name: " << rc.getName();
	return os;
}



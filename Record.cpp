#include "Record.h"


/* RAII */
Record::Record() {
	this->num = -1;
	this->name = "null";

	std::cout << "Constructed Record Version 0.2...\n";
}

Record::~Record() {

}

/* Accessors */
int Record::getNum() const {
	return this->num;
}

std::string Record::getName() const {
	return this->name;
}

/* Functions */
void Record::test_func() {
	std::cout << "Inside test_func\n";
}

std::ostream& operator<<(std::ostream& os, const Record& rc) {
	os << "Record Number: " << rc.getNum() << "Record Name: " << rc.getName();
	return os;
}



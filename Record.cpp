/* 

Author: Steven Philley
Purpose: See header
Date: Feb/12/2020

*/

#include "Record.h"

/* RAII */
void ley::Record::init() {
	this->copied = 0;
}

ley::Record::Record() {
	this->num = -1;
	this->gender = "notset";
	this->firstName = "notset";
	this->lastName = "notset";

	this->init();
}

ley::Record::Record(std::string gender, int num, std::string firstName, std::string lastName) {
	this->num = num;
	this->gender = (gender=="m" || gender=="f") ? gender : "n";
	this->firstName = firstName;
	this->lastName = lastName;

	this->init();
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
bool ley::Record::getCopied() const {
	return this->copied;
}
bool ley::Record::getMoved() const {
	return this->moved;
}

/* Functions */

/* Copy */
void ley::Record::copy_logic(const Record& a) { //modifies self
	this->num =a.num;
	this->employeeId=a.employeeId;
	this->gender=a.gender;
	this->firstName=a.firstName;
	this->lastName=a.lastName;

	this->copied = 1;
}

ley::Record::Record(const Record& a) {
	this->copy_logic(a);
}

ley::Record& ley::Record::operator=(const Record& a) {
	this->copy_logic(a);

	return *this;
}

/* Move */
void ley::Record::re_move(Record&& a) {
	a.num = -1;
	a.employeeId = -1;
	a.gender = "indeterminate";
	a.firstName = "indeterminate";
	a.lastName = "indeterminate";	

	this->moved = 1;
}

ley::Record::Record(Record&& a) { // move constructor
	copy_logic(std::move(a));
	re_move(std::move(a));
}

ley::Record& ley::Record::operator=(Record&& a) { // move assignment
	copy_logic(std::move(a));
	re_move(std::move(a));

	return *this;
}

/* Operators */
std::ostream& ley::operator<<(std::ostream& os, const ley::Record& rc) {
	os << "Record Number: " << rc.getNum() << " Record Name: " << rc.getName() 
		<< " Gender:" << rc.getGender() << " Copied: " << rc.getCopied()
		<< " Moved: " << rc.getMoved()
		;
	return os;
}
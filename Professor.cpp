// Professor.cpp
// Michael Steiger
#include "Professor.h"
#include <string>
using namespace std;

//CONSTRUCTOR
Professor::Professor(string n, string a, string e, string tl, string t) {

	name = n;
	address = a;
	email = e;
	tLocation = tl;
	latestClass = t;
}

//SETTERS
void Professor::setName(string n) {
	name = n;
}

void Professor::setAddress(string a) {
	address = a;
}

void Professor::setEmail(string e) {
	email = e;
}

void Professor::setLocation(string l) {
	tLocation = l;
}

void Professor::setTime(string t) {
	latestClass = t;
}

//GETTERS
string Professor::getName() {
	return name;
}

string Professor::getAddress() {
	return address;
}

string Professor::getEmail() {
	return email;
}

string Professor::getLocation() {
	return tLocation;
}

string Professor::getTime() {
	return latestClass;
}
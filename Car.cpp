// car.cpp
// Michael Steiger
#include "Car.h"

//SETTERS
void Car::setMake(string m) {
	make = m;
}

void Car::setModel(string mo) {
	model = mo;
}

void Car::setYear(int y) {
	year = y;
}

void Car::setColor(string c) {
	color = c;
}

void Car::setPlate(string p) {
	licensePlateNum = p;
}


//GETTERS
string Car::getMake() {
	return make;
}

string Car::getModel() {
	return model;
}

int Car::getYear() {
	return year;
}

string Car::getColor() {
	return color;
}

string Car::getPlate() {
	return licensePlateNum;
}
#pragma once
// car.h
//Michael Steiger

#include <string>
using namespace std;

class Car {

private:
    string  make;
    string  model;
    int     year;
    string  color;
    string  licensePlateNum;

public:
    void setMake(string);
    void setModel(string);
    void setYear(int);
    void setColor(string);
    void setPlate(string);

    string getMake();
    string getModel();
    int getYear();
    string getColor();
    string getPlate();

};
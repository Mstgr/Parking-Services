#pragma once
// professor.h
// Michael Steiger
#include <string>
using namespace std;

class Professor {

private:
    string name;
    string address;
    string email;
    string tLocation;
    string latestClass;

public:

    Professor() = default;
    Professor(string, string, string, string, string);

    void setName(string);
    void setAddress(string);
    void setEmail(string);
    void setLocation(string);
    void setTime(string);

    string getName();
    string getAddress();
    string getEmail();
    string getLocation();
    string getTime();

};
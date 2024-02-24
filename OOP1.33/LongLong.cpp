
#include "LongLong.h"
#include <iostream>
#include <string> 
#include <sstream>
using namespace std;
void LongLong::setUpper(long upper) {
	this->upper = upper; 
}
void LongLong::setLower(long lower) {
	this->lower = lower; 
}
long LongLong::getUpper() const {
	return this->upper;
}
long LongLong::getLower() const { 
	return this->lower;
}

void LongLong::Init(long upper, long lower) {
    setUpper(upper);
    setLower(lower);
}
void LongLong::Read() {
    long upperPart, lowerPart;
    cout << "Enter upper part: ";
    cin >> upperPart;
    cout << "Enter lower part: ";
    cin >> lowerPart;
    Init(upperPart, lowerPart);
}
void LongLong::Display() const {
    cout << "Upper part: " << upper << ", Lower part: " << lower << endl;
}

string LongLong::toString() const {
    stringstream sout;
    sout << upper << lower;
    return sout.str();
}
long LongLong::toLong() const {
    return stol(toString());
}

LongLong add(LongLong l, LongLong r) {
    LongLong t;
    t.setUpper(l.getUpper() + r.getUpper());
    t.setLower(l.getLower() + r.getLower());
    return t;
} 
LongLong multiply(LongLong l, LongLong r) {
    LongLong a;
    a.setUpper(l.getUpper() * r.getUpper());
    a.setLower(l.getLower() * r.getLower());
    return a;
}


bool lessThan(LongLong l, LongLong r) {
    long lValue = stol(l.toString());
    long rValue = stol(r.toString());
    return lValue < rValue;
}

bool notLessThan(LongLong l, LongLong r) {
    long lValue = stol(l.toString());
    long rValue = stol(r.toString());
    return lValue >= rValue;
}

bool greaterThan(LongLong l, LongLong r) {
    long lValue = stol(l.toString());
    long rValue = stol(r.toString());
    return lValue > rValue;
}

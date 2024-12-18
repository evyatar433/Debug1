#include "Point.h"
#include <iostream>





// לא הודפס מה שציפיתי כי רשום P1 =  P2



Point::Point()
{
	_coord = new int[2];
	_coord[0] = _coord[1] = 0;
}

Point::Point(int x, int y)
{
	_coord = new int[2];
	_coord[0] = x;
	_coord[1] = y;
}

Point::Point(const Point& other)
{
	delete[] _coord;
	*this  = other;
}
 
//auto windows shot thhe current
Point::~Point()
{
	delete _coord;
}

Point& Point::operator=(const Point& other)
{
	delete _coord;
	_coord = new int[2];
	this->_coord[0] = other._coord[0];
	this->_coord[1] = other._coord[1];
	return *this;
}

int Point::getX() const 
{ 
	return _coord[0]; 
}

int Point::getY() const
{ 
	return _coord[1]; 
}

// התוכנית לא עצרה בנקודת שבירה כי היא לא נכנסת לפונקציה
std::ostream& operator<<(std::ostream& os, const Point& p)
{
	os << "(" << p._coord[0] << "," << p._coord[1] << ")";
	return os;
}

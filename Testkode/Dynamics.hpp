#pragma once
#include "Cell.hpp"


class Dynamics {

public:

	virtual ~Dynamics() = default;

	static void streamAndCollide(Cell& cell){}

	

};

//class DynamicsImp : Dynamics
//{
//public:
//	static void streamAndCollide(Cell& cell) {}
//
//
//};
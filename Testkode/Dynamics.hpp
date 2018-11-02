#pragma once
#include "Cell.hpp"


class Dynamics {

public:

	virtual ~Dynamics() = default;

	static void streamAndCollide(Cell& cell){}
};

class DynamicsImplementation : Dynamics
{
public:
	static void streamAndCollide(Cell& cell) {}
};
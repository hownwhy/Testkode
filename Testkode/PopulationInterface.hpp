#pragma once
#include "Cell.hpp"

class PopulationInterface
{
public:
	virtual ~PopulationInterface() = default;

	virtual void streamAndCollide(Cell& cell) = 0;
};
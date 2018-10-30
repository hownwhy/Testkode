#pragma once
#include "CellInterface.hpp"

class PopulationInterface
{
public:
	virtual ~PopulationInterface() = default;

	virtual void streamAndCollide(CellInterface& cell);
};
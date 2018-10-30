#pragma once
#ifndef SPECIES_HPP
#define SPECIES_HPP

#include "Population.hpp"
//#include <vector>
#include <array>
#include "CellInterface.hpp"
//#include <memory>

class Species
{
private:

	std::array<Population, 2> population;

public:
	
	//virtual ~SpeciesInterface() = default;
	
	virtual void StreamAndCollide(CellInterface cell);
};

#endif


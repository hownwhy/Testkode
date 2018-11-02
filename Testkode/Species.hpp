#pragma once
//#ifndef SPECIES_HPP
//#define SPECIES_HPP

#include "Population.hpp"
//#include <vector>
#include <array>
#include "Cell.hpp"
#include "Dynamics.hpp"
#include "Boundary.hpp"
//#include <memory>

template <class DYNAMICS, class BOUNDARY>
class Species
{
private:

	std::array<Population, 2> populations;
	field_t rho;
	field_t velocity;


public:
	
	//virtual ~Species() = default;

	
	
	void StreamAndCollide(Cell& cell) {
		DYNAMICS::streamAndCollide(cell);
	}

	Population getPopulations() {
		return populations;
	}


#if 0
	//***********************************************************************************************
	//Set functions
	void setRest(bool populationRow, field_t rest_) {
		populations[populationRow].setRest = rest_;
	}

	void setEast(bool populationRow, field_t east_) {
		populations[populationRow].setEast = east_;
	}

	void setNorthEast(bool populationRow, field_t northEast_) {
		populations[populationRow].setNorthEast = northEast_;
	}

	void setNorth(bool populationRow, field_t north_) {
		populations[populationRow].setNorth = north_;
	}

	void setNorthWest(bool populationRow, field_t northWest_) {
		populations[populationRow].setNorthWest = northWest_;
	}

	void setWest(bool populationRow, field_t west_) {
		populations[populationRow].setWest = west_;
	}

	void setSouthWest(bool populationRow, field_t southWest_) {
		populations[populationRow].setSouthWest = southWest_;
	}

	void setSouth(bool populationRow, field_t south_) {
		populations[populationRow].setSouth = south_;
	}

	void setSouthEast(bool populationRow, field_t southEast_) {
		populations[populationRow].setSouthEast = southEast_;
	}


	//***********************************************************************************************
	//Get functions
	field_t getRest(bool populationRow) {
		return populations[populationRow].getRest;
	}

	field_t getEast(bool populationRow) {
		return populations[populationRow].getEast;
	}

	field_t getNorthEast(bool populationRow) {
		return populations[populationRow].getNorthEast;
	}

	field_t getNorth(bool populationRow) {
		return populations[populationRow].getNorth;
	}

	field_t getNorthWest(bool populationRow) {
		return populations[populationRow].getNorthWest;
	}

	field_t getWest(bool populationRow) {
		return populations[populationRow].getWest;
	}

	field_t getSouthWest(bool populationRow) {
		return populations[populationRow].getSouthWest;
	}

	field_t getSouth(bool populationRow) {
		return populations[populationRow].getSouth;
	}

	field_t getSouthEast(bool populationRow) {
		return populations[populationRow].getSouthEast;
	}
#endif

};

//#endif


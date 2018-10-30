#pragma once
#ifndef POPULATION_HPP
#define POPULATION_HPP

#include "Globals.hpp"
//#include "PopulationInterface.hpp"

//#include <map>

class Population 
{
private:
	int abc;
	field_t rest;
	field_t east;
	field_t northEast;
	field_t north;
	field_t northWest;
	field_t west;
	field_t southWest;
	field_t south;
	field_t southEast;


public:

	virtual ~Population() = default;

//***********************************************************************************************
//Set functions
	void setRest(field_t rest_);

	void setEast(field_t east_);

	void setNorthEast(field_t northEast_);

	void setNorth(field_t north_);

	void setNorthWest(field_t northWest_);

	void setWest(field_t west_);

	void setSouthWest(field_t southWest_);

	void setSouth(field_t south_);

	void setSouthEast(field_t southEast_);


	//***********************************************************************************************
	//Get functions
	field_t getRest();

	field_t getEast();

	field_t getNorthEast();

	field_t getNorth();

	field_t getNorthWest();

	field_t getWest();

	field_t getSouthWest();

	field_t getSouth();

	field_t getSouthEast(field_t southEast_);

};

#endif

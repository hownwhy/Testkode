#pragma once
#ifndef POPULATION_HPP
#define POPULATION_HPP

#include "Globals.hpp"
#include <array>
//#include "PopulationInterface.hpp"

//#include <map>

class Population
{

private:
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

	

	//***********************************************************************************************
	//Set functions
	void setRest(field_t rest_) {
		rest = rest_;
	}

	void setEast(field_t east_) {
		east = east_;
	}

	void setNorthEast(field_t northEast_) {
		northEast = northEast_;
	}

	void setNorth(field_t north_) {
		north = north_;
	}

	void setNorthWest(field_t northWest_) {
		northWest = northWest_;
	}

	void setWest(field_t west_) {
		west = west_;
	}

	void setSouthWest(field_t southWest_) {
		southWest = southWest_;
	}

	void setSouth(field_t south_) {
		south = south_;
	}

	void setSouthEast(field_t southEast_) {
		southEast = southEast_;
	}


	//***********************************************************************************************
	//Get functions
	field_t getRest() {
		return rest;
	}

	field_t getEast() {
		return east;
	}

	field_t getNorthEast() {
		return northEast;
	}

	field_t getNorth() {
		return north;
	}

	field_t getNorthWest() {
		return northWest;
	}

	field_t getWest() {
		return west;
	}

	field_t getSouthWest() {
		return southWest;
	}

	field_t getSouth() {
		return south;
	}

	field_t getSouthEast(field_t southEast_) {
		return southEast;
	}

};

#endif


////
////template <class SPECIES>
////class Population : PopulationInterface
////{
////
////};
//
//
//
//
//
//#if 0
//class Species
//{
//};
//
//
//class Population
//{
//private:   // Data Members
//
//  std::array<double, 9> species;
//
//public:    // Functions
//
//  virtual ~Population() = default;
//
//  double getSpeciesHeaddingWest()
//  {
//    return species[3];
//  }
//
//};
//
//class WaterPopulation
//{
//public:
//  double getSpeciesHeaddingWest()
//  {
//    return 0;
//  }
//};
//
//class OilPopulation// : public Population
//{
//public:
//  double getSpeciesHeaddingWest()
//  {
//    return 1;
//  }
//};
//#endif

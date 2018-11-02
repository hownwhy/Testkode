#pragma once
#include "Neighbours.hpp"
#include "Species.hpp"
#include "Dynamics.hpp"
#include "Boundary.hpp"
//#include <memory>
//#include <vector>
#include <assert.h>
#define SPECIES_COUNT 2


class Cell
{
private:
	
	
  Neighbours neighbours;
  std::array<Species<Dynamics, Boundary>, SPECIES_COUNT> species; //Specify a Dynamics class and Boundary class for each species

  //Species<Dynamics, Boundary> species; //Specify a Dynamics class and Boundary class for species

public:    // Functions

  Cell()
  {

  }

  //********************************************************************************************
 // Set functions


   //********************************************************************************************
  // Get functions

  Neighbours& getNeighbours()  {
    return neighbours;
  }
  
  Species<Dynamics, Boundary>& getSpecies(bool runIndex) {
	  return species[runIndex];
  }

  //----------------------------------------------------------------------------

  
  void streamFromNeighbours(bool runIndex) {
	  Population toPopulation = species[runIndex].getPopulation();
	  Population fromPopulation;
	  
	  if (neighbours.getEast()->isBoundaryEast() != true) {
		  fromPopulation = neighbours.getEast()->getSpecies(!runIndex).getPopulation();
		  toPopulation.setEast(fromPopulation.getEast());
	  }
	  else

	  fromPopulation = neighbours.getNorthEast()->getSpecies(!runIndex).getPopulation();
	  toPopulation.setNorthEast(fromPopulation.getNorthEast());
	  
	  fromPopulation = neighbours.getNorth()->getSpecies(!runIndex).getPopulation();
	  toPopulation.setNorth(fromPopulation.getNorth());

	  fromPopulation = neighbours.getNorthWest()->getSpecies(!runIndex).getPopulation();
	  toPopulation.setNorthWest(fromPopulation.getNorthWest());

	  fromPopulation = neighbours.getWest()->getSpecies(!runIndex).getPopulation();
	  toPopulation.setWest(fromPopulation.getWest());

	  fromPopulation = neighbours.getSouthWest()->getSpecies(!runIndex).getPopulation();
	  toPopulation.setSouthWest(fromPopulation.getSouthWest());

	  fromPopulation = neighbours.getSouth()->getSpecies(!runIndex).getPopulation();
	  toPopulation.setSouth(fromPopulation.getSouth());

	  fromPopulation = neighbours.getSouthEast()->getSpecies(!runIndex).getPopulation();
	  toPopulation.setSouthEast(fromPopulation.getSouthEast());
	
  }
  
  bool isBoundaryEast() const {
	  return neighbours.getEast() != nullptr;
  }
  bool isBoundaryNorthEast() const {
	  return neighbours.getNorthEast() != nullptr;
  }
  bool isBoundaryNorth() const {
	  return neighbours.getNorth != nullptr;
  }
  bool isBoundaryNorthWest() const {
	  return neighbours.getNorthWest != nullptr;
  }
  bool isBoundaryWest() const {
	  return neighbours.getWest != nullptr;
  }
  bool isBoundarySouthWest() const {
	  return neighbours.getSouthWest != nullptr;
  }
  bool isBoundarySouth() const {
	  return neighbours.getSouth != nullptr;
  }
  bool isBoundarySouthEast() const {
	  return neighbours.getSouthEast != nullptr;
  }
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  // POPULATION &currentPopulations = populations[populationIndex];
    //POPULATION &resultPopulations = populations[!populationIndex];
    // Go through neighbours and fill resultPopulations;

  //  currentPopulations.getSpeciesHeaddingWest();

	//  species[0].getPopulations();



  

#if 0
  // Returns pointer that can't be nullptr 
  // Const prevents code from changing the object
  const Population &getDensity() const
  {
    return *population; // De-refer pointer to return reference
  }

  // Returning pointer means source object can be null.
  const Population *getDensityPointer() const
  {
    return population.get(); // returns raw pointer from smart pointer
  }

  // Non const -> can change the object
  void setDensity(double density)
  {
    population->density = density;
  }
#endif

//// An early experiment constructor for class Cell
//// Kept here in case needed somewhere
//public:    // Functions
//
//	Cell()
//	{
//#if 0
//		WaterPopulation* waterPopulation{ dynamic_cast<WaterPopulation*>(populationResult.get()) };
//		if (waterPopulation != nullptr)
//		{
//
//		}
//
//		OilPopulation* oilPopulation{ dynamic_cast<OilPopulation*>(populationResult.get()) };
//		if (oilPopulation != nullptr)
//		{
//
//		}
//#endif
//	}
};
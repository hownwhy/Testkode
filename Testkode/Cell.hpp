#pragma once
#include "Cell.hpp"
#include "Neighbours.hpp"
#include <memory>
#include <assert.h>
#include "Species.hpp"
#include "Dynamics.hpp"
#include "Boundary.hpp"


//template <class POPULATION>
class Cell
{
private:
  Neighbours neigbours;
  std::array<Species<Dynamics, Boundary>, 2> species; //Specify a Dynamics class for each species
  //  FluidProperties;

public:    // Functions

  Cell()
  {
#if 0
    WaterPopulation* waterPopulation{ dynamic_cast<WaterPopulation*>(populationResult.get()) };
    if (waterPopulation != nullptr)
    {

    }

    OilPopulation* oilPopulation{ dynamic_cast<OilPopulation*>(populationResult.get()) };
    if (oilPopulation != nullptr)
    {

    }
#endif
  }

  Neighbours &getNeighbours()
  {
    return neigbours;
  }

  //----------------------------------------------------------------------------

  void calculate(bool populationIndex)
  {
   // POPULATION &currentPopulations = populations[populationIndex];
    //POPULATION &resultPopulations = populations[!populationIndex];
    // Go through neighbours and fill resultPopulations;

  //  currentPopulations.getSpeciesHeaddingWest();

	//  species[0].getPopulations();



  }

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
};
#pragma once

#include <map>

class Species
{
};


class Population
{
private:   // Data Members

  std::array<double, 9> species;

public:    // Functions

  virtual ~Population() = default;

  double getSpeciesHeaddingWest()
  {
    return species[3];
  }

};

class WaterPopulation
{
public:
  double getSpeciesHeaddingWest()
  {
    return 0;
  }
};

class OilPopulation// : public Population
{
public:
  double getSpeciesHeaddingWest()
  {
    return 1;
  }
};
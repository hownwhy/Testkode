#pragma once
#include "Neighbours.hpp"
#include "Population.hpp"

class CellInterface
{
public:
  virtual ~CellInterface() = default;

  virtual Neighbours &getNeighbours() = 0;

  virtual void calculate(bool populationIndex) = 0;
};

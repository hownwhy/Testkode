#pragma once
#include <vector>
#include <array>
#include <memory>


#if 0

class CellType
{

};

class Gitter
{
  std::vector<std::shared_ptr<Cell>> cells;
};


public:    // Constants, enumerations and static const variables

  enum class Direction
  {
    northWest = 0,
    north,
    northEast,
    west,
    center,
    east,
    southWest,
    south,
    southEast
  };




class Boundary : public CellType
{
};

class Fluid : public CellType
{};






enum class Type
{
  boudary,
  fluid
};
Type cellType;
#endif

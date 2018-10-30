#pragma once
#include <vector>
#include <memory>

class CellInterface;

class Neighbours
{
  std::shared_ptr<CellInterface> northWest;
  std::shared_ptr<CellInterface> north;
  std::shared_ptr<CellInterface> northEast;
  std::shared_ptr<CellInterface> east;
  std::shared_ptr<CellInterface> west;
  std::shared_ptr<CellInterface> southWest;
  std::shared_ptr<CellInterface> south;
  std::shared_ptr<CellInterface> southEast;

public:

  bool isBoundary() const
  {
    return north != nullptr && northEast != nullptr && east != nullptr &&
           southEast != nullptr && south != nullptr && southWest != nullptr &&
           west != nullptr && northWest != nullptr;
  }

  void setNorthWest(std::shared_ptr<CellInterface> northWest_)
  {
    northWest = northWest_;
  }

  void setNorth(std::shared_ptr<CellInterface> north_)
  {
    north = north_;
  }

  void setNorthEast(std::shared_ptr<CellInterface> northEast_)
  {
    northEast = northEast_;
  }
  void setWest(std::shared_ptr<CellInterface> west_)
  {
    west = west_;
  }
  void setEast(std::shared_ptr<CellInterface> east_)
  {
    east = east_;
  }
  void setSouthWest(std::shared_ptr<CellInterface> southWest_)
  {
    southWest = southWest_;
  }
  void setSouth(std::shared_ptr<CellInterface> south_)
  {
    south = south_;
  }
  void setSouthEast(std::shared_ptr<CellInterface> southEast_)
  {
    southEast = southEast_;
  }

  std::shared_ptr<CellInterface> getNorth()
  {
    return north;
  }
}; 

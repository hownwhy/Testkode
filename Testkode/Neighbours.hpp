#pragma once
#include <vector>
#include <memory>

class Cell;

class Neighbours
{
  std::shared_ptr<Cell> northWest;
  std::shared_ptr<Cell> north;
  std::shared_ptr<Cell> northEast;
  std::shared_ptr<Cell> east;
  std::shared_ptr<Cell> west;
  std::shared_ptr<Cell> southWest;
  std::shared_ptr<Cell> south;
  std::shared_ptr<Cell> southEast;

public:

  bool isBoundary() const
  {
    return north != nullptr && northEast != nullptr && east != nullptr &&
           southEast != nullptr && south != nullptr && southWest != nullptr &&
           west != nullptr && northWest != nullptr;
  }

  void setNorthWest(std::shared_ptr<Cell> northWest_)
  {
    northWest = northWest_;
  }

  void setNorth(std::shared_ptr<Cell> north_)
  {
    north = north_;
  }

  void setNorthEast(std::shared_ptr<Cell> northEast_)
  {
    northEast = northEast_;
  }
  void setWest(std::shared_ptr<Cell> west_)
  {
    west = west_;
  }
  void setEast(std::shared_ptr<Cell> east_)
  {
    east = east_;
  }
  void setSouthWest(std::shared_ptr<Cell> southWest_)
  {
    southWest = southWest_;
  }
  void setSouth(std::shared_ptr<Cell> south_)
  {
    south = south_;
  }
  void setSouthEast(std::shared_ptr<Cell> southEast_)
  {
    southEast = southEast_;
  }

  std::shared_ptr<Cell> getNorth()
  {
    return north;
  }
}; 

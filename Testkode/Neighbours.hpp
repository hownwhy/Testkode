#pragma once
#include <vector>
#include <memory>

// To make aware of Cell
class Cell;

class Neighbours
{
private:
  std::shared_ptr<Cell> east;
  std::shared_ptr<Cell> northEast;
  std::shared_ptr<Cell> north;
  std::shared_ptr<Cell> northWest;  
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

  bool isBoundaryEast() const {
	  return east != nullptr;
  }
  bool isBoundaryNorthEast() const {
	  return northEast != nullptr;
  }
  bool isBoundaryNorth() const {
	  return north != nullptr;
  }
  bool isBoundaryNorthWest() const {
	  return northWest != nullptr;
  }
  bool isBoundaryWest() const {
	  return west != nullptr;
  }
  bool isBoundarySouthWest() const {
	  return southWest != nullptr;
  }
  bool isBoundarySouth() const {
	  return south != nullptr;
  }
  bool isBoundarySouthEast() const {
	  return southEast != nullptr;
  }


  //********************************************************************************************
  // Set functions
  void setEast(std::shared_ptr<Cell> east_) {
	  east = east_;
  }
  void setNorthEast(std::shared_ptr<Cell> northEast_) {
	  northEast = northEast_;
  }  
  void setNorth(std::shared_ptr<Cell> north_) {
	  north = north_;
  }
  void setNorthWest(std::shared_ptr<Cell> northWest_) {
	  northWest = northWest_;
  }
  void setWest(std::shared_ptr<Cell> west_) {
    west = west_;
  }
  void setSouthWest(std::shared_ptr<Cell> southWest_) {
    southWest = southWest_;
  }
  void setSouth(std::shared_ptr<Cell> south_) {
    south = south_;
  }
  void setSouthEast(std::shared_ptr<Cell> southEast_) {
    southEast = southEast_;
  }

  
 //********************************************************************************************
 // Set functions

  std::shared_ptr<Cell> getEast() const {
	  return east;
  }
  std::shared_ptr<Cell> getNorthEast() const {
	  return northEast;
  }
  std::shared_ptr<Cell> getNorth() const {
    return north;
  }
  std::shared_ptr<Cell> getNorthWest() const {
	  return northWest;
  }
  std::shared_ptr<Cell> getWest() const {
	  return west;
  }
  std::shared_ptr<Cell> getSouthWest() const {
	  return southWest;
  }
  std::shared_ptr<Cell> getSouth() const {
	  return south;
  }
  std::shared_ptr<Cell> getSouthEast() const {
	  return southEast;
  }

}; 

#pragma once

class Coordinate
{
  int x, y;

public:

  Coordinate() : x{ 0 }, y{ 0 }
  {}

  Coordinate(int x_, int y_) : x{ x_ }, y{ y_ }
  {}

  void set(int x_, int y_)
  {
    x = x_;
    y = y_;
  }
};
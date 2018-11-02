#include "Coordinate.hpp"
#include "Cell.hpp"
#include <iostream>

const int xDim = 5;
const int yDim = 5;

#if 1
template <int X_DIM, int Y_DIM>
void initializeNeighbours(std::array<std::array<std::pair<Coordinate, std::shared_ptr<Cell>>, Y_DIM>, X_DIM> &grid)
{
  for (int y = 0; y < Y_DIM; y++)
  {
    for (int x = 0; x < X_DIM; x++)
    {
      if (y > 0)
      {
        if (x > 0)
          grid[y][x].second->getNeighbours().setNorthWest(grid[y - 1][x - 1].second);
        grid[y][x].second->getNeighbours().setNorth(grid[y - 1][x].second);
        if (x < X_DIM - 1)
          grid[y][x].second->getNeighbours().setNorthEast(grid[y - 1][x + 1].second);
      }

      if (x > 0)
        grid[y][x].second->getNeighbours().setWest(grid[y][x - 1].second);
      if (x < X_DIM - 1)
        grid[y][x].second->getNeighbours().setEast(grid[y][x + 1].second);

      if (y < Y_DIM - 1)
      {
        if (x > 0)
          grid[y][x].second->getNeighbours().setSouthWest(grid[y + 1][x - 1].second);
        grid[y][x].second->getNeighbours().setSouth(grid[y + 1][x].second);
        if (x < X_DIM - 1)
          grid[y][x].second->getNeighbours().setSouthEast(grid[y + 1][x + 1].second);
      }
    }
  }
}
#endif




int main()
{
#if 1
	std::array<std::array<std::pair<Coordinate, std::shared_ptr<Cell>>, yDim>, xDim> grid;


  for (int y = 0; y < yDim; y++)
  {
    for (int x = 0; x < xDim; x++)
    {
      grid[y][x].first.set(y, x);
      grid[y][x].second = std::make_shared<Cell>();
//       grid[y][x].second = std::make_shared<Cell<OilPopulation>>();
//       grid[y][x].second = std::make_shared<Cell<WaterPopulation>>();
    }
  }

  initializeNeighbours(grid);

  for (int y = 0; y < yDim; y++)
  {
	  for (int x = 0; x < xDim; x++)
	  {
		  std::cout << "(" << grid[y][x].first.getX() << "," << grid[y][x].first.getX() << ")";
	  }
	  std::cout << "/n";
  }





//  initializePopulations();

  /*for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      grid[i][j].second->calculate(true);
    }
  }

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      grid[i][j].second->calculate(1);
    }
  }*/

#endif



  std::cin.get();

  int k = 5;




































#if 0
  Cell cell{ std::make_unique<WaterPopulation>() };
  Cell oilCell{ std::make_unique<OilPopulation>() };

  const Population &cellPopulation = cell.getDensity(); // Points to source value
  Population cellPopulation2 = cell.getDensity(); // Makes a copy

  const Population *populationPtr = cell.getDensityPointer(); // Pointer can always be null
  if (populationPtr != nullptr)

    cell.setDensity(4);
#endif
}

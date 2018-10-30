#include "Template.hpp"
#include "Coordinate.hpp"
#include "Cell.hpp"
#include <iostream>

void initializeNeighbours(std::array<std::array<std::pair<Coordinate, std::shared_ptr<CellInterface>>, 10>, 10> &grid)
{
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (i > 0)
      {
        if (j > 0)
          grid[i][j].second->getNeighbours().setNorthWest(grid[i - 1][j - 1].second);
        grid[i][j].second->getNeighbours().setNorth(grid[i - 1][j].second);
        if (j < 9)
          grid[i][j].second->getNeighbours().setNorthEast(grid[i - 1][j + 1].second);
      }

      if (j > 0)
        grid[i][j].second->getNeighbours().setWest(grid[i][j - 1].second);
      if (j < 9)
        grid[i][j].second->getNeighbours().setEast(grid[i][j + 1].second);

      if (i < 9)
      {
        if (j > 0)
          grid[i][j].second->getNeighbours().setSouthWest(grid[i + 1][j - 1].second);
        grid[i][j].second->getNeighbours().setSouth(grid[i + 1][j].second);
        if (j < 9)
          grid[i][j].second->getNeighbours().setSouthEast(grid[i + 1][j + 1].second);
      }
    }
  }
}

int main()
{
  std::array<std::array<std::pair<Coordinate, std::shared_ptr<CellInterface>>, 10>, 10> grid;


  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      grid[i][j].first.set(i, j);
      grid[i][j].second = std::make_shared<Cell<Population>>();
//       grid[i][j].second = std::make_shared<Cell<OilPopulation>>();
//       grid[i][j].second = std::make_shared<Cell<WaterPopulation>>();
    }
  }

  initializeNeighbours(grid);

//  initializePopulations();

  for (int i = 0; i < 10; i++)
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
  }
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

#pragma once
#include "Cell.hpp"


class DynamicsInterface {

	virtual ~DynamicsInterface() = default;

	virtual void collide(CellInterface& cell){}
};
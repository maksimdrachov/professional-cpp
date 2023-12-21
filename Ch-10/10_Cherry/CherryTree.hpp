#pragma once

#include "Cherry.hpp"

class CherryTree
{
public:
	virtual Cherry* pick()
	{
		return new Cherry{};
	}
};

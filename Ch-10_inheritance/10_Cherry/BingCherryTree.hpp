#pragma once

#include "CherryTree.hpp"
#include "BingCherry.hpp"
#include <memory>

class BingCherryTree : public CherryTree
{
public:
	BingCherry* pick() override
	{
		auto theCherry{ std::make_unique<BingCherry>() };
		theCherry->polish();
		return theCherry.release();
	}
};

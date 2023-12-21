#pragma once

#include "MilesEstimator.hpp"

class EfficientCarMilesEstimator : public MilesEstimator
{
private:
	int getMilesPerGallon() const override
	{
		return 35;
	}
};

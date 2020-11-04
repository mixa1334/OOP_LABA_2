#pragma once
#ifndef BED_H
#define BED_H
#include "furniture.h"

namespace furniture
{
	class Bed :virtual protected Furniture
	{
	public:
		Bed(const double& price, const string& material, const string& name,
			const string& manufacturer, const double& length, const double& widht, const double& height,
			const int& numberOfLegs, const int& numberOfSleepingPlaces);

		~Bed()override = default;

		Bed& setNumberOfLegs(const int& numberOfLegs);

		Bed& setNumberOfSleepingPlaces(const int& numberOfSleepingPlaces);

		int getNumberOfLegs() const;

		int getNumberOfSleepingPlaces() const;

		double usefulSpace() const override;

		void info() const override;

	protected:
		void specificInfo() const override;

	private:
		int numberOfLegs;
		int numberOfSleepingPlaces;
	};
}

#endif // !BED_H


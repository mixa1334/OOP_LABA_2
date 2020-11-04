#pragma once
#ifndef CLOSET_H
#define CLOSET_H
#include "cupboard.h"

namespace furniture
{
	class Closet : virtual public Cupboard
	{
	public:
		Closet(const double& price, const string& material, const string& name,
			const string& manufacturer, const double& length, const double& widht, const double& height,
			const int& numberOfShelves, const double& lengthOfShelve,
			const double& capacity, const int& numberOfDoors);

		~Closet() override = default;

		Closet& setCapacity(const double& capacity);

		Closet& setNumberOfDoors(const int& numberOfDoors);

		double getCapacity() const;

		int getNumberOFDoors() const;

		double usefulSpace() const override;

		void info() const override;

	protected:
		void specificInfo() const override;
	
	private:
		double capacity;
		int numberOfDoors;
	};
}

#endif // !CLOSET_H


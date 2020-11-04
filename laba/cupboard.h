#pragma once
#ifndef CUPBOARD_H
#define CUPBOARD_H
#include "furniture.h"

namespace furniture
{
	class Cupboard :virtual public Furniture
	{
	public:
		Cupboard(const double& price, const string& material, const string& name,
			const string& manufacturer, const double& length, const double& widht,
			const double& height, const int& numberOfShelves, const double& lengthOfShelves);

		~Cupboard() override = default;

		Cupboard& setNumberOfShelves(const int& numberOfShelves);

		Cupboard& setLengthOfShelve(const double& lengthOfShelve);

		int getNumberOfShelves() const;

		double getLengthOfShelve() const;

		double usefulSpace() const override;

		void info() const override;

	protected:
		void specificInfo() const override;

	private:
		int numberOfShelves;
		double lengthOfShelve;
	};
}

#endif //CUPBOARD_H

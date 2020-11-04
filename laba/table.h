#pragma once
#ifndef TABLE_H
#define TABLE_H
#include "furniture.h"

namespace furniture
{
	class Table :virtual public Furniture
	{
	public:
		Table(const double& price, const string& material, const string& name,
			const string& manufacturer, const double& length, const double& widht,
			const double& height, const int& numberOfLegs, const int& numberOfShuffles);

		~Table()override = default;

		Table& setNumberOfLegs(const int& numberOfLegs);

		Table& setNumberOfShuffles(const int& numberOfShuffels);

		int getNumberOfLegs() const;

		int getNumberOfShuffles() const;

		double usefulSpace() const override;

		void info() const override;

	protected:
		void specificInfo() const override;

	private:
		int numberOfLegs;
		int numberOfShuffles;
	};
}

#endif //TABLE_H
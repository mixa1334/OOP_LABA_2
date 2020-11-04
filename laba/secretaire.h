#pragma once
#ifndef SECRETAIRE_H
#define SECRETAIRE_H
#include "table.h"
#include "cupboard.h"

namespace furniture
{
	class Secretaire :public Cupboard, public Table
	{
	public:
		Secretaire(const double& price, const string& material, const string& name,
			const string& manufacturer, const double& length, const double& widht, const double& height,
			const int& numberOfShelves, const double& lengthOfShelves,
			const int& numberOfLegs, const int& numberOfShuffles);

		~Secretaire()override = default;

		double usefulSpace() const override;

		void info() const override;

	protected:
		void specificInfo() const override {};
	};
}

#endif //SECRETAIRE_H

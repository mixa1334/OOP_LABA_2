#pragma once
#ifndef CHAIR_H
#define CHAIR_H
#include "furniture.h"

namespace furniture
{
	class Chair :virtual private Furniture
	{
	public:
		Chair(const double& price, const string& material, const string& name,
			const string& manufacturer, const double& length, const double& widht, const double& height,
			const int& numberOfLegs, const string& materialOfSeatPad, const string& materialOfBack);

		~Chair() override = default;

		Chair& setNumberOfLegs(const int& numberOfLegs);

		Chair& setMaterialOfSeatPad(const string& materialOfSeatPad);

		Chair& setMaterialOfBack(const string& materialOfBack);

		int getNumberOfLegs() const;

		string getMaterialOfSeatPad() const;

		string getMaterialOfBack() const;

		virtual double usefulSpace() const override;

		virtual void info() const override;

	protected:
		virtual void specificInfo() const override;

	private:
		int numberOfLegs;
		string materialOfSeatPad;
		string materialOfBack;
	};
}


#endif //CHAIR_H
#pragma once
#ifndef FURNITURE_H
#define FURNITURE_H
#include <string>
#include <iostream>
#include <vector>
using namespace std;

namespace furniture
{
	class Furniture
	{
	public:
		Furniture(const double& price, const string& material, const string& name,
			const string& manufacturer, const double& length, const double& widht, const double& height);

		virtual ~Furniture() = default;

		Furniture& setPrice(const double& price);

		Furniture& setMaterial(const string& material);

		Furniture& setHeight(const double& height);

		Furniture& setName(const string& name);

		Furniture& setManufacturer(const string& manufacturer);

		Furniture& setWidth(const double& width);

		Furniture& setLenght(const double& length);

		double getPrice() const;

		string getMaterial() const;

		string getName() const;

		string getManufacturer() const;

		double getHeight() const;

		double getWidth() const;

		double getLenght() const;

		virtual double usefulSpace() const = 0;

		virtual void info() const;

	protected:
		double check(const double& num, const string& name, const double& max) const;
		virtual void specificInfo() const = 0;

	private:
		double price;
		string material;
		string name;
		string manufacturer;
		double height;
		double width;
		double length;
	};
}


#endif //FURNITURE_H
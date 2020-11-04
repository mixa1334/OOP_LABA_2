#include "secretaire.h"

furniture::Secretaire::Secretaire(const double& price, const string& material, const string& name,
	const string& manufacturer, const double& length, const double& widht, const double& height,
	const int& numberOfShelves, const double& lengthOfShelves,
	const int& numberOfLegs, const int& numberOfShuffles)
	:Furniture(price, material, name, manufacturer, length, widht, height),
	Cupboard(price, material, name, manufacturer, length, widht, height, numberOfShelves, lengthOfShelves),
	Table(price, material, name, manufacturer, length, widht, height, numberOfLegs, numberOfShuffles)
{}

double furniture::Secretaire::usefulSpace() const
{
	return Cupboard::usefulSpace() + Table::usefulSpace();
}

void furniture::Secretaire::info() const
{
	Furniture::info();
	Cupboard::specificInfo();
	Table::specificInfo();
}
#include "bed.h"

furniture::Bed::Bed(const double& price, const string& material, const string& name,
	const string& manufacturer, const double& length, const double& widht, const double& height,
	const int& numberOfLegs, const int& numberOfSleepingPlaces)
	:Furniture(price, material, name, manufacturer, length, widht, height)
{
	setNumberOfLegs(numberOfLegs).setNumberOfSleepingPlaces(numberOfSleepingPlaces);
}

furniture::Bed& furniture::Bed::setNumberOfLegs(const int& numberOfLegs)
{
	this->numberOfLegs = check(numberOfLegs, "кол-во ножек", 4);
	return *this;
}

furniture::Bed& furniture::Bed::setNumberOfSleepingPlaces(const int& numberOfSleepingPlaces)
{
	this->numberOfSleepingPlaces = check(numberOfSleepingPlaces, "кол-во спальных мест", 2);
	return *this;
}

int furniture::Bed::getNumberOfLegs() const
{
	return numberOfLegs;
}

int furniture::Bed::getNumberOfSleepingPlaces() const
{
	return numberOfSleepingPlaces;
}

double furniture::Bed::usefulSpace() const
{
	return getLenght() * getWidth() / numberOfSleepingPlaces;
}

void furniture::Bed::specificInfo() const
{
	cout << "Кол-во спальных мест - " << numberOfSleepingPlaces << endl;
	cout << "Кол-во ножек(шт) - " << numberOfLegs << endl;
	cout << "Площадь спального места (см^2) - " << Bed::usefulSpace() << endl;
}

void furniture::Bed::info() const
{
	Furniture::info();
	specificInfo();
}
#include "table.h"

furniture::Table::Table(const double& price, const string& material, const string& name,
	const string& manufacturer, const double& length, const double& widht,
	const double& height, const int& numberOfLegs, const int& numberOfShuffles)
	:Furniture(price, material, name, manufacturer, length, widht, height)
{
	setNumberOfLegs(numberOfLegs).setNumberOfShuffles(numberOfShuffles);
}

furniture::Table& furniture::Table::setNumberOfLegs(const int& numberOfLegs)
{
	this->numberOfLegs = check(numberOfLegs, "кол-во ножек", 4);
	return *this;
}

int furniture::Table::getNumberOfLegs() const
{
	return numberOfLegs;
}

furniture::Table& furniture::Table::setNumberOfShuffles(const int& numberOfShuffels)
{
	this->numberOfShuffles = check(numberOfShuffels, "кол-во шуфлядок", 100);
	return *this;
}

int furniture::Table::getNumberOfShuffles() const
{
	return numberOfShuffles;
}

double furniture::Table::usefulSpace() const
{
	return getLenght() * getWidth();
}

void furniture::Table::specificInfo() const
{
	cout << "Площадь столешницы(см^2) - " << Table::usefulSpace() << endl;
	cout << "Кол-во ножек(шт) - " << numberOfLegs << endl;
	cout << "Кол-во шуфлядок(шт) - " << numberOfShuffles << endl;
}

void furniture::Table::info() const
{
	Furniture::info();
	specificInfo();
}
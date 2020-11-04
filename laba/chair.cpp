#include "chair.h"

furniture::Chair::Chair(const double& price, const string& material, const string& name,
	const string& manufacturer, const double& length, const double& widht, const double& height,
	const int& numberOfLegs, const string& materialOfSeatPad, const string& materialOfBack)
	:Furniture(price, material, name, manufacturer, length, widht, height), materialOfBack(materialOfBack),
	materialOfSeatPad(materialOfSeatPad)
{
	setNumberOfLegs(numberOfLegs);
}


furniture::Chair& furniture::Chair::setNumberOfLegs(const int& numberOfLegs)
{
	this->numberOfLegs = check(numberOfLegs, "���-�� �����", 4);
	return *this;
}

int furniture::Chair::getNumberOfLegs() const
{
	return numberOfLegs;
}

furniture::Chair& furniture::Chair::setMaterialOfSeatPad(const string& materialOfSeatPad)
{
	this->materialOfSeatPad = materialOfSeatPad;
	return *this;
}

string furniture::Chair::getMaterialOfSeatPad() const
{
	return materialOfSeatPad;
}

furniture::Chair& furniture::Chair::setMaterialOfBack(const string& materialOfBack)
{
	this->materialOfBack = materialOfBack;
	return *this;
}

string furniture::Chair::getMaterialOfBack() const
{
	return materialOfBack;
}

double furniture::Chair::usefulSpace() const
{
	return getWidth() * getLenght();
}

void furniture::Chair::specificInfo() const
{
	cout << "���-�� �����(��) - " << numberOfLegs << endl;
	cout << "�������� ������� - " << materialOfSeatPad << endl;
	cout << "������� �������(��^2) - " << Chair::usefulSpace() << endl;
	cout << "�������� ������ - " << materialOfBack << endl;
}

void furniture::Chair::info() const
{
	Furniture::info();
	specificInfo();
}
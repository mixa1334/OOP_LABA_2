#include "cupboard.h"

furniture::Cupboard::Cupboard(const double& price, const string& material, const string& name,
	const string& manufacturer, const double& length, const double& widht,
	const double& height, const int& numberOfShelves, const double& lengthOfShelve)
	: Furniture(price, material, name, manufacturer, length, widht, height)
{
	setNumberOfShelves(numberOfShelves).setLengthOfShelve(lengthOfShelve);
}

furniture::Cupboard& furniture::Cupboard::setNumberOfShelves(const int& numberOfShelves)
{
	this->numberOfShelves = check(numberOfShelves, "���-�� �����", 100);
	return *this;
}

int furniture::Cupboard::getNumberOfShelves() const
{
	return numberOfShelves;
}

furniture::Cupboard& furniture::Cupboard::setLengthOfShelve(const double& lengthOfShelve)
{
	this->lengthOfShelve = check(lengthOfShelve, "����� �����", getLenght());
	return *this;
}

double furniture::Cupboard::getLengthOfShelve() const
{
	return lengthOfShelve;
}

double furniture::Cupboard::usefulSpace() const
{
	return lengthOfShelve * (double)numberOfShelves * getWidth();
}

void furniture::Cupboard::specificInfo() const
{
	cout << "����������� ���� �����(��^2) - " << Cupboard::usefulSpace() << endl;
	cout << "���-�� �����(��) - " << numberOfShelves << endl;
	cout << "����� �����(��) - " << lengthOfShelve << endl;
}

void furniture::Cupboard::info() const
{
	Furniture::info();
	specificInfo();
}
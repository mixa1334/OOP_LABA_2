#include "closet.h"

furniture::Closet& furniture::Closet::setCapacity(const double& capacity)
{
	this->capacity = check(capacity, "����������� ���������", 10000);
	return *this;
}

furniture::Closet& furniture::Closet::setNumberOfDoors(const int& numberOfDoors)
{
	this->numberOfDoors = check(numberOfDoors, "���-�� ������", 5);
	return *this;
}

furniture::Closet::Closet(const double& price, const string& material, const string& name, 
	const string& manufacturer, const double& length, const double& widht, const double& height, 
	const int& numberOfShelves, const double& lengthOfShelve,
	const double& capacity, const int& numberOfDoors)
	:Cupboard(price,material,name,manufacturer,length,widht,height,numberOfShelves,lengthOfShelve),
	Furniture(price, material, name, manufacturer, length, widht, height)
{
	setCapacity(capacity);
	setNumberOfDoors(numberOfDoors);
}

double furniture::Closet::getCapacity() const
{
	return capacity;
}

int furniture::Closet::getNumberOFDoors() const
{
	return numberOfDoors;
}

double furniture::Closet::usefulSpace() const
{
	return Cupboard::usefulSpace() + capacity;
}

void furniture::Closet::specificInfo() const
{
	cout << "���-�� ������ - " << numberOfDoors << endl;
	cout << "����������� ���������(��^2) - " << capacity << endl;
	cout << "����� ����������� �����-����(��^2) - " << Closet::usefulSpace() << endl;
}

void furniture::Closet::info() const
{
	Furniture::info();
	Cupboard::specificInfo();
	specificInfo();
}
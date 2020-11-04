#include "tableTransformer.h"

furniture::TableTransformer::TableTransformer(const double& price, const string& material, const string& name,
	const string& manufacturer, const double& length, const double& widht,
	const double& height, const int& numberOfLegs, const int& numberOfShuffles,
	const int& decompositionCoefficient)
	:Table(price, material, name, manufacturer, length, widht, height, numberOfLegs, numberOfShuffles),
	Furniture(price, material, name, manufacturer, length, widht, height)
{
	setDecompositionCoefficient(decompositionCoefficient);
}

furniture::TableTransformer& furniture::TableTransformer::setDecompositionCoefficient(const int& decompositionCoefficient)
{
	this->decompositionCoefficient = check(decompositionCoefficient, "%", 3);
	return *this;
}

int furniture::TableTransformer::getDecompositionCoefficient() const
{
	return decompositionCoefficient;
}

double furniture::TableTransformer::usefulSpace() const
{
	return (Table::usefulSpace() / (double)decompositionCoefficient);
}

void furniture::TableTransformer::specificInfo() const
{
	cout << "Площадь столешницы в сложенном сотоянии(см^2) - " << usefulSpace() << endl;
}

void furniture::TableTransformer::info() const
{
	Furniture::info();
	Table::specificInfo();
	specificInfo();
}
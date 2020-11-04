#include "furniture.h"

furniture::Furniture::Furniture(const double& price, const string& material, const string& name,
	const string& manufacturer, const double& length, const double& widht, const double& height)
	:material(material), name(name), manufacturer(manufacturer)
{
	setPrice(price).setHeight(height).setWidth(widht).setLenght(length);
}

furniture::Furniture& furniture::Furniture::setPrice(const double& price)
{
	this->price = check(price, "цена", 100000);
	return *this;
}

double furniture::Furniture::getPrice() const
{
	return price;
}

furniture::Furniture& furniture::Furniture::setHeight(const double& height)
{
	this->height = check(height, "высота", 400);
	return *this;
}

double furniture::Furniture::getHeight() const
{
	return height;
}

furniture::Furniture& furniture::Furniture::setWidth(const double& width)
{
	this->width = check(width, "ширина", 600);
	return *this;
}

double furniture::Furniture::getWidth() const
{
	return width;
}

furniture::Furniture& furniture::Furniture::setLenght(const double& length)
{
	this->length = check(length, "длина", 700);
	return *this;
}

double furniture::Furniture::getLenght() const
{
	return length;
}

furniture::Furniture& furniture::Furniture::setName(const string& name)
{
	this->name = name;
	return *this;
}

string furniture::Furniture::getName() const
{
	return name;
}

furniture::Furniture& furniture::Furniture::setMaterial(const string& material)
{
	this->material = material;
	return *this;
}

string furniture::Furniture::getMaterial() const
{
	return material;
}

furniture::Furniture& furniture::Furniture::setManufacturer(const string& manufacturer)
{
	this->manufacturer = manufacturer;
	return *this;
}

string furniture::Furniture::getManufacturer() const
{
	return manufacturer;
}

double furniture::Furniture::check(const double& num, const string& name, const double& max) const
{
	if (num <= 0.0 || num > max)
	{
		cout << "Некорректные данные \"" << getName() << "\" -> \"" << name << " = " << num << "\"" << "; выставенное значение: " << max << endl;
		return max;
	}
	return num;
}

void furniture::Furniture::info() const
{
	cout << "Наименование товара - " << name << endl;
	cout << "Производитель - " << manufacturer << endl;
	cout << "Материал - " << material << endl;
	cout << "Габариты(см) (Д х Ш х В) - " << length << " x " << width << " x " << height << endl;
	cout << "Цена(руб) - " << price << endl;
}
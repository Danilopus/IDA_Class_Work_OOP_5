#include "client.h"

// в cpp файле описываем функции из .h
Super_class::Super_class(int id)
{
	_id = id;
}
void Super_class::ShowId()
{
	std::cout << "Id: " << _id << "\n";
}

Food::Food(std::string name, float price, float weight) : _name(name), _price(price), _weight(weight) {};

Bread::Bread(std::string name, float price, float weight, std::string BreadType) : Food(name, price, weight), _BreadType(BreadType) {}

Milk::Milk(std::string name, float price, float weight, int fatPercent): Food(name, price, weight), _fatPercent(fatPercent) {}

void Food::ShowData()
{
	std::cout << "_name: " << _name << "\n";
	std::cout << "_condition: " << _condition << "\n";
	std::cout << "_price: " << _price << "\n";
	std::cout << "_weight: " << _weight << "\n";
}

void Bread::ShowData()
{
	Food::ShowData();
	std::cout << "_BreadType: " << _BreadType << "\n";
}

void Milk::ShowData()
{
	Food::ShowData();
	std::cout << "_fatPercent: " << _fatPercent << "\n";
}
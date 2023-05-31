#include "1.h"

void Supermarket::ShowData()
{
	if (_products.size() > 0)
	{
		for (const auto& it : _products)
			//	std::cout << it << "\n";
			it->ShowData();
		return;
	}
	std::cout << "Stack is empty\n";
}

Food* Supermarket::SearchByName(std::string name)
{
	for (const auto& it : _products)
	{
		if (it->GetName() == name)
			return it;
	}
	return nullptr;
}

void Supermarket::Buy(std::string name)
{
	//Food * food = Sear
	int index = 0;
	for (const auto& it : _products)
	{
		if (it->GetName() == name)
		{
			delete(it);
			_products.erase(_products.begin() + index);
		}
		index++;
	}
	
}

void Supermarket::AddProduct(Food* food)
{
	_products.push_back(food);
}

#pragma once
#include <vector>
#include "client.h"

class Supermarket
{
private:
	std::vector<Food*> _products;
public:
	void ShowData();
	Food* SearchByName(std::string name);
	void Buy(std::string name);
	void AddProduct(Food* food);	

};
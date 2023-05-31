#pragma once
#include <iostream>
#include <string>

// ����� � ��������� ������� ������� � ��������� ������������ ���� - ����� ������ �� C++
class Super_class
{
private:
	int _id;
public:
	Super_class(int id);
	void ShowId();
};

class Food
{
private:
	std::string _name;
	float _condition=1;
	float _price;
	float _weight;
public:
	Food(std::string name,
		float price,
		float weight);
	//void ShowData();
	
	// � ����� � �������������� �������� ������� � ������ ������ ����������
	
	//������� � ����������� ������������ � ����
	//virtual void ShowData() = 0;

	//������� � ����������� ���������� �������� �������� � ��������� ���
	virtual void ShowData();
	std::string GetName() const
	{
		return _name;
	}
};

// ������� ����������� ������ Food
class Bread : public Food
{
private:
	std::string _BreadType;
public:
	//����������� ������ ����������

	//v1 Bread(std::string name, float price, float weight, std::string BreadType) : Food(name, price, weight)
	//{
	//	_BreadType = BreadType;
	//}
	
	//v2 Bread(std::string name, float price, float weight, std::string BreadType) : Food(name, price, weight), _BreadType(BreadType) {}
	
	//v3
	Bread(std::string name, float price, float weight, std::string BreadType);	

	//���������, ��� ������� �������� ����� ���������� � ������ ������-����������
	void ShowData() override;
};
class Milk : public Food
{
private:
	int _fatPercent;
public:
	//Bread(std::string name,	float condition, float price,	float weight)
	//Milk(std::string name, float price, float weight) : Food(name, price, weight) {}
	Milk(std::string name, float price, float weight, int fatPercent);
	
	void ShowData() override;
	//void ShowData();

};
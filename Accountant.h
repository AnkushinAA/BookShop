#pragma once
#include <string>

using namespace std;

class Accountant
{
protected:
	string name;	
	float expense;
	float income;
	int quantity;
public:
	Accountant() 
	{
		//�������� ������� ��������� ��� �������� ������
	}
	void setIncome(float cost_price, float sale_price, int quantity)
	{
		//����������� ������
	}
	void showIncome()
	{
		// ����� �������
	}
	void showSale()
	{
		//����� ������
	}
};
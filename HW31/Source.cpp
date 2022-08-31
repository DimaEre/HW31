#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

class Area
{
private:
	double one;
	double two;
	double three;
	double hp{};
	double area{};
public:
	Area(double one, double two, double three)
	{
		this->one = one;
		this->two = two;
		this->three = three;
		
	}
	void sort()
	{
		if (one <= 0 || two <= 0 || three <= 0)
		{
			throw "Error";
		}
		else if (one >= two + three || two >= one + three || three >= one + two)
		{
			throw "Error";
		}
	}
	void HalfPerimetr()
	{
		hp = (one + two + three) / 2;
	}
	void solution()
	{
		HalfPerimetr();
		area = sqrt(hp * (hp - one) * (hp - two) * (hp - three));
		cout << area;
		
		
	}
};
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double one, two, three;

	cout << "������ ����� ������� ����������";
	cin >> one;
	cout << "������ ����� ������� ����������";
	cin >> two;
	cout << "������ ����� ������� ����������";
	cin >> three;

	Area area(one,two,three);
	
	try
	{
		area.sort();
	}
	catch (...)
	{
		cout << "����������� ������ ����";
		return 0;
	}
	area.solution();
	return 0;
	

}
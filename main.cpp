#include <iostream>
#include <vector>
#include <algorithm>



std::ostream& operator << (std::ostream& os, std::vector<int> v)
{
	std::cout << "{";

	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		std::cout << *it;
		if (it != v.end() - 1)
		{
			std::cout << ",";
		}
	}
	std::cout << "}";

	return os;
}

int main()
{
	std::vector<int> v{1, 2, 3, 4, 5};
	std::vector<int>::iterator itr;

	itr = v.begin();
	std::cout << *itr << std::endl;

	itr++;
	std::cout << *itr << std::endl;

	//itr = v.end();
	//std::cout << *itr << std::endl;


	// traverse

	itr = v.begin();
	while (itr != v.end())
	{
		std::cout << *itr << std::endl;
		itr++;
	}

	for (std::vector<int>::iterator itr = v.begin(); itr != v.end(); itr++)
	{
		std::cout << *itr << std::endl;
	}

	// -> rangebased loop
	for (int e : v)
	{
		std::cout << e << std::endl;
	}


	// auto : �����Ϸ��� �߷��� �� �ִ� Ÿ���� ����
	// auto�� ���ؼ� ��!!! �ʼ������� �˰� ���� ��!!!
	auto myAuto = 1;
	auto myAuto_1 = 1.1f;
	auto myAuto_2 = { 1,2,3,4 };


	class Student
	{
	public:
		int mNumber;
	};

	// ������ �ʱ�ȭ���� ����� 1,2,3�� �л��� ���Ϳ� �߰��غ���.
	std::vector<Student>students{ { 1 }, { 2 }, { 3 } };

	std::vector<Student>::iterator itr_1 = students.begin();









	std::vector<int>numbers{5, 2, 4, 3, 1};

	for (auto e : numbers)
	{
		e = 10;
	}

	for (auto e : numbers)
	{
		std::cout << e << std::endl;
	}


	// Function + Object => Functor

	struct CompareObject
	{
		bool operator() (int x, int y)
		{
			return x > y;
		}
	};
	
	CompareObject c;

	// STL ����
	std::sort(numbers.begin(), numbers.end()); // ��������
	std::sort(numbers.begin(), numbers.end(), c); // ��������
	std::cout << numbers << std::endl;
	return 0;
}
#include <iostream>
int tranFL(int flagon)
{
	return 220 * flagon;;
}
int main()
{
	int flagon;
	setlocale(LC_ALL, "rus");
	std::cout << "������� ���������� ��������" << std::endl;
	std::cin >> flagon;
	int yards = tranFL(flagon);
	std::cout << "���������� �����: " << yards << std::endl;
	system("pause");
		return 0;
}

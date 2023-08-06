#include <iostream>
int tranFL(int flagon)
{
	return 220 * flagon;
}
int main()
{
	int flagon;
	std::cout << "Enter number flagon: ";
	std::cin >> flagon;
	std::cout << std::endl;
	int yards = tranFL(flagon);
	std::cout << "Result: " << yards << std::endl;
	system("pause");
		return 0;
}

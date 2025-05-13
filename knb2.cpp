#include <iostream>
#include <windows.h>
#include <string>

int main() {
void game();
srand(time(NULL));
std::setlocale(LC_ALL, "Russian");

SetConsoleCP(1251);
SetConsoleOutputCP(1251);
	
std::string a;

		
	std::string bot[3]{ "Камень","Ножницы","Бумага" };

	
	for (int z = 1; z < 4;)
	{
	
		
	std::cout << "1.Камень 2.Ножницы 3.Бумага" << std::endl;
	
		std::cin >> a;
		
		int r = rand() % 3;

		std::cout  << bot[r] << std::endl;
		
		if (a == "Камень" && bot[r] == "Ножницы" || a == "Ножницы" && bot[r] == "Бумага" || a == "Бумага" && bot[r] == "Камень")
		{
			std::cout << "победа" << std::endl;
			z++;
		}
		else if (a == bot[r])
		{
			std::cout << "ничья" << std::endl;
		}
		else
		{
			std::cout << "поражение" << std::endl;
		}
	}
	
}






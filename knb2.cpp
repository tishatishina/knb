#include <iostream>

void game() {

		int a = 1;

	for (int z = 1; z < 4;)
	{
	std::cout << "1.Камень 2.Ножницы 3.Бумага" << std::endl;
		int bot = 1 + rand() % 3;
		std::cin >> a;

		//

		if (a == 1 && bot == 2 || a == 2 && bot == 3 || a == 3 && bot == 1)
		{
			std::cout << "победа" << std::endl;
			z++;
		}
		else if (a == bot)
		{
			std::cout << "ничья" << std::endl;
		}
		else
		{
			std::cout << "поражение" << std::endl;
		}
	}
}




int main() {
		setlocale(LC_ALL, "Russian");
		srand(time(NULL));
		//game();
		

		/*char i[4] = { 't','e','s','t' };

		for (int a = 0; a < 4; a++) {

			std::cout << i[a];

		}*/

		/*std::string t = "test";
		std::cout << t;
		std::cin >> t;
		std::cout << t;*/

		
}


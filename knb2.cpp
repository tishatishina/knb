#include <iostream>

//void game() {
//
//	std::string a;
//
//	std::string bot[3]{ "камень","ножницы","бумага" };
//
//	for (int z = 1; z < 4;)
//	{
//
//	std::cout << "1.Камень 2.Ножницы 3.Бумага" << std::endl;
//	int r = rand() % 3;
//
//		std::cin >> a;
//
//		
//		// исправить !!!!!!!!!!!!!!!!!
//		if (a == "камень" && bot[r] == "ножницы" || a == 2 && bot == 3 || a == 3 && bot == 1)
//		{
//			std::cout << "победа" << std::endl;
//			z++;
//		}
//		else if (a == bot)
//		{
//			std::cout << "ничья" << std::endl;
//		}
//		else
//		{
//			std::cout << "поражение" << std::endl;
//		}
//	}
//}




int main() {
		setlocale(LC_ALL, "Russian");
		srand(time(NULL));
		//game();
		//сохранял русский язык в переменную стринг

		/*char i[4] = { 't','e','s','t' };

		for (int a = 0; a < 4; a++) {

			std::cout << i[a];

		}*/

		std::string t = "test";
		std::cin >> t;
		std::cout << t;

		
}


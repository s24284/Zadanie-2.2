// Zadanie 2.2.cpp :
//

#include <iostream>

int main()
{
	int a;
	int b;
	
	do
	{
		std::cout << "Podaj liczbe calkowita dodatnia a:\n";
		std::cin >> a;

		std::cout << "Podaj liczbe calkowita dodatnia b:\n";
		std::cin >> b;

		std::cout << "Pobrano liczby a == " << a << " i b == " << b << "\n";

		std::cout << "Wiersz o dlugosci a:\n";

		for (int i = 1; i <= a; i++) //wiersz dla a
		{
			
			std::cout << "*";
          
		}

		std::cout << "\n";

		std::cout << "Kolumna o dlugosci b:\n";

		for (int i = 1; i <= b; i++) //kolumna dla b
		{

			std::cout << "*";
			std::cout << "\n";

		}

		std::cout << "\n";

		std::cout << "Prostokat wypelniony gwiazdkami o wymiarach a na b:\n";

		for (int i = 1; i <= a; i++) //prostokąt o wymiarach a na b

		{
			for (int j =1; j <=b; j++)

			{
				std::cout << "*";
			
			}

			std::cout << "\n";

		}

		std::cout << "\n";

	    std::cout << "Obwod prostokata o wymiarach a na b:\n";

		for (int i = 1; i <= a; i++) //obwod bez wypelnienia a na b

		{

			for (int j = 1; j <= b; j++)
			{
				if (i == 1)
				{
					std::cout << "*";
				}
					
				else if (i == a)
				{
					std::cout << "*";
				}

				else if (j > 1 && j < b )


				{
					std::cout << " ";
				}

				else
				{
					std::cout << "*";
				}
					
			
			}

			std::cout << "\n";
			
		}

		std::cout << "Trojkat prostokatny rownoramienny z katem prostym w lewym dolnym rogu:\n";

		for (int i = 1; i <= a; i++) 
		{

			for (int j = 1; j <= i; j++)
			{
				
				
					std::cout << "*";
				


			}

			std::cout << "\n";

		}

		std::cout << "Trojkat prostokatny rownoramienny z katem prostym w prawym gornym rogu:\n";

		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= a; j++)
			{
				if (j <= i - 1)
					std::cout << " ";

				else
					std::cout << "*";
			}
			
			std::cout << "\n";
		}

		


		if (a < 1 || b < 1) //wygania, jak nie wpisali, co potrzeba

		{
			std::cout << "Nie podales liczby calkowitej dodatniej. Sprobuj jeszcze raz.\n";
		}


	}

	while (a < 1 || b < 1);



		return 0;
   
}

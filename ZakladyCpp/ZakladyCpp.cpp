// ZakladyCpp.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

//pridani dekelrace funkce pres multiple cpp file
//void PrintimNeco();

//nebo udelam tohle:
#include "HeaderTest.h"

//vezme dve cisla a multiplne je
int Multiply(int a, int b)
{
    std::cout << (a * b) << std::endl;
    return (a * b);
}

//vyhodi cislo na screen
void PrintScreen(int x)
{
    std::cout << x << std::endl;
}

int intTest = -96;
float floatTest = 10.52f;
double doubleTest = 10.97;
bool boolTest = false;

int x = 69;


void KusKodu()
{
	int Res = Multiply(5, 5);
	std::cout << "Hello World!\n";
	std::cout << "Druhy radek kodu!\n";

	PrintScreen(96);

	PrintimNeco();


	if (x == 69)
	{
		std::cout << "Vyraz (x = 69) je pravdivy...\n";
	}
	else
	{
		std::cout << "Vyraz (x = 69) je nepravdivy...\n";
	}

	for (int i = 1; i <= 12; ++i)
	{
		std::cout << i << "x ";
		PrintimNeco();
		std::cout << "\n";
	}
	for (int i = 10; i > 0; --i)
	{
		std::cout << i << "x ";
		if (i == 6)
		{
			PrintimNeco();
		}
		std::cout << "\n";
	}
}

void PointerTest()
{
	int pointerTest = 6;
	//void* ptr = nullptr;
	int* ptr = &pointerTest;
	std::cout << pointerTest << std::endl;
	*ptr = 10;
	std::cout << pointerTest << std::endl;
	std::cout << *ptr << std::endl;
}

void Reference()
{
	//vytvoreni reference
	int a = 100;
	int& reference = a;
	//vyprinteni na konzoli
	std::cout << a << std::endl;
	std::cout << reference << std::endl;
	reference = 22; //zmeneni value a pres referenci
	std::cout << a << std::endl;
	std::cout << reference << std::endl;

	Multiply(a, reference);
}

class Player
{
public:
	int playerHealth = -1;
	int playerPosition = 0;
	int playerMana = -1;

	void DejDamage(int kolikDatDMG)
	{
		playerHealth -= kolikDatDMG;
	}


protected:
private:
};

//hlavni ovladaci cyklus
int main()
{
    //KusKodu();
	//PointerTest();
	//Reference();

	Player player1;
	player1.playerHealth = 100;
	std::cout << "Pred utokem\n";
	std::cout <<"Hrac 1 HP: "<< player1.playerHealth << std::endl;
	player1.DejDamage(50);
	std::cout << "\nPo utoku:\nHrac 1 HP: " << player1.playerHealth << std::endl;
    std::cin.get();

    return 0;
}

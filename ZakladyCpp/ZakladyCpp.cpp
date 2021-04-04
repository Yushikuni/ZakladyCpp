// ZakladyCpp.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
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
//hlavni ovladaci cyklus
int main()
{

    int Res = Multiply(5, 5);
    std::cout << "Hello World!\n";
    std::cout << "Druhy radek kodu!\n";

    PrintScreen(96);

    std::cin.get();

    return 0;
}

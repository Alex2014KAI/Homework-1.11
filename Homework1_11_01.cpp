#include <iostream>
#include <string>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Введите имя: ";
	std::string firstName{};
	std::getline(std::cin >> std::ws, firstName);

	std::cout << "Введите фамилию: ";
	std::string secondName{};
	std::getline(std::cin >> std::ws, secondName);

	std::cout << " Здравствуйте, " << firstName << " " << secondName << " !";

return 0;
}
#include <iostream>
#include <string>
#include <Windows.h>


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string hiddenWord{ "малина" };

	while (true) {
		std::cout << "Угадайте слово: ";
		std::string word{};
		std::getline(std::cin >> std::ws, word);

		if (hiddenWord == word) {
			std::cout << "Правильно! Вы победили! Загаданное слово — " << hiddenWord;
			break;
		};

		std::cout << "Неправильно" << std::endl;
	}

return 0;
}

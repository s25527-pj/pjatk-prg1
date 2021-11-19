#include <iostream>
#include <random>
#include <string>

auto ask_user_for_integer(std::string prompt) -> int {
  std::cout << prompt;
  auto n = std::string{};
  std::getline(std::cin, n);
  return std::stoi(n);
}
auto main() -> int {

  auto rd = std::random_device{};
  auto d = std::uniform_int_distribution<int>{1, 100};
  auto secret_number = d(rd);
  auto user_guess = 0;

  while (user_guess != secret_number) {
    try {
      user_guess = ask_user_for_integer("Guess my number: ");
      if (user_guess > secret_number) {
        std::cout << "Your number is too high!\n";
      } else if (user_guess < secret_number) {
        std::cout << "Your number is too low!\n";
      }

    } catch (const std::invalid_argument &ia) {
      std::cerr << "Come on, that's not a number!\n";
    }
  }
  std::cout << "Got it!\n";

  return 0;
}

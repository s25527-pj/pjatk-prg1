#include <iostream>
#include <stdexcept>
#include <string>

auto main(int, char *argv[]) -> int {
  try {
    auto const pass = std::string(argv[1]);
    auto passCheck = std::string{};

    while (pass != passCheck) {
      std::cout << "Type in the password: ";
      std::getline(std::cin, passCheck);
    }
    std::cout << "Welcome!\n";
  } catch (const std::logic_error &le) {
    std::cerr << "Did I miss your input?"
              << "\n";
  }
  return 0;
}

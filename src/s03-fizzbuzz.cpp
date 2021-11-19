#include <iostream>
#include <stdexcept>
#include <string>

auto main(int, char *argv[]) -> int {
  try {
    auto const number = std::stoi(argv[1]);
    for (auto n = 1; n <= number; n++) {
      std::cout << n << "\n";
      if ((n % 3) == 0 && (n % 5) != 0) {
        std::cout << "Fizz"
                  << "\n";
      } else if ((n % 5) == 0 && (n % 3) != 0) {
        std::cout << "Buzz"
                  << "\n";
      } else if ((n % 5) == 0 && (n % 3) == 0) {
        std::cout << "FizzBuzz"
                  << "\n";
      }
    }
  } catch (const std::invalid_argument &ia) {
    std::cerr << "We were supposed to play with numbers!"
              << "\n";
  } catch (const std::logic_error &le) {
    std::cerr << "Did I miss your input?"
              << "\n";
  }
  return 0;
}

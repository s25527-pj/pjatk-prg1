#include <chrono>
#include <iostream>
#include <stdexcept>
#include <string>
#include <thread>

auto main(int, char *argv[]) -> int {
  try {
    auto const countdown = std::stoi(argv[1]);
    if (countdown < 0) {
      std::cout << "We're counting down, not up "
                << "\n";
    } else {
      for (auto i = countdown; i >= 0; i--) {
        std::cout << i << "..."
                  << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds{500});
      }
    }
  } catch (const std::invalid_argument &ia) {
    std::cerr << "Can't do a countdown from that!"
              << "\n";
  } catch (const std::logic_error &le) {
    std::cerr << "Did I miss your input?"
              << "\n";
  }

  return 0;
}

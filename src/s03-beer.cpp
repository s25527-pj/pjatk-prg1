#include <iostream>
#include <string>
#include <stdexcept>

auto drunkard_song(int beer) -> int {
  while (beer != 0) {
    for (auto i = beer; i > 0; i--) {
      std::cout << i << " bottles of beer on the wall, " << i
                << " bottles of beer.\n"
                << "Take one down, pass it around, " << i - 1
                << " bottles of beer on the wall...\n";
      beer--;
    }
    std::cout
        << "No more bottles of beer on the wall, no more bottles of beer.\n"
        << "Go to the store and buy some more, 99 bottles of beer on the "
           "wall...\n";
  }

  return 0;
}

auto main(int argc, char *argv[]) -> int {
  auto beer = 1;
  try {

    if (argc > 1) {
      beer = std::stoi(argv[1]);
    } else {
      beer = 99;
    }
    drunkard_song(beer);
  } catch (const std::invalid_argument &ia) {
    std::cerr << "I feel like singing\n";
  }

  return 0;
}

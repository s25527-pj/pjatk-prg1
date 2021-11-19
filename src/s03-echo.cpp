#include <iostream>
#include <string>
#include <string.h>


auto main(int argc, char *argv[]) -> int {
	if (strcmp(argv[1], "-r") == 0) 
	{
	
	for (auto i = argc; i > 0; i--)
		{
		//I give up, I dunno why this doesn't work
		std::cout << argv[i];
		
		if (strcmp(argv[2], "-l") == 0) { std::cout << "\n";}
		}
	}
	else
	{
	for (auto i = 1; i < argc; i++)
	{
		std::cout << argv[i];
		if (strcmp(argv[1], "-l") == 0) {std::cout << "\n";}
	}
	}

  
  return 0;
}

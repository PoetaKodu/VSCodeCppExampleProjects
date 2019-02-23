#include <iostream>
#include <string>
#include <cinttypes>

int main()
{
	constexpr std::uint16_t defaultLimit = 30;

	std::cout << "===========\n";
	std::cout << "FizzBuzz\n";
	std::cout << "===========\n"; 
	std::cout << "Please enter upper limit (default: " << defaultLimit << "):" << std::endl;

	std::uint16_t upperLimit;
	if (!(std::cin >> upperLimit)) {
		std::cout << "Invalid input. Using default limit (" << defaultLimit << ")." << std::endl;
		upperLimit = defaultLimit;
	}

	std::cout << "===========\n"; 
	std::cout << "OK! I am counting:\n";
	std::cout << "===========\n"; 
	for(std::uint16_t i = 1; i <= upperLimit; ++i)
	{
		std::string result;

		if (i % 3 == 0)
			result += "Fizz";
		if (i % 5 == 0)
			result += "Buzz";

		if (result.empty())
			std::cout << i << '\n';
		else
			std::cout << result << '\n';
	}
	std::cout.flush();
}
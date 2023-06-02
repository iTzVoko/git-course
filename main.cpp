#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

void print_usage(std::string program_path) {
	std::cerr << "Too few arguments\n\n"
		<< "Usage:\n\t" << program_path << " number [power]\n";
}

int main(int argc, char **argv) {
	if (argc < 2) {
		print_usage(argv[0]);
		std::exit(EXIT_FAILURE);
	}

	int number = 10;
	int power = 4;
	
	int result = std::pow(number, power);
	
	std::cout << result << std::endl;

	return 0;
}


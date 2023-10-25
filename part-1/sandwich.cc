// Andrew Martinez
// @martinezandrew2023@csu.fullerton.edu
// @martinezandrew17
// Partners: @AlexanderPineda-cyber

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // TODO: Validate that the number of arguments is correct.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() != 4) {
    std::cout << "Error: You must supply three arguments\n"; 
  return 1;
  }

  // TODO: Declare three std::string variables to hold the
  // protein, bread, and condiment input.
  // Initialize each variable with an element of the arguments vector
  // declared above.
  int protein = std::stoi(arguments[1]);
  int bread = std::stoi(arguments[2]);
  int condiment = std::stoi(arguments[3]);
  // TODO: Use cout to print output following the pattern
  // Your order: A *PROTEIN* sandwich on *BREAD* with *CONDIMENT*.
  // on its own line.
    std::cout << "Your order: A " << protein << "Sandwich on: "
              << bread << "With: " << condiment << "\n";
  return 0;
}

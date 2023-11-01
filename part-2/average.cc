// TODO: Add the required header

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // TODO: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() != 2) {
    std::cout << "Error: You must have one number.\n";
    return 1;
  }

  // TODO: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  double sum = 0.0;
  for (const std::string& arg : arguments) {
    try {
      int num = std::stoi(arg);
      sum += num;
    } catch (std::invalid_argument& e) {
      std::cout << "Skipping non-integer argument: " << arg << "\n";
    }
  }
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  int count = 0;
  if (count > 0) {
    double average = sum / count;
    // TODO: After the loop has finished summing the arguments, calculate the
    // average of the values. Recall that the average is the total value divided
    // by the number of values.
    std::cout << "Sum of command line arguments: " << sum << "\n";
    std::cout << "Average of command line arguments: " << average << "\n";
  } else {
    std::cout << "Error: No valid numeric arguments found.\n";
    return 1;
  }
  // TODO: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.
  std::cout << "average = *AVERAGE*\n";
  return 0;
}

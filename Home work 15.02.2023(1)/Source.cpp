#include <string>
#include <iostream>
#include <cmath>

int main(int argc, const char* argv[]) {

    if (argc != 4) {
        std::cout << "Usage: Calculator.exe <num1> <operator> <num2>" << std::endl;
        return 1;
    }

    double num1 = std::stod(argv[1]);
    std::string op = argv[2];
    double num2 = std::stod(argv[3]);

    double result = 0;

    if (op == "+") {
        result = num1 + num2;
    }
    else if (op == "-") {
        result = num1 - num2;
    }
    else if (op == "pow") {
        result = pow(num1, num2);
    }
    else if (op == "*") {
        result = num1 * num2;
    }
    else if (op == "/") {
        if (num2 == 0) {
            std::cout << "Error: division by zero" << std::endl;
            return 1;
        }
        result = num1 / num2;
    }
    else {
        std::cout << "Error: unknown operator " << op << std::endl;
        return 1;
    }

    std::cout << result << std::endl;



}
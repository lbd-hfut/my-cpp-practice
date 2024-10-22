#include <iostream>
#include "../include/StepsSearch.h"
// #include "../include/ImageProcessing.h"

int main() {
    // Example usage
    std::pair<double, double> oxy = {10, 10};
    double thrC = 0.5;

    // Dummy 3D vector for f and 2D vector for targetImg
    std::vector<std::vector<std::vector<double>>> f(5, std::vector<std::vector<double>>(5, std::vector<double>(5, 1.0)));
    std::vector<std::vector<double>> targetImg(20, std::vector<double>(20, 1.0));

    auto result = StepsSearch(oxy, thrC, f, targetImg);
    std::cout << "Found: " << result.first << ", Coordinates: (" << result.second.first << ", " << result.second.second << ")\n";

    return 0;
}


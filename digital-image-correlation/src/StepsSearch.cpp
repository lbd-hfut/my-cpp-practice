#include "../include/StepsSearch.h"
#include "../include/EvalPoints.h"
#include <cmath>

std::pair<bool, std::pair<double, double>> StepsSearch(const std::pair<double, double>& oxy, 
                                                         double thrC, 
                                                         const std::vector<std::vector<std::vector<double>>>& f, 
                                                         const std::vector<std::vector<double>>& targetImg) {
    double ix = oxy.first;
    double iy = oxy.second;
    double maxC = 0.0;
    std::pair<double, double> txy = {0, 0};

    for (int i = 4; i >= 1; --i) {
        int nArm = std::pow(2, i - 1);
        std::vector<std::vector<double>> pointsX, pointsY;

        // Create meshgrid
        for (int x = ix - nArm; x <= ix + nArm; ++x) {
            for (int y = iy - nArm; y <= iy + nArm; ++y) {
                pointsX.push_back(std::vector<double>(x));
                pointsY.push_back(std::vector<double>(y));
            }
        }

        auto evalResult = evalPoints(pointsX, pointsY, f, targetImg);
        maxC = evalResult.first;
        txy.first = pointsX[evalResult.second][0];
        txy.second = pointsY[evalResult.second][0];
    }

    if (maxC < thrC) {
        return {false, txy};
    }
    return {true, txy};
}

#include "../include/EvalPoints.h"
#include <cmath>

std::pair<double, int> evalPoints(const std::vector<std::vector<double>>& pointsX, 
                                   const std::vector<std::vector<double>>& pointsY, 
                                   const std::vector<std::vector<std::vector<double>>>& f, 
                                   const std::vector<std::vector<double>>& tarImg) {
    int nPoints = pointsX.size() * pointsY.size();
    std::vector<double> c(nPoints, 0.0);
    double maxC = 0.0;
    int maxIndex = 0;

    for (int i = 0; i < nPoints; ++i) {
        double ox = pointsX[i][0];
        double oy = pointsY[i][0];
        // Define g based on ox, oy (simple extraction from tarImg, needs bounds check)
        double g = tarImg[static_cast<int>(ox)][static_cast<int>(oy)];

        // Perform correlation calculation
        // Here, you would apply the normalized cross-correlation calculation
        double cc = /* Your correlation computation here */
        c[i] = 1 - cc;

        if (c[i] > maxC) {
            maxC = c[i];
            maxIndex = i;
        }
    }

    return {maxC, maxIndex};
}


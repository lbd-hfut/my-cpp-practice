#ifndef EVALPOINTS_H
#define EVALPOINTS_H

#include <vector>
#include <utility>

std::pair<double, int> evalPoints(const std::vector<std::vector<double>>& pointsX, 
                                   const std::vector<std::vector<double>>& pointsY, 
                                   const std::vector<std::vector<std::vector<double>>>& f, 
                                   const std::vector<std::vector<double>>& tarImg);

#endif // EVALPOINTS_H



#ifndef STEPSSEARCH_H
#define STEPSSEARCH_H

#include <vector>
#include <utility>

std::pair<bool, std::pair<double, double>> StepsSearch(const std::pair<double, double>& oxy, 
                                                         double thrC, 
                                                         const std::vector<std::vector<std::vector<double>>>& f, 
                                                         const std::vector<std::vector<double>>& targetImg);

#endif // STEPSSEARCH_H


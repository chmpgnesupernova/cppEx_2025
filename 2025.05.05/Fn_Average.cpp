#include <iostream>
#include <vector>


std::vector<double> Average(const std::vector<std::vector<int>>& vv) {
	std::vector<double> result_vector;
	double temp_sum = 0;
	for (auto& x : vv) {
		temp_sum = 0;
		for (auto& elem : x) {
			temp_sum += elem;
		}
		result_vector.push_back(temp_sum / x.size());
	}
	return result_vector;
}

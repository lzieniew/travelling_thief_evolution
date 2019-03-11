#pragma once

#include <memory>
#include <vector>
#include "Problem.hpp"
#include "Result.hpp"

class Evolution
{
public:
	Evolution(int pop_size, int gen, int px, int pm, int tour, std::string filename);
	void step();

private:
	int pop_size;
    int gen;
    float px;
    float pm;
    int tour;

    std::vector<std::shared_ptr<Result>> population;
    Problem problem;
};
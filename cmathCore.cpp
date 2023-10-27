#include <cmath>
#include <vector>
#include <algorithm>
#include <Csq/Core/Runtime/core.h>

// Trigonometric Functions
auto sine = [](Cell x) { return std::sin(x.floatVal); };
auto cosine = [](Cell x) { return std::cos(x.floatVal); };
auto tangent = [](Cell x) { return std::tan(x.floatVal); };
auto arcsine = [](Cell x) { return std::asin(x.floatVal); };
auto arccosine = [](Cell x) { return std::acos(x.floatVal); };
auto arctangent = [](Cell x) { return std::atan(x.floatVal); };
auto arctangent2 = [](Cell y, Cell x) { return std::atan2(y.floatVal, x.floatVal); };

// Exponential and Logarithmic Functions
auto exponential = [](Cell x) { return std::exp(x.floatVal); };
auto naturalLog = [](Cell x) { return std::log(x.floatVal); };
auto logBase10 = [](Cell x) { return std::log10(x.floatVal); };
auto logBase2 = [](Cell x) { return std::log2(x.floatVal); };
auto power = [](Cell x, Cell y) { return std::pow(x.floatVal, y.floatVal); };
auto squareRoot = [](Cell x) { return std::sqrt(x.floatVal); };

// Other Common Functions
auto floorValue = [](Cell x) { return std::floor(x.floatVal); };
auto ceilValue = [](Cell x) { return std::ceil(x.floatVal); };
auto absoluteValue = [](Cell x) { return std::abs(x.floatVal); };
auto roundValue = [](Cell x) { return std::round(x.floatVal); };
auto minValue = [](Cell x, Cell y) { return std::min(x.floatVal, y.floatVal); };
auto maxValue = [](Cell x, Cell y) { return std::max(x.floatVal, y.floatVal); };
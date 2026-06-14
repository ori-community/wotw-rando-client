#include <cmath>
#include <Common/math_utils.h>

// https://github.com/godotengine/godot/blob/d76c1d0e516fedc535a2e394ab780cac79203477/core/math/math_funcs.cpp#L95C30-L95C30
namespace common::math {
    double ease(double p_x, double p_c) {
        if (p_x < 0) {
            p_x = 0;
        } else if (p_x > 1.0) {
            p_x = 1.0;
        }
        if (p_c > 0) {
            if (p_c < 1.0) {
                return 1.0 - std::pow(1.0 - p_x, 1.0 / p_c);
            } else {
                return std::pow(p_x, p_c);
            }
        } else if (p_c < 0) {
            //inout ease

            if (p_x < 0.5) {
                return std::pow(p_x * 2.0, -p_c) * 0.5;
            } else {
                return (1.0 - std::pow(1.0 - (p_x - 0.5) * 2.0, -p_c)) * 0.5 + 0.5;
            }
        } else {
            return 0; // no ease (raw)
        }
    }
}

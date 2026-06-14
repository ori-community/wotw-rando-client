#pragma once

namespace common::math {
    /**
     * \brief https://docs.godotengine.org/en/4.2/classes/class_@globalscope.html#class-globalscope-method-ease
     * \param x x from 0.0 to 1.0
     * \param c curve
     * \return eased value
     */
    double ease(double x, double c);

    template <typename T>
    int sign(T val) {
      return (T(0) < val) - (val < T(0));
    }
}

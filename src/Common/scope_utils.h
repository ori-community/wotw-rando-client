#pragma once

#include <functional>

namespace common {
    template<typename T>
    struct ScopedSetter {
        T& variable;
        T previous_value;

        /** Sets variable to value */
        inline static const std::function<T(const T&, const T&)> OP_SET = [](const T&, const T& value) { return value; };

        /** Sets variable to variable || value */
        inline static const std::function<T(const bool&, const bool&)> OP_OR = [](const bool& variable, const bool& value) { return variable || value; };

        ScopedSetter(T& variable, T value, std::function<T(const T&, const T&)> op = OP_SET) :
            variable(variable), previous_value(variable) {
            variable = op(variable, value);
        }

        ScopedSetter(ScopedSetter const& other) = delete;

        ScopedSetter(ScopedSetter&& other) = delete;

        ~ScopedSetter() {
            variable = previous_value;
        }
    };

    template<typename T>
    struct ScopedCaller {
        T end;

        ScopedCaller(T start, T end) :
            end(end) {
            start();
        }

        ~ScopedCaller() {
            end();
        }
    };
}

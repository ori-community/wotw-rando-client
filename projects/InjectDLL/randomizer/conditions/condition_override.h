#pragma once

#include <optional>
#include <string_view>

namespace randomizer {
    namespace conditions {
        using condition_intercept = std::optional<bool> (*)(std::string_view path, void* obj);
        void register_condition_intercept(std::string_view path, condition_intercept callback);
    } // namespace conditions
} // namespace randomizer

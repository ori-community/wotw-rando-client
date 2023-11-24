#pragma once

#include <optional>
#include <string_view>

namespace randomizer {
    namespace conditions {
        enum class ConditionType {
            SeinAbilityCondition,
            HasAbilityCondition,
            UberStateConditionWrapper,
            VisibleOnWorldMap
        };

        using condition_intercept = std::optional<bool> (*)(std::string_view path, void* obj);
        void register_condition_intercept(ConditionType type, std::string_view path, condition_intercept callback);
    } // namespace conditions
} // namespace randomizer

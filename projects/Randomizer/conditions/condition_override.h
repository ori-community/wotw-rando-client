#pragma once

#include <functional>
#include <optional>
#include <string_view>

namespace randomizer {
    namespace conditions {
        enum class ConditionType {
            SeinAbilityCondition,
            HasAbilityCondition,
            UberStateConditionWrapper,
            VisibleOnWorldMap,
            PlayerInsideZoneChecker,
        };

        using condition_intercept = std::function<std::optional<bool>(std::string_view, void*)>;
        void register_condition_intercept(ConditionType type, std::string_view path, condition_intercept callback);
    } // namespace conditions
} // namespace randomizer

#pragma once

#include <string>
#include <string_view>

namespace randomizer {
    namespace conditions {
        using targetable_intercept = bool (*)(app::EntityTargetting* target);

        void register_targetable_intercept(std::string_view path, targetable_intercept intercept);
        void register_targetable(std::string_view path, app::AbilityType__Enum ability, bool value);
    } // namespace conditions
} // namespace randomizer

#pragma once

#include <Modloader/app/structs/AbilityType__Enum.h>

namespace ability_override {
    using ability_override = void (*)(app::AbilityType__Enum type);
    void register_override(app::AbilityType__Enum type, ability_override callback);
    void clear_override(app::AbilityType__Enum type);
} // namespace ability_override

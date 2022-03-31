#pragma once

namespace ability_override {
    using ability_override = void(*)(app::AbilityType__Enum type);
    void register_override(app::AbilityType__Enum type, ability_override callback);
    void clear_override(app::AbilityType__Enum type);
}

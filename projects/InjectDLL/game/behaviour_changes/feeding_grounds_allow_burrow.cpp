#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

namespace {
    IL2CPP_INTERCEPT(, SeinAbilityRestrictZone, app::SeinAbilityRestrictZoneMask__Enum, get_Mask, (app::SeinAbilityRestrictZone * this_ptr)) {
        auto mask = get_Mask(this_ptr);
        if (static_cast<int>(mask & app::SeinAbilityRestrictZoneMask__Enum_Dash) != 0) {
            auto* const game_object = il2cpp::unity::get_game_object(this_ptr);
            auto* const transform = il2cpp::unity::get_transform(game_object);
            auto* const parent = il2cpp::unity::get_parent(transform);
            if (il2cpp::unity::get_object_name(parent) == "startledRestrictionZone")
                mask = static_cast<app::SeinAbilityRestrictZoneMask__Enum>(mask & ~app::SeinAbilityRestrictZoneMask__Enum_Dash);
        }

        return mask;
    }
} // namespace

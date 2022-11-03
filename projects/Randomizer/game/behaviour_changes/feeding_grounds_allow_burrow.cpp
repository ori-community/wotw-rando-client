#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/SeinAbilityRestrictZone.h>

namespace {
    IL2CPP_INTERCEPT(SeinAbilityRestrictZone, app::SeinAbilityRestrictZoneMask__Enum, get_Mask, (app::SeinAbilityRestrictZone * this_ptr)) {
        auto mask = static_cast<int>(next::SeinAbilityRestrictZone::get_Mask(this_ptr));
        if (static_cast<int>(mask & static_cast<int>(app::SeinAbilityRestrictZoneMask__Enum::Dash)) != 0) {
            auto* const game_object = il2cpp::unity::get_game_object(this_ptr);
            auto* const transform = il2cpp::unity::get_transform(game_object);
            auto* const parent = il2cpp::unity::get_parent(transform);
            if (il2cpp::unity::get_object_name(parent) == "startledRestrictionZone")
                mask = mask & ~static_cast<int>(app::SeinAbilityRestrictZoneMask__Enum::Dash);
        }

        return static_cast<app::SeinAbilityRestrictZoneMask__Enum>(mask);
    }
} // namespace

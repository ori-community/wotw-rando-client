#include <constants.h>
#include <dll_main.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception.h>
#include <Il2CppModLoader/interception_macros.h>

namespace
{
    bool tempSwitch = false;
    IL2CPP_INTERCEPT(, SeinFeatherFlap, void, EnterAttack, (app::SeinFeatherFlap* this_ptr)) {
        if (!has_ability(app::AbilityType__Enum_Glide))
        {
            tempSwitch = true;
            set_ability(app::AbilityType__Enum_Glide, true);
        }

        SeinFeatherFlap::EnterAttack(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinFeatherFlap, void, ExitAttack, (app::SeinFeatherFlap* this_ptr)) {
        SeinFeatherFlap::ExitAttack(this_ptr);
        if (tempSwitch)
        {
            set_ability(app::AbilityType__Enum_Glide, false);
            tempSwitch = false;
        }
    }
}

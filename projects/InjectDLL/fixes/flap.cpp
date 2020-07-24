#include <constants.h>
#include <dll_main.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception.h>
#include <Il2CppModLoader/interception_macros.h>

namespace
{
    IL2CPP_INTERCEPT(, SeinFeatherFlap, void, EnterAttack, (app::SeinFeatherFlap* this_ptr)) {
        if (has_ability(app::AbilityType__Enum_Glide))
		    SeinFeatherFlap::EnterAttack(this_ptr);
	    else
        {
            set_ability(app::AbilityType__Enum_Glide, true);
            SeinFeatherFlap::EnterAttack(this_ptr);
            set_ability(app::AbilityType__Enum_Glide, false);
	    }
    }
}

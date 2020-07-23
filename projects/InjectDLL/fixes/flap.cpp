#include <constants.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception.h>
#include <Il2CppModLoader/interception_macros.h>

namespace
{
    IL2CPP_BINDING(, PlayerAbilities, bool, HasAbility, (app::PlayerAbilities* this_ptr, uint8_t ability));
    IL2CPP_BINDING(, PlayerAbilities, void, SetAbility, (app::PlayerAbilities* this_ptr, uint8_t ability, bool value));
    IL2CPP_INTERCEPT(, SeinFeatherFlap, void, EnterAttack, (app::SeinFeatherFlap* this_ptr)) {
        auto abilities = this_ptr->fields._.m_sein->fields.PlayerAbilities;
        if (PlayerAbilities::HasAbility(abilities, app::AbilityType__Enum_Glide))
        {
		    SeinFeatherFlap::EnterAttack(this_ptr);
        }
	    else
        {
            PlayerAbilities::SetAbility(abilities, app::AbilityType__Enum_Glide, true);
            SeinFeatherFlap::EnterAttack(this_ptr);
            PlayerAbilities::SetAbility(abilities, app::AbilityType__Enum_Glide, false);
	    }
    }
}

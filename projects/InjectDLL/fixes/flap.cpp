#include <interception.h>
#include <interception_macros.h>
#include <common.h>
#include <constants.h>
#include <fixes/dash.h>

IL2CPP_INTERCEPT(, SeinFeatherFlap, void, EnterAttack, (app::SeinFeatherFlap* this_ptr)) {
    auto abilities = this_ptr->fields._.m_sein->fields.PlayerAbilities;
    if (PlayerAbilities_HasAbility(abilities, app::AbilityType__Enum_Glide))
    {
		SeinFeatherFlap_EnterAttack(this_ptr);
    }
	else
    {
        PlayerAbilities_SetAbility(abilities, app::AbilityType__Enum_Glide, true);
        SeinFeatherFlap_EnterAttack(this_ptr);
        PlayerAbilities_SetAbility(abilities, app::AbilityType__Enum_Glide, false);
	}
}

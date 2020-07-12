#include <interception.h>
#include <interception_macros.h>
#include <common.h>
#include <constants.h>
#include <fixes/dash.h>

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

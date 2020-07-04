#include <interception.h>
#include <interception_macros.h>
#include <common.h>
#include <constants.h>
#include <fixes/dash.h>

INTERCEPT(17314976, void, SeinFeatherFlap__EnterAttack, (app::SeinFeatherFlap* this_ptr)) {
    auto abilities = this_ptr->fields._.m_sein->fields.PlayerAbilities;
    if (PlayerAbilities__HasAbility(abilities, GLIDE))
    {
		SeinFeatherFlap__EnterAttack(this_ptr);
    }
	else
    {
        PlayerAbilities__SetAbility(abilities, GLIDE, true);
        SeinFeatherFlap__EnterAttack(this_ptr);
        PlayerAbilities__SetAbility(abilities, GLIDE, false);
	}

}

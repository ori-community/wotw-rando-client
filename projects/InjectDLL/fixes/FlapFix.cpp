#include <pch.h>
#include <interception.h>
#include <interceptionMacros.h>
#include <common.h>
#include <fixes/dashFixes.h>

const uint8_t glide = 14;
INTERCEPT(17314976, void, SeinFeatherFlap__EnterAttack, (SeinFeatherFlap_o* this_ptr), {
    auto abilities = this_ptr->CharacterState_m_sein->PlayerAbilities;
    if(PlayerAbilities__HasAbility(abilities, glide)) {
		SeinFeatherFlap__EnterAttack(this_ptr);
	} else {
        PlayerAbilities__SetAbility(abilities, glide, true);
        SeinFeatherFlap__EnterAttack(this_ptr);
        PlayerAbilities__SetAbility(abilities, glide, false);
	}

})
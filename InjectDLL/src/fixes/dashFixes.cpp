#include "pch.h"
#include "interception.h"
#include "interceptionMacros.h"
#include "dllmain.h"
#include "dashFixes.h"

bool hasRealDash = false;
BINDING(8518912, bool, SeinDashNew__ShouldDig, (SeinDashNew_o* this_ptr))
BINDING(8520128, bool, SeinDashNew__ShouldSwim, (SeinDashNew_o* this_ptr))
BINDING(10912384, bool, SeinCharacter__HasAbility, (SeinCharacter_o* this_ptr, uint8_t abilityType))
INTERCEPT(0x81CB00, bool, SeinDashNew__get_CanDash, (SeinDashNew_o* this_ptr), {
	auto result = SeinDashNew__get_CanDash(this_ptr);
	if(!hasRealDash)
		result = result & (SeinDashNew__ShouldDig(this_ptr) || SeinDashNew__ShouldSwim(this_ptr));
	
	return result;
})

const uint8_t WaterDash = 104;
const uint8_t Digging = 101;
const uint8_t DashNew = 102;
BINDING(18797120, bool, PlayerAbilities__HasAbility, (PlayerAbilities_o* this_ptr, uint8_t ability))
BINDING(18796704, void, PlayerAbilities__SetAbility, (PlayerAbilities_o* this_ptr, uint8_t ability, bool value))

BINDING(16542592, bool, Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility, (Moon_uberSerializationWisp_PlayerUberStateAbilities_o* this_ptr, uint8_t ability))
INTERCEPT(16542224, void, Moon_uberSerializationWisp_PlayerUberStateAbilities__SetAbility, (Moon_uberSerializationWisp_PlayerUberStateAbilities_o* this_ptr, uint8_t ability, bool value), {
	if(ability == DashNew) {
		hasRealDash = value;
		log("uberstate, setting hasRealDash: " + std::to_string(hasRealDash));
	}
	Moon_uberSerializationWisp_PlayerUberStateAbilities__SetAbility(this_ptr, ability, value);
	if(ability == WaterDash || ability == Digging || ability == DashNew) {
		updateDashState(this_ptr);
	}
})

void updateDashState(Moon_uberSerializationWisp_PlayerUberStateAbilities_o* this_ptr){
	if(!Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, DashNew) && (Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, Digging) || Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, WaterDash)))	{
		Moon_uberSerializationWisp_PlayerUberStateAbilities__SetAbility(this_ptr, DashNew, true);
	} else if(Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, DashNew) && !Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, Digging) && !Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, WaterDash) && !hasRealDash) {
		Moon_uberSerializationWisp_PlayerUberStateAbilities__SetAbility(this_ptr, DashNew, true);
	}
}

INTERCEPT(0xFC7320, void, Moon_uberSerializationWisp_PlayerUberStateAbilities__Save, (Moon_uberSerializationWisp_PlayerUberStateAbilities_o* this_ptr, UberStateArchive_o* archive, Moon_uberSerializationWisp_PlayerUberStateAbilities_o* abilities), {
	debug("saving dash as: " + std::to_string(hasRealDash));
	Moon_uberSerializationWisp_PlayerUberStateAbilities__SetAbility(this_ptr, DashNew, hasRealDash);
	
	Moon_uberSerializationWisp_PlayerUberStateAbilities__Save(this_ptr, archive, abilities);
	updateDashState(this_ptr);
})

INTERCEPT(16545264, void, Moon_uberSerializationWisp_PlayerUberStateAbilities__Load, (Moon_uberSerializationWisp_PlayerUberStateAbilities_o* this_ptr, UberStateArchive_o* archive, int32_t storeVersion), {
	Moon_uberSerializationWisp_PlayerUberStateAbilities__Load(this_ptr, archive, storeVersion);
	hasRealDash = Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, DashNew);
	debug("load, setting hasRealDash: " + std::to_string(hasRealDash));
	updateDashState(this_ptr);
})

INTERCEPT(0xAEE780, void, GeneralDebugMenuPage__SetAbility, (GeneralDebugMenuPage_o* this_ptr, uint8_t ability, bool value), {
	GeneralDebugMenuPage__SetAbility(this_ptr, ability, value);
	if(ability == DashNew) {
		hasRealDash = value;
		debug("debug menu, setting hasRealDash: " + std::to_string(hasRealDash));
	}
})
INTERCEPT(0xAEE860, bool, GeneralDebugMenuPage__GetAbility, (GeneralDebugMenuPage_o* this_ptr, uint8_t abilityType), {
	if(abilityType == DashNew)
		return hasRealDash;

	return GeneralDebugMenuPage__GetAbility(this_ptr, abilityType);
})
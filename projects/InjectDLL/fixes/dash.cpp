#include <pch.h>
#include <constants.h>
#include <interception.h>
#include <interception_macros.h>
#include <dll_main.h>
#include <fixes/dash.h>

BINDING(9327616, bool, SeinDashNew__ShouldDig, (SeinDashNew_o* this_ptr))
BINDING(9329040, bool, SeinDashNew__ShouldSwim, (SeinDashNew_o* this_ptr))
BINDING(10970320, bool, SeinCharacter__HasAbility, (SeinCharacter_o* this_ptr, uint8_t abilityType))
BINDING(18114752, bool, PlayerAbilities__HasAbility, (PlayerAbilities_o* this_ptr, uint8_t ability))
BINDING(18114336, void, PlayerAbilities__SetAbility, (PlayerAbilities_o* this_ptr, uint8_t ability, bool value))
BINDING(17855296, bool, Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility, (Moon_uberSerializationWisp_PlayerUberStateAbilities_o* this_ptr, uint8_t ability))

namespace
{
	void update_dash_state(Moon_uberSerializationWisp_PlayerUberStateAbilities_o* this_ptr);
}

INTERCEPT(17854928, void, Moon_uberSerializationWisp_PlayerUberStateAbilities__SetAbility, (Moon_uberSerializationWisp_PlayerUberStateAbilities_o* this_ptr, uint8_t ability, bool value), {
	Moon_uberSerializationWisp_PlayerUberStateAbilities__SetAbility(this_ptr, ability, value);
	switch (ability)
	{
	case WATER_DASH:
	case DIGGING:
	case DASH_NEW:
		debug("there be update_dash_state here");
		update_dash_state(this_ptr);
		break;
	default:
		break;
	}
})

namespace
{
	bool has_dash()
	{
		return csharp_lib->call<bool, uint8_t>("GetAbility", DASH_NEW);
	}

	void update_dash_state(Moon_uberSerializationWisp_PlayerUberStateAbilities_o* this_ptr) {
		if (!Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, DASH_NEW) &&
			(Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, DIGGING) ||
				Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, WATER_DASH)))
		{
			debug("Updating dash state to true");
			Moon_uberSerializationWisp_PlayerUberStateAbilities__SetAbility(this_ptr, DASH_NEW, true);
		}
		else if (Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, DASH_NEW) &&
			!Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, DIGGING) &&
			!Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, WATER_DASH) &&
			!has_dash())
		{
			debug("Updating dash state to false");
			Moon_uberSerializationWisp_PlayerUberStateAbilities__SetAbility(this_ptr, DASH_NEW, false);
		}
	}
}

INTERCEPT(9314752, bool, SeinDashNew__get_CanDash, (SeinDashNew_o* this_ptr), {
	auto result = SeinDashNew__get_CanDash(this_ptr);
	if(!has_dash())
		result = result && (SeinDashNew__ShouldDig(this_ptr) || SeinDashNew__ShouldSwim(this_ptr));
	
	return result;
})

INTERCEPT(17857248, void, Moon_uberSerializationWisp_PlayerUberStateAbilities__Save, (Moon_uberSerializationWisp_PlayerUberStateAbilities_o* this_ptr, UberStateArchive_o* archive, Moon_uberSerializationWisp_PlayerUberStateAbilities_o* abilities), {
    bool has_real_dash = has_dash();
    if(Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, DASH_NEW) && !has_real_dash)
    {
        Moon_uberSerializationWisp_PlayerUberStateAbilities__SetAbility(this_ptr, DASH_NEW, has_real_dash);
        Moon_uberSerializationWisp_PlayerUberStateAbilities__SetAbility(abilities, DASH_NEW, has_real_dash);
    }

	Moon_uberSerializationWisp_PlayerUberStateAbilities__Save(this_ptr, archive, abilities);
	update_dash_state(this_ptr);
})

INTERCEPT(17857968, void, Moon_uberSerializationWisp_PlayerUberStateAbilities__Load, (Moon_uberSerializationWisp_PlayerUberStateAbilities_o* this_ptr, UberStateArchive_o* archive, int32_t storeVersion), {
	Moon_uberSerializationWisp_PlayerUberStateAbilities__Load(this_ptr, archive, storeVersion);
	update_dash_state(this_ptr);
})

INTERCEPT(4247504, void, GeneralDebugMenuPage__SetAbility, (GeneralDebugMenuPage_o* this_ptr, uint8_t ability, bool value), {
	GeneralDebugMenuPage__SetAbility(this_ptr, ability, value);
	if(ability == DASH_NEW)
	{
        csharp_lib->call<void, uint8_t, bool>("SetAbility", DASH_NEW, value);
        debug("debug menu, setting has_real_dash: " + std::to_string(value));
	}
})

INTERCEPT(4247728, bool, GeneralDebugMenuPage__GetAbility, (GeneralDebugMenuPage_o* this_ptr, uint8_t abilityType), {
	if(abilityType == DASH_NEW)
		return has_dash();

	return GeneralDebugMenuPage__GetAbility(this_ptr, abilityType);
})

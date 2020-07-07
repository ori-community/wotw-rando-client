#include <constants.h>
#include <interception.h>
#include <interception_macros.h>
#include <dll_main.h>
#include <fixes/dash.h>

#include <csharp_bridge.h>

BINDING(9327616, bool, SeinDashNew__ShouldDig, (app::SeinDashNew* this_ptr))
BINDING(9329040, bool, SeinDashNew__ShouldSwim, (app::SeinDashNew* this_ptr))
BINDING(10970320, bool, SeinCharacter__HasAbility, (app::SeinCharacter* this_ptr, uint8_t abilityType))
BINDING(18114752, bool, PlayerAbilities__HasAbility, (app::PlayerAbilities* this_ptr, uint8_t ability))
BINDING(18114336, void, PlayerAbilities__SetAbility, (app::PlayerAbilities* this_ptr, uint8_t ability, bool value))
BINDING(17855296, bool, Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility, (app::PlayerUberStateAbilities* this_ptr, uint8_t ability))

namespace
{
	void update_dash_state(app::PlayerUberStateAbilities* this_ptr);
}

INTERCEPT(17854928, void, Moon_uberSerializationWisp_PlayerUberStateAbilities__SetAbility, (app::PlayerUberStateAbilities* this_ptr, uint8_t ability, bool value)) {
	Moon_uberSerializationWisp_PlayerUberStateAbilities__SetAbility(this_ptr, ability, value);
	switch (ability)
	{
	case app::AbilityType__Enum_WaterDash:
	case app::AbilityType__Enum_Digging:
	case app::AbilityType__Enum_DashNew:
        trace(MessageType::Debug, 5, "abilities", "there be update_dash_state here");
		update_dash_state(this_ptr);
		break;
	default:
		break;
	}
}

namespace
{
	bool has_dash()
	{
		return csharp_bridge::get_ability(app::AbilityType__Enum_DashNew);
	}

	void update_dash_state(app::PlayerUberStateAbilities* this_ptr) {
        if (!Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, app::AbilityType__Enum_DashNew) &&
            (Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, app::AbilityType__Enum_Digging) ||
				Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, app::AbilityType__Enum_WaterDash)))
        {
            trace(MessageType::Debug, 5, "abilities", "Updating dash state to true");
			Moon_uberSerializationWisp_PlayerUberStateAbilities__SetAbility(this_ptr, app::AbilityType__Enum_DashNew, true);
		}
		else if (Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, app::AbilityType__Enum_DashNew) &&
			!Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, app::AbilityType__Enum_Digging) &&
			!Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, app::AbilityType__Enum_WaterDash) &&
			!has_dash())
        {
            trace(MessageType::Debug, 5, "abilities", "Updating dash state to false");
			Moon_uberSerializationWisp_PlayerUberStateAbilities__SetAbility(this_ptr, app::AbilityType__Enum_DashNew, false);
		}
	}
}

INTERCEPT(9314752, bool, SeinDashNew__get_CanDash, (app::SeinDashNew* this_ptr)) {
	auto result = SeinDashNew__get_CanDash(this_ptr);
	if(!has_dash())
		result = result && (SeinDashNew__ShouldDig(this_ptr) || SeinDashNew__ShouldSwim(this_ptr));
	return result;
}

INTERCEPT(17857248, void, Moon_uberSerializationWisp_PlayerUberStateAbilities__Save, (app::PlayerUberStateAbilities* this_ptr, app::UberStateArchive* archive, app::PlayerUberStateAbilities* abilities)) {
    bool has_real_dash = has_dash();
    if(Moon_uberSerializationWisp_PlayerUberStateAbilities__HasAbility(this_ptr, app::AbilityType__Enum_DashNew) && !has_real_dash)
    {
        Moon_uberSerializationWisp_PlayerUberStateAbilities__SetAbility(this_ptr, app::AbilityType__Enum_DashNew, has_real_dash);
        Moon_uberSerializationWisp_PlayerUberStateAbilities__SetAbility(abilities, app::AbilityType__Enum_DashNew, has_real_dash);
    }

	Moon_uberSerializationWisp_PlayerUberStateAbilities__Save(this_ptr, archive, abilities);
	update_dash_state(this_ptr);
}

INTERCEPT(17857968, void, Moon_uberSerializationWisp_PlayerUberStateAbilities__Load, (app::PlayerUberStateAbilities* this_ptr, app::UberStateArchive* archive, int32_t storeVersion)) {
	Moon_uberSerializationWisp_PlayerUberStateAbilities__Load(this_ptr, archive, storeVersion);
	update_dash_state(this_ptr);
}

INTERCEPT(4247504, void, GeneralDebugMenuPage__SetAbility, (app::GeneralDebugMenuPage* this_ptr, app::AbilityType__Enum ability, bool value)) {
  csharp_bridge::set_ability(ability, value);
  GeneralDebugMenuPage__SetAbility(this_ptr, ability, value);
}

INTERCEPT(4247728, bool, GeneralDebugMenuPage__GetAbility, (app::GeneralDebugMenuPage* this_ptr, app::AbilityType__Enum abilityType)) {
	if(abilityType == app::AbilityType__Enum_DashNew)
		return has_dash();

	return GeneralDebugMenuPage__GetAbility(this_ptr, abilityType);
}

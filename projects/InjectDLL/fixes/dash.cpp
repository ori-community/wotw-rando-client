#include <constants.h>
#include <interception.h>
#include <interception_macros.h>
#include <dll_main.h>
#include <fixes/dash.h>

#include <csharp_bridge.h>

IL2CPP_BINDING(, SeinDashNew, bool, ShouldDig, (app::SeinDashNew* this_ptr))
IL2CPP_BINDING(, SeinDashNew, bool, ShouldSwim, (app::SeinDashNew* this_ptr))
IL2CPP_BINDING(, SeinCharacter, bool, HasAbility, (app::SeinCharacter* this_ptr, uint8_t abilityType))
IL2CPP_BINDING(, PlayerAbilities, bool, HasAbility, (app::PlayerAbilities* this_ptr, uint8_t ability))
IL2CPP_BINDING(, PlayerAbilities, void, SetAbility, (app::PlayerAbilities* this_ptr, uint8_t ability, bool value))
IL2CPP_BINDING(Moon.uberSerializationWisp, PlayerUberStateAbilities, bool, HasAbility, (app::PlayerUberStateAbilities* this_ptr, uint8_t ability))

namespace
{
	void update_dash_state(app::PlayerUberStateAbilities* this_ptr);
}

IL2CPP_INTERCEPT(Moon.uberSerializationWisp, PlayerUberStateAbilities, void, SetAbility, (app::PlayerUberStateAbilities* this_ptr, uint8_t ability, bool value)) {
	PlayerUberStateAbilities::SetAbility(this_ptr, ability, value);
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
        if (!PlayerUberStateAbilities::HasAbility(this_ptr, app::AbilityType__Enum_DashNew) &&
            (PlayerUberStateAbilities::HasAbility(this_ptr, app::AbilityType__Enum_Digging) ||
				PlayerUberStateAbilities::HasAbility(this_ptr, app::AbilityType__Enum_WaterDash)))
        {
            trace(MessageType::Debug, 5, "abilities", "Updating dash state to true");
			PlayerUberStateAbilities::SetAbility(this_ptr, app::AbilityType__Enum_DashNew, true);
		}
		else if (PlayerUberStateAbilities::HasAbility(this_ptr, app::AbilityType__Enum_DashNew) &&
			!PlayerUberStateAbilities::HasAbility(this_ptr, app::AbilityType__Enum_Digging) &&
			!PlayerUberStateAbilities::HasAbility(this_ptr, app::AbilityType__Enum_WaterDash) &&
			!has_dash())
        {
            trace(MessageType::Debug, 5, "abilities", "Updating dash state to false");
			PlayerUberStateAbilities::SetAbility(this_ptr, app::AbilityType__Enum_DashNew, false);
		}
	}
}

IL2CPP_INTERCEPT(, SeinDashNew, bool, get_CanDash, (app::SeinDashNew* this_ptr)) {
	auto result = SeinDashNew::get_CanDash(this_ptr);
	if(!has_dash())
		result = result && (SeinDashNew::ShouldDig(this_ptr) || SeinDashNew::ShouldSwim(this_ptr));
	return result;
}

IL2CPP_INTERCEPT(Moon.uberSerializationWisp, PlayerUberStateAbilities, void, Save, (app::PlayerUberStateAbilities* this_ptr, app::UberStateArchive* archive, app::PlayerUberStateAbilities* abilities)) {
    bool has_real_dash = has_dash();
    if(PlayerUberStateAbilities::HasAbility(this_ptr, app::AbilityType__Enum_DashNew) && !has_real_dash)
    {
        PlayerUberStateAbilities::SetAbility(this_ptr, app::AbilityType__Enum_DashNew, has_real_dash);
        PlayerUberStateAbilities::SetAbility(abilities, app::AbilityType__Enum_DashNew, has_real_dash);
    }

	PlayerUberStateAbilities::Save(this_ptr, archive, abilities);
	update_dash_state(this_ptr);
}

IL2CPP_INTERCEPT(Moon.uberSerializationWisp, PlayerUberStateAbilities, void, Load, (app::PlayerUberStateAbilities* this_ptr, app::UberStateArchive* archive, int32_t storeVersion)) {
	PlayerUberStateAbilities::Load(this_ptr, archive, storeVersion);
	update_dash_state(this_ptr);
}

IL2CPP_INTERCEPT(, GeneralDebugMenuPage, void, SetAbility, (app::GeneralDebugMenuPage* this_ptr, app::AbilityType__Enum ability, bool value)) {
  csharp_bridge::set_ability(ability, value);
  GeneralDebugMenuPage::SetAbility(this_ptr, ability, value);
}

IL2CPP_INTERCEPT(, GeneralDebugMenuPage, bool, GetAbility, (app::GeneralDebugMenuPage* this_ptr, app::AbilityType__Enum abilityType)) {
	if(abilityType == app::AbilityType__Enum_DashNew)
		return has_dash();

	return GeneralDebugMenuPage::GetAbility(this_ptr, abilityType);
}

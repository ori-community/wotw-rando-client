#include <Randomizer/constants.h>

#include <Core/api/uber_states/uber_state.h>

#include <Modloader/app/methods/GeneralDebugMenuPage.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/PlayerUberStateAbilities.h>
#include <Modloader/app/methods/SeinDashNew.h>
#include <Modloader/interception.h>

using namespace app::classes;

namespace {
    core::api::uber_states::UberState dash_state(UberStateGroup::Skills, app::AbilityType__Enum::DashNew);

    void update_dash_state(app::PlayerUberStateAbilities* this_ptr);

    IL2CPP_INTERCEPT(Moon::uberSerializationWisp::PlayerUberStateAbilities, void, SetAbility, (app::PlayerUberStateAbilities * this_ptr, app::AbilityType__Enum ability, bool value)) {
        next::Moon::uberSerializationWisp::PlayerUberStateAbilities::SetAbility(this_ptr, ability, value);
        switch (ability) {
            case app::AbilityType__Enum::WaterDash:
            case app::AbilityType__Enum::Digging:
            case app::AbilityType__Enum::DashNew:
                update_dash_state(this_ptr);
                break;
            default:
                break;
        }
    }

    bool has_dash() {
        return dash_state.get<bool>();
    }

    void update_dash_state(app::PlayerUberStateAbilities* this_ptr) {
        using namespace Moon::uberSerializationWisp;

        if (!PlayerUberStateAbilities::HasAbility(this_ptr, app::AbilityType__Enum::DashNew) &&
            (PlayerUberStateAbilities::HasAbility(this_ptr, app::AbilityType__Enum::Digging) ||
             PlayerUberStateAbilities::HasAbility(this_ptr, app::AbilityType__Enum::WaterDash))) {
            PlayerUberStateAbilities::SetAbility(this_ptr, app::AbilityType__Enum::DashNew, true);
        } else if (PlayerUberStateAbilities::HasAbility(this_ptr, app::AbilityType__Enum::DashNew) && !PlayerUberStateAbilities::HasAbility(this_ptr, app::AbilityType__Enum::Digging) && !PlayerUberStateAbilities::HasAbility(this_ptr, app::AbilityType__Enum::WaterDash) && !has_dash()) {
            PlayerUberStateAbilities::SetAbility(this_ptr, app::AbilityType__Enum::DashNew, false);
        }
    }

    IL2CPP_INTERCEPT(SeinDashNew, bool, get_CanDash, (app::SeinDashNew * this_ptr)) {
        auto result = next::SeinDashNew::get_CanDash(this_ptr);
        if (!has_dash())
            result = result && (SeinDashNew::ShouldDig(this_ptr) || SeinDashNew::ShouldSwim(this_ptr));
        return result;
    }

    IL2CPP_INTERCEPT(Moon::uberSerializationWisp::PlayerUberStateAbilities, void, Save, (app::PlayerUberStateAbilities * this_ptr, app::UberStateArchive* archive, app::PlayerUberStateAbilities* abilities)) {
        bool has_real_dash = has_dash();
        if (Moon::uberSerializationWisp::PlayerUberStateAbilities::HasAbility(this_ptr, app::AbilityType__Enum::DashNew) && !has_real_dash) {
            Moon::uberSerializationWisp::PlayerUberStateAbilities::SetAbility(this_ptr, app::AbilityType__Enum::DashNew, has_real_dash);
            Moon::uberSerializationWisp::PlayerUberStateAbilities::SetAbility(abilities, app::AbilityType__Enum::DashNew, has_real_dash);
        }

        next::Moon::uberSerializationWisp::PlayerUberStateAbilities::Save(this_ptr, archive, abilities);
        update_dash_state(this_ptr);
    }

    IL2CPP_INTERCEPT(Moon::uberSerializationWisp::PlayerUberStateAbilities, void, Load, (app::PlayerUberStateAbilities * this_ptr, app::UberStateArchive* archive, int32_t storeVersion)) {
        next::Moon::uberSerializationWisp::PlayerUberStateAbilities::Load(this_ptr, archive, storeVersion);
        update_dash_state(this_ptr);
    }

    IL2CPP_INTERCEPT(GeneralDebugMenuPage, void, SetAbility, (app::GeneralDebugMenuPage * this_ptr, app::AbilityType__Enum ability, bool value)) {
        dash_state.set(value ? 1.0 : 0.0);
        next::GeneralDebugMenuPage::SetAbility(this_ptr, ability, value);
    }

    IL2CPP_INTERCEPT(GeneralDebugMenuPage, bool, GetAbility, (app::GeneralDebugMenuPage * this_ptr, app::AbilityType__Enum abilityType)) {
        if (abilityType == app::AbilityType__Enum::DashNew)
            return has_dash();

        return next::GeneralDebugMenuPage::GetAbility(this_ptr, abilityType);
    }
} // namespace

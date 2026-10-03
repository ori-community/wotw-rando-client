#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/GetAbilityOnCondition.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/DesiredPlayerAbilityState.h>
#include <Modloader/app/methods/RaceSystem.h>
#include <Modloader/app/types/RaceSystem.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/conditions/new_setup_state_override.h>
#include <Randomizer/constants.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


namespace {
    using namespace app::classes;

    IL2CPP_INTERCEPT(bool, Moon::uberSerializationWisp::DesiredPlayerAbilityState, IsFulfilled, app::DesiredPlayerAbilityState* this_ptr) {
        switch (this_ptr->fields.Ability) {
            case app::AbilityType__Enum::Bash:
                return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::Bash)>().get();
            case app::AbilityType__Enum::DoubleJump:
                return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::DoubleJump)>().get();
            case app::AbilityType__Enum::ChargeJump:
                return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::ChargeJump)>().get();
            case app::AbilityType__Enum::Grenade:
                return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::Grenade)>().get();
            case app::AbilityType__Enum::SpiritLeash:
                return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::SpiritLeash)>().get();
            case app::AbilityType__Enum::GlowSpell:
                return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::GlowSpell)>().get();
            case app::AbilityType__Enum::MeditateSpell:
                return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::MeditateSpell)>().get();
            case app::AbilityType__Enum::Bow:
                return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::Bow)>().get();
            case app::AbilityType__Enum::Sword:
                return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::Sword)>().get();
            case app::AbilityType__Enum::Digging:
                return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::Digging)>().get();
            case app::AbilityType__Enum::DashNew:
                return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::DashNew)>().get();
            case app::AbilityType__Enum::WaterDash:
                return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::WaterDash)>().get();
            case app::AbilityType__Enum::DamageUpgradeA:
                return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::DamageUpgradeA)>().get();
            case app::AbilityType__Enum::DamageUpgradeB:
                return randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::DamageUpgradeB)>().get();
            default:
                return next::Moon::uberSerializationWisp::DesiredPlayerAbilityState::IsFulfilled(this_ptr);
        }
    }

    IL2CPP_INTERCEPT(void, GetAbilityOnCondition, AssignAbility, app::GetAbilityOnCondition* this_ptr) {
        switch (this_ptr->fields.Ability->fields.Ability) {
            case app::AbilityType__Enum::Bash:
                randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::Bash)>().set(true);
                break;
            case app::AbilityType__Enum::DoubleJump:
                randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::DoubleJump)>().set(true);
                break;
            case app::AbilityType__Enum::ChargeJump:
                randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::ChargeJump)>().set(true);
                break;
            case app::AbilityType__Enum::Grenade:
                randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::Grenade)>().set(true);
                break;
            case app::AbilityType__Enum::SpiritLeash:
                randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::SpiritLeash)>().set(true);
                break;
            case app::AbilityType__Enum::GlowSpell:
                randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::GlowSpell)>().set(true);
                break;
            case app::AbilityType__Enum::MeditateSpell:
                randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::MeditateSpell)>().set(true);
                break;
            case app::AbilityType__Enum::Bow:
                randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::Bow)>().set(true);
                break;
            case app::AbilityType__Enum::Sword:
                randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::Sword)>().set(true);
                break;
            case app::AbilityType__Enum::Digging:
                randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::Digging)>().set(true);
                break;
            case app::AbilityType__Enum::DashNew:
                randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::DashNew)>().set(true);
                break;
            case app::AbilityType__Enum::WaterDash:
                randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::WaterDash)>().set(true);
                break;
            case app::AbilityType__Enum::DamageUpgradeA:
                randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::DamageUpgradeA)>().set(true);
                break;
            case app::AbilityType__Enum::DamageUpgradeB:
                randomizer::uber_states::state<"trees", static_cast<int>(app::AbilityType__Enum::DamageUpgradeB)>().set(true);
                break;
            default:
                return;
        }

        core::api::game::player::refill_health();
        core::api::game::player::refill_energy();
        core::api::uber_states::apply_all();
    }

    constexpr auto HAS_ABILITY = -239885777;
    constexpr auto DOES_NOT_HAVE_ABILITY = -934455551;

    template<typename BOOLEAN_UBER_STATE_T> requires core::api::uber_states::ReadableUberState<bool, BOOLEAN_UBER_STATE_T>
    randomizer::conditions::new_setup_state_controller_intercept_fn uber_state_setup_state_intercept(BOOLEAN_UBER_STATE_T& state) {
        return [&](auto, auto, auto) {
            return state.get() ? HAS_ABILITY : DOES_NOT_HAVE_ABILITY;
        };
    }
} // namespace

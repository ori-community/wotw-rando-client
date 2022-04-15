#include <uber_states/uber_state_interface.h>

#include <game/player.h>

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;

namespace
{
    uber_states::UberState hammer_speed(UberStateGroup::RandoUpgrade, 0);

    IL2CPP_INTERCEPT(, MeleeComboMoveHammerSimple, void, EnterMove, (app::MeleeComboMoveHammerSimple* this_ptr)) {
        auto hammer_speed_multiplier = hammer_speed.get<float>();
        if (this_ptr->fields.PrepareAttackTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.PrepareAttackTimeline, "SetTimeScale", &hammer_speed_multiplier);
        if (this_ptr->fields.AttackTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.AttackTimeline, "SetTimeScale", &hammer_speed_multiplier);

        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammer, void, EnterMove, (app::MeleeComboMoveHammer* this_ptr)) {
        auto hammer_speed_multiplier = hammer_speed.get<float>();
        if (this_ptr->fields.PrepareTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.PrepareTimeline, "SetTimeScale", &hammer_speed_multiplier);
        if (this_ptr->fields.AttackTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.AttackTimeline, "SetTimeScale", &hammer_speed_multiplier);
        if (this_ptr->fields.ChargeTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.ChargeTimeline, "SetTimeScale", &hammer_speed_multiplier);

        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammerChargeable, void, EnterMove, (app::MeleeComboMoveHammerChargeable* this_ptr)) {
        auto hammer_speed_multiplier = hammer_speed.get<float>();
        if (this_ptr->fields.PrepareTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.PrepareTimeline, "SetTimeScale", &hammer_speed_multiplier);
        if (this_ptr->fields.ChargeHoldTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.ChargeHoldTimeline, "SetTimeScale", &hammer_speed_multiplier);
        if (this_ptr->fields.ChargedAttackTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.ChargedAttackTimeline, "SetTimeScale", &hammer_speed_multiplier);
        if (this_ptr->fields.NormalAttackTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.NormalAttackTimeline, "SetTimeScale", &hammer_speed_multiplier);

        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammerStomp, void, EnterStartState, (app::MeleeComboMoveHammerStomp* this_ptr)) {
        auto hammer_speed_multiplier = hammer_speed.get<float>();
        if (this_ptr->fields.LoopTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.LoopTimeline, "SetTimeScale", &hammer_speed_multiplier);
        if (this_ptr->fields.StartTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.StartTimeline, "SetTimeScale", &hammer_speed_multiplier);
        if (this_ptr->fields.EndTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.EndTimeline, "SetTimeScale", &hammer_speed_multiplier);
        if (this_ptr->fields.StartShortTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.StartShortTimeline, "SetTimeScale", &hammer_speed_multiplier);
        if (this_ptr->fields.EndShortTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.EndShortTimeline, "SetTimeScale", &hammer_speed_multiplier);

        EnterStartState(this_ptr);
    }
}

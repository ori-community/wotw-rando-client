#include <dll_main.h>
#include <macros.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <vector>

using namespace modloader;

namespace
{
    float hammer_speed_multiplier = 1.f;
    IL2CPP_INTERCEPT(, MeleeComboMoveHammerSimple, void, EnterMove, (app::MeleeComboMoveHammerSimple* this_ptr)) {
        if (this_ptr->fields.PrepareAttackTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.PrepareAttackTimeline, "SetTimeScale", &hammer_speed_multiplier);
        if (this_ptr->fields.AttackTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.AttackTimeline, "SetTimeScale", &hammer_speed_multiplier);

        MeleeComboMoveHammerSimple::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammer, void, EnterMove, (app::MeleeComboMoveHammer* this_ptr)) {
        if (this_ptr->fields.PrepareTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.PrepareTimeline, "SetTimeScale", &hammer_speed_multiplier);
        if (this_ptr->fields.AttackTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.AttackTimeline, "SetTimeScale", &hammer_speed_multiplier);
        if (this_ptr->fields.ChargeTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.ChargeTimeline, "SetTimeScale", &hammer_speed_multiplier);

        MeleeComboMoveHammer::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammerChargeable, void, EnterMove, (app::MeleeComboMoveHammerChargeable* this_ptr)) {
        if (this_ptr->fields.PrepareTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.PrepareTimeline, "SetTimeScale", &hammer_speed_multiplier);
        if (this_ptr->fields.ChargeHoldTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.ChargeHoldTimeline, "SetTimeScale", &hammer_speed_multiplier);
        if (this_ptr->fields.ChargedAttackTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.ChargedAttackTimeline, "SetTimeScale", &hammer_speed_multiplier);
        if (this_ptr->fields.NormalAttackTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.NormalAttackTimeline, "SetTimeScale", &hammer_speed_multiplier);

        MeleeComboMoveHammerChargeable::EnterMove(this_ptr);
    }

    void set_hammer_speed(std::string const& name, std::vector<console::CommandParam> const& params)
    {
        if (params.size() != 1)
            return;

        if (console::try_get_float(params.front(), hammer_speed_multiplier))
            console::console_send("speed set");
    }

    void initialize()
    {
        console::register_command("set_hammer_speed", set_hammer_speed);
    }

    CALL_ON_INIT(initialize);
}

INJECT_C_DLLEXPORT void set_hammer_speed_multiplier(float value)
{
    hammer_speed_multiplier = value;
}

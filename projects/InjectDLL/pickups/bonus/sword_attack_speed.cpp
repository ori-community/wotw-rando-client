#include <dll_main.h>
#include <macros.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <vector>

using namespace modloader::console;

namespace
{
    float sword_speed_multiplier = 1.f;
    float initial_charge_time = -1.f;
    IL2CPP_INTERCEPT(Moon, MeleeComboMoveSwordCharge, void, EnterMove, (app::MeleeComboMoveSwordCharge* this_ptr)) {
        if (initial_charge_time < 0)
            initial_charge_time = this_ptr->fields.ChargeTime;

        this_ptr->fields.ChargeTime = initial_charge_time * sword_speed_multiplier;
        if (this_ptr->fields._.AttackTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields._.AttackTimeline, "SetTimeScale", &sword_speed_multiplier);

        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveSwordAirDown, void, EnterMove, (app::MeleeComboMoveSwordAirDown* this_ptr)) {
        if (this_ptr->fields._.AttackTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields._.AttackTimeline, "SetTimeScale", &sword_speed_multiplier);

        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveSword, void, EnterMove, (app::MeleeComboMoveSword* this_ptr)) {
        if (this_ptr->fields.AttackTimeline != nullptr)
            il2cpp::invoke(this_ptr->fields.AttackTimeline, "SetTimeScale", &sword_speed_multiplier);

        EnterMove(this_ptr);
    }
    
    void set_sword_speed(std::string const& name, std::vector<CommandParam> const& params)
    {
        if (params.size() != 1)
            return;

        if (try_get_float(params.front(), sword_speed_multiplier))
            console_send("speed set");
    }

    void initialize()
    {
        register_command("set_sword_speed", set_sword_speed);
    }

    CALL_ON_INIT(initialize);
}

INJECT_C_DLLEXPORT void set_sword_speed_multiplier(float value)
{
    sword_speed_multiplier = value;
}

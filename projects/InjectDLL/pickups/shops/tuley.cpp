#include <Common/ext.h>
#include <uber_states/uber_state_manager.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

namespace
{
    IL2CPP_INTERCEPT(, SpellUISeeds, bool, Spend, (app::SpellUISeeds* this_ptr, int amount)) {
        bool worked = SpellUISeeds::Spend(this_ptr, amount);
        if (worked)
            uber_states::set_uber_state_value(6, 6, amount + uber_states::get_uber_state_value(6, 6));

        return worked;
    }
};

#include <Common/ext.h>
#include <uber_states/uber_state_interface.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

namespace
{
    uber_states::UberState ore_spent(UberStateGroup::RandoState, 6);
    IL2CPP_INTERCEPT(, SpellUISeeds, bool, Spend, (app::SpellUISeeds* this_ptr, int amount)) {
        bool worked = SpellUISeeds::Spend(this_ptr, amount);
        if (worked)
            ore_spent.set(amount + ore_spent.get());

        return worked;
    }
};

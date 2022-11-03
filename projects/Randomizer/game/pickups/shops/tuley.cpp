#include <Common/ext.h>
#include <Modloader/app/methods/SpellUISeeds.h>
#include <Modloader/common.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Core/uber_states/uber_state_interface.h>

namespace {
    uber_states::UberState ore_spent(UberStateGroup::RandoState, 6);
    IL2CPP_INTERCEPT(SpellUISeeds, bool, Spend, (app::SpellUISeeds * this_ptr, int amount)) {
        bool worked = next::SpellUISeeds::Spend(this_ptr, amount);
        if (worked)
            ore_spent.set(amount + ore_spent.get());

        return worked;
    }
}; // namespace

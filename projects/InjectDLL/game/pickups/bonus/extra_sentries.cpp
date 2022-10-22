#include <macros.h>
#include <uber_states/uber_state_interface.h>

#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/SeinTurretSpell.h>

using namespace app::classes;

namespace {
    uber_states::UberState extra_sentries(UberStateGroup::RandoUpgrade, 37);

    bool initialized = false;
    int default_sentry_limit = 3;

    IL2CPP_INTERCEPT(SeinTurretSpell, void, SpawnSpiritTurret, (app::SeinTurretSpell* this_ptr)) {
        if (!initialized) {
            default_sentry_limit = this_ptr->fields.BalancingData->fields.MaxTurretsAtOnce;
            initialized = true;
        }

        this_ptr->fields.BalancingData->fields.MaxTurretsAtOnce = default_sentry_limit + extra_sentries.get<int>();

        return next::SeinTurretSpell::SpawnSpiritTurret(this_ptr);
    }
} // namespace

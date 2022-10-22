#include <macros.h>
#include <uber_states/uber_state_interface.h>

#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/SeinTurretSpell.h>
#include <Il2CppModLoader/app/methods/SpiritTurret.h>

using namespace app::classes;

namespace {
    uber_states::UberState extra_sentries(UberStateGroup::RandoUpgrade, 37);
    uber_states::UberState sentry_shots(UberStateGroup::RandoUpgrade, 46);
    uber_states::UberState sentry_fire_rate(UberStateGroup::RandoUpgrade, 47);

    bool initialized = false;
    int default_sentry_limit = 3;

    constexpr float DEFAULT_FIRE_RATE = 0.15f;

    IL2CPP_INTERCEPT(SpiritTurret, void, UpdateShooting, (app::SpiritTurret* this_ptr)) {
        if (sentry_shots.get<int>() == 0) {
            return;
        }

        this_ptr->fields.BalancingData->fields.m_timeBetweenBurstShots = DEFAULT_FIRE_RATE / sentry_fire_rate.get<float>();
        return next::SpiritTurret::UpdateShooting(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinTurretSpell, void, SpawnSpiritTurret, (app::SeinTurretSpell* this_ptr)) {
        if (!initialized) {
            default_sentry_limit = this_ptr->fields.BalancingData->fields.MaxTurretsAtOnce;
            initialized = true;
        }

        this_ptr->fields.BalancingData->fields.MaxTurretsAtOnce = default_sentry_limit + extra_sentries.get<int>();
        this_ptr->fields.BalancingData->fields.ShotsInBurst = sentry_shots.get<int>();
        this_ptr->fields.BalancingData->fields.UpgradedSpeedMultiplier = sentry_fire_rate.get<float>();

        return next::SeinTurretSpell::SpawnSpiritTurret(this_ptr);
    }
} // namespace

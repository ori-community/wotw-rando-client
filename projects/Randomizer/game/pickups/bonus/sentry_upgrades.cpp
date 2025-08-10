#include <Core/api/uber_states/uber_state.h>

#include <Modloader/app/methods/SeinTurretSpell.h>
#include <Modloader/app/methods/SpiritTurret.h>
#include <Modloader/interception_macros.h>

using namespace app::classes;

namespace {
    core::api::uber_states::UberState extra_sentries(UberStateGroup::RandoUpgrade, 37);
    core::api::uber_states::UberState sentry_shots(UberStateGroup::RandoUpgrade, 46);
    core::api::uber_states::UberState sentry_fire_rate(UberStateGroup::RandoUpgrade, 47);

    bool initialized = false;
    int default_sentry_limit = 3;

    constexpr float DEFAULT_FIRE_RATE = 0.15f;

    IL2CPP_INTERCEPT(void, SpiritTurret, UpdateShooting, app::SpiritTurret * this_ptr) {
        if (sentry_shots.get<int>() == 0) {
            return;
        }

        this_ptr->fields.BalancingData->fields.m_timeBetweenBurstShots = DEFAULT_FIRE_RATE / sentry_fire_rate.get<float>();
        return next::SpiritTurret::UpdateShooting(this_ptr);
    }

    IL2CPP_INTERCEPT(void, SeinTurretSpell, SpawnSpiritTurret, app::SeinTurretSpell * this_ptr) {
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

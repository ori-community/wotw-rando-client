#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/SeinTurretSpell.h>
#include <Modloader/app/methods/SpiritTurret.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


using namespace app::classes;

namespace {
    auto& max_sentries = randomizer::uber_states::state<"bonusUpgrades", "maxSentries">();
    auto& sentry_shots = randomizer::uber_states::state<"bonusUpgrades", "sentryShotsPerBurst">();
    auto& sentry_fire_rate = randomizer::uber_states::state<"bonusUpgrades", "sentryFireRateMultiplier">();

    constexpr float DEFAULT_FIRE_RATE = 0.15f;

    IL2CPP_INTERCEPT(void, SpiritTurret, UpdateShooting, app::SpiritTurret * this_ptr) {
        if (sentry_shots.get() == 0) {
            return;
        }

        this_ptr->fields.BalancingData->fields.m_timeBetweenBurstShots = DEFAULT_FIRE_RATE / sentry_fire_rate.get();
        return next::SpiritTurret::UpdateShooting(this_ptr);
    }

    IL2CPP_INTERCEPT(void, SeinTurretSpell, SpawnSpiritTurret, app::SeinTurretSpell * this_ptr) {
        this_ptr->fields.BalancingData->fields.MaxTurretsAtOnce = max_sentries.get();
        this_ptr->fields.BalancingData->fields.ShotsInBurst = sentry_shots.get();
        this_ptr->fields.BalancingData->fields.UpgradedSpeedMultiplier = sentry_fire_rate.get();

        return next::SeinTurretSpell::SpawnSpiritTurret(this_ptr);
    }
} // namespace

#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/SeinDamageReciever.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>

namespace {
    using namespace app::classes;

    auto& patch2_kickback_enabled_state = randomizer::uber_states::state<"randoConfig", "patch2Kickback">();

    IL2CPP_INTERCEPT(void, SeinDamageReciever, HandleGroundAnimationAndKickback, app::SeinDamageReciever * this_ptr, app::Damage* damage, bool kickback_enabled, float* hurt_timeremaining, app::ActiveAnimationHandle* active_animation, app::SeinDamageReceiverPuppet* puppet) {
        if (!patch2_kickback_enabled_state.get()) {
            next::SeinDamageReciever::HandleGroundAnimationAndKickback(this_ptr, damage, kickback_enabled, hurt_timeremaining, active_animation, puppet);
            return;
        }

        // In Patch 2 they only use DamageWeight.Default, we emulate that
        // here for the function that applies the kickback force
        modloader::ScopedSetter _(damage->fields.m_damageWeight, app::DamageWeight__Enum::Default);
        next::SeinDamageReciever::HandleGroundAnimationAndKickback(this_ptr, damage, kickback_enabled, hurt_timeremaining, active_animation, puppet);
    }
}

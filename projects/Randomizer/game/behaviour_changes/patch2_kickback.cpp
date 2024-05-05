#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/SeinDamageReciever.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

namespace {
    using namespace app::classes;

    core::api::uber_states::UberState patch2_kickback_enabled(UberStateGroup::RandoConfig, 17);

    IL2CPP_INTERCEPT(SeinDamageReciever, void, HandleGroundAnimationAndKickback, (app::SeinDamageReciever * this_ptr, app::Damage* damage, bool kickback_enabled, float* hurt_timeremaining, app::ActiveAnimationHandle* active_animation, app::SeinDamageReceiverPuppet* puppet)) {
        if (!patch2_kickback_enabled.get<bool>()) {
            next::SeinDamageReciever::HandleGroundAnimationAndKickback(this_ptr, damage, kickback_enabled, hurt_timeremaining, active_animation, puppet);
            return;
        }

        // In Patch 2 they only use DamageWeight.Default, we emulate that
        // here for the function that applies the kickback force
        modloader::ScopedSetter _(damage->fields.m_damageWeight, app::DamageWeight__Enum::Default);
        next::SeinDamageReciever::HandleGroundAnimationAndKickback(this_ptr, damage, kickback_enabled, hurt_timeremaining, active_animation, puppet);
    }
}

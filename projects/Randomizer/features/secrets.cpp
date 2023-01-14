#include <Core/api/uber_states/uber_state.h>
#include <Core/settings.h>

#include <Modloader/app/methods/PlayerSpiritShards.h>
#include <Modloader/interception_macros.h>

using namespace app::classes;

namespace {
    IL2CPP_INTERCEPT(PlayerSpiritShards, bool, IsGlobalShardEquipped_1, (app::PlayerSpiritShards * this_ptr, app::SpiritShardType__Enum value)) {
        if (core::settings::show_secrets() &&
            value == app::SpiritShardType__Enum::Sense)
            return true;

        return next::PlayerSpiritShards::IsGlobalShardEquipped_1(this_ptr, value);
    }
} // namespace

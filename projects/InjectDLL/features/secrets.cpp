#include <randomizer/settings.h>
#include <uber_states/uber_state_interface.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>

namespace {
    IL2CPP_INTERCEPT_OVERLOAD(, PlayerSpiritShards, bool, IsGlobalShardEquipped, (app::PlayerSpiritShards * this_ptr, app::SpiritShardType__Enum value), (SpiritShardType)) {
        if (randomizer::settings::show_secrets() &&
            value == app::SpiritShardType__Enum_Sense)
            return true;

        return PlayerSpiritShards::IsGlobalShardEquipped(this_ptr, value);
    }
} // namespace

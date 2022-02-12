#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <uber_states\uber_state_manager.h>

namespace
{
    constexpr int ALWAYSSHOWSECRETS_ID = 38;

    IL2CPP_INTERCEPT_OVERLOAD(, PlayerSpiritShards, bool, IsGlobalShardEquipped, (app::PlayerSpiritShards* this_ptr, app::SpiritShardType__Enum value),
        (SpiritShardType)) {
        if (uber_states::get_uber_state_value(uber_states::constants::RANDO_UPGRADE_GROUP_ID, ALWAYSSHOWSECRETS_ID) > 0.5f &&
            value == app::SpiritShardType__Enum_Sense)
            return true;

        return PlayerSpiritShards::IsGlobalShardEquipped(this_ptr, value);
    }
}

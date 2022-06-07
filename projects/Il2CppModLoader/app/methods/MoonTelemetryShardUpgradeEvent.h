#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MoonTelemetryShardUpgradeEvent {
    IL2CPP_REGISTER_METHOD(0x01472300, void, ctor, (app::MoonTelemetryShardUpgradeEvent * this_ptr, app::PlayerUberStateShards_Shard * shard, int32_t new_level, int32_t exp_spent))
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::String *, get_Name, (app::MoonTelemetryShardUpgradeEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01472420, void, SerializeToObject, (app::MoonTelemetryShardUpgradeEvent * this_ptr, app::JsonBuilder_Object obj))
}

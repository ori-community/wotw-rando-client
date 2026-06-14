#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonBuilder_Object.h>
#include <Modloader/app/structs/MoonTelemetryShardUpgradeEvent.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MoonTelemetryShardUpgradeEvent {
    IL2CPP_REGISTER_METHOD(
        0x01472300,
        void,
        ctor,
        app::MoonTelemetryShardUpgradeEvent* this_ptr,
        app::PlayerUberStateShards_Shard* shard,
        int32_t new_level,
        int32_t exp_spent
    )
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::String*, get_Name, app::MoonTelemetryShardUpgradeEvent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01472420, void, SerializeToObject, app::MoonTelemetryShardUpgradeEvent* this_ptr, app::JsonBuilder_Object obj)
} // namespace app::classes::MoonTelemetryShardUpgradeEvent

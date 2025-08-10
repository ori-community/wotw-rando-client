#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonBuilder_Object.h>
#include <Modloader/app/structs/MoonTelemetryShardEquipEvent.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MoonTelemetryShardEquipEvent {
    IL2CPP_REGISTER_METHOD(0x01472090, void, ctor, app::MoonTelemetryShardEquipEvent* this_ptr, app::PlayerUberStateShards_Shard* shard, bool equipped)
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::String*, get_Name, app::MoonTelemetryShardEquipEvent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014721A0, void, SerializeToObject, app::MoonTelemetryShardEquipEvent* this_ptr, app::JsonBuilder_Object obj)
} // namespace app::classes::MoonTelemetryShardEquipEvent

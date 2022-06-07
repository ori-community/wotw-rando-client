#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MoonTelemetryShardEquipEvent {
    IL2CPP_REGISTER_METHOD(0x01472090, void, ctor, (app::MoonTelemetryShardEquipEvent * this_ptr, app::PlayerUberStateShards_Shard * shard, bool equipped))
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::String *, get_Name, (app::MoonTelemetryShardEquipEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014721A0, void, SerializeToObject, (app::MoonTelemetryShardEquipEvent * this_ptr, app::JsonBuilder_Object obj))
}

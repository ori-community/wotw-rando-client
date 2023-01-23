#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent_SpiritShardData.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>

namespace app::classes::MoonTelemetryCharacterBaseEvent_SpiritShardData {
    IL2CPP_REGISTER_METHOD(0x0146A000, app::MoonTelemetryCharacterBaseEvent_SpiritShardData, Create, (app::PlayerUberStateShards_Shard * item))
}

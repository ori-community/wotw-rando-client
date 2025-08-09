#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SandWormEntity_CachedWaterZone__Boxed.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SandWormEntity_CachedWaterZone {
    IL2CPP_REGISTER_METHOD(0x0011D350, void, Update, app::SandWormEntity_CachedWaterZone__Boxed* this_ptr, app::Vector3 position, int32_t current_frame)
}

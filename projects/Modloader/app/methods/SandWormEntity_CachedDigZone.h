#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SandWormEntity_CachedDigZone__Boxed.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SandWormEntity_CachedDigZone {
    IL2CPP_REGISTER_METHOD(0x0011D300, void, Update, app::SandWormEntity_CachedDigZone__Boxed* this_ptr, app::Vector3 position, int32_t current_frame)
}

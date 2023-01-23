#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PositionSyncTask_PositioningCache__Boxed.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/PositionSyncTask_PositioningCache.h>

namespace app::classes::Moon::Wwise::PositionSyncTask_PositioningCache {
    IL2CPP_REGISTER_METHOD(0x001FE8F0, void, ctor, (app::PositionSyncTask_PositioningCache__Boxed * this_ptr, app::Vector3 position, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x0270ACE0, app::PositionSyncTask_PositioningCache, get_Uninitialized, ())
} // namespace app::classes::Moon::Wwise::PositionSyncTask_PositioningCache

#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SceneTrackingChange.h>
#include <Modloader/app/structs/SceneTracking.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/DateTime.h>

namespace app::classes::Moon::EditorTools::SceneTracking::SceneTrackingChange {
    IL2CPP_REGISTER_METHOD(0x01209560, void, ctor, (app::SceneTrackingChange * this_ptr, app::SceneTracking* scene_tracking))
    IL2CPP_REGISTER_METHOD(0x01209710, app::String*, GetTimestamp, (app::DateTime value))
} // namespace app::classes::Moon::EditorTools::SceneTracking::SceneTrackingChange

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ScenePreloading_c.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>

namespace app::classes::Moon::Timeline::ScenePreloading___c {
    IL2CPP_REGISTER_METHOD(0x00784FF0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ScenePreloading_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00785130, bool, _GetNextSceneEntity_b__2_1, (app::ScenePreloading_c * this_ptr, app::TimelineEntityRecord* record))
} // namespace app::classes::Moon::Timeline::ScenePreloading___c

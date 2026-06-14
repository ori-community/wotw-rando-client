#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_Moon_Timeline_TimelineEntityRecord_.h>
#include <Modloader/app/structs/ScenePreloading_c_DisplayClass2_0.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>

namespace app::classes::Moon::Timeline::ScenePreloading___c__DisplayClass2_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ScenePreloading_c_DisplayClass2_0* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00785200,
        app::IEnumerable_1_Moon_Timeline_TimelineEntityRecord_*,
        _GetNextSceneEntity_b__0,
        app::ScenePreloading_c_DisplayClass2_0* this_ptr,
        app::TimelineEntityRecord* o
    )
} // namespace app::classes::Moon::Timeline::ScenePreloading___c__DisplayClass2_0

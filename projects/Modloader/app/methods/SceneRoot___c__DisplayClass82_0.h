#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneRoot_c_DisplayClass82_0.h>
#include <Modloader/app/structs/TimeSlicedJobPriority__Enum.h>

namespace app::classes::SceneRoot___c__DisplayClass82_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SceneRoot_c_DisplayClass82_0 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB9000, void, _EnableSceneTimeSliced_b__0, (app::SceneRoot_c_DisplayClass82_0 * this_ptr, bool success))
    IL2CPP_REGISTER_METHOD(0x00BB90C0, app::TimeSlicedJobPriority__Enum, _EnableSceneTimeSliced_b__1, (app::SceneRoot_c_DisplayClass82_0 * this_ptr))
} // namespace app::classes::SceneRoot___c__DisplayClass82_0

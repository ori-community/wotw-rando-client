#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneManagementSystem.h>
#include <Modloader/app/structs/TimelineSystem_1_Moon_Timeline_Systems_SceneManagementSystem_.h>

namespace app::classes::Moon::Timeline::TimelineSystem_1_Moon_Timeline_Systems_SceneManagementSystem_ {
    IL2CPP_REGISTER_METHOD(0x02AF3ED0, app::SceneManagementSystem*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::TimelineSystem_1_Moon_Timeline_Systems_SceneManagementSystem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ExecutionOrderOffset, (app::TimelineSystem_1_Moon_Timeline_Systems_SceneManagementSystem_ * this_ptr))
} // namespace app::classes::Moon::Timeline::TimelineSystem_1_Moon_Timeline_Systems_SceneManagementSystem_

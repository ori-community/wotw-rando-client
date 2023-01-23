#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameplayUISystem.h>
#include <Modloader/app/structs/TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem_.h>

namespace app::classes::Moon::Timeline::TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem_ {
    IL2CPP_REGISTER_METHOD(0x02AF3ED0, app::GameplayUISystem*, get_Instance, ())
    IL2CPP_REGISTER_METHODINFO(0x04737AA0, TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem__get_Instance__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04750708, TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ExecutionOrderOffset, (app::TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInit, (app::TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem_ * this_ptr))
} // namespace app::classes::Moon::Timeline::TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem_

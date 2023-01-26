#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TimelineSystem_1_System_Object_.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::Moon::Timeline::TimelineSystem_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02AF3ED0, app::Object*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, (app::TimelineSystem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ExecutionOrderOffset, (app::TimelineSystem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AF42B0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x019E35B0, void, Init, (app::TimelineSystem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInit, (app::TimelineSystem_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::TimelineSystem_1_System_Object_ * this_ptr))
} // namespace app::classes::Moon::Timeline::TimelineSystem_1_System_Object_

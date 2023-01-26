#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DemoTimeoutTimeMenuItem.h>
#include <Modloader/app/structs/DemoTimeoutTimeMenuItem_TimeoutType__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::DemoTimeoutTimeMenuItem {
    IL2CPP_REGISTER_METHOD(0x00B82AD0, void, ctor, (app::DemoTimeoutTimeMenuItem * this_ptr, app::String* path, app::String* str, app::DemoTimeoutTimeMenuItem_TimeoutType__Enum type))
    IL2CPP_REGISTER_METHOD(0x00B82BA0, void, OnSelectedFixedUpdate, (app::DemoTimeoutTimeMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B82F70, float, get_Timeout, (app::DemoTimeoutTimeMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B83090, void, set_Timeout, (app::DemoTimeoutTimeMenuItem * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00B831C0, float, get_ActualElapsed, (app::DemoTimeoutTimeMenuItem * this_ptr))
} // namespace app::classes::DemoTimeoutTimeMenuItem

#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DemoTimeoutTimeMenuItem {
    IL2CPP_REGISTER_METHOD(0x00B82AD0, void, ctor, (app::DemoTimeoutTimeMenuItem * this_ptr, app::String* path, app::String* str, app::DemoTimeoutTimeMenuItem_TimeoutType__Enum type))
    IL2CPP_REGISTER_METHOD(0x00B82BA0, void, OnSelectedFixedUpdate, (app::DemoTimeoutTimeMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B82F70, float, get_Timeout, (app::DemoTimeoutTimeMenuItem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742498, DemoTimeoutTimeMenuItem_get_Timeout__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B83090, void, set_Timeout, (app::DemoTimeoutTimeMenuItem * this_ptr, float value))
    IL2CPP_REGISTER_METHODINFO(0x04791158, DemoTimeoutTimeMenuItem_set_Timeout__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B831C0, float, get_ActualElapsed, (app::DemoTimeoutTimeMenuItem * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04765A98, DemoTimeoutTimeMenuItem_get_ActualElapsed__MethodInfo)
} // namespace app::classes::DemoTimeoutTimeMenuItem

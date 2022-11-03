#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SeinRefillOnEvent {
    IL2CPP_REGISTER_METHOD(0x005D11F0, void, OnEnable, (app::SeinRefillOnEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D1400, void, OnDisable, (app::SeinRefillOnEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D15E0, void, OnEventStart, (app::SeinRefillOnEvent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470CA78, SeinRefillOnEvent_OnEventStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005D1790, void, ctor, (app::SeinRefillOnEvent * this_ptr))
} // namespace app::classes::SeinRefillOnEvent

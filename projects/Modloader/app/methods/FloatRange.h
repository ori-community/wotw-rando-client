#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FloatRange_1__Boxed.h>

namespace app::classes::FloatRange {
    IL2CPP_REGISTER_METHOD(0x00125480, void, ctor, (app::FloatRange_1__Boxed * this_ptr, float min, float max))
    IL2CPP_REGISTER_METHOD(0x001254E0, float, PickRandom, (app::FloatRange_1__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001255A0, int32_t, PickRandomInt, (app::FloatRange_1__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001256B0, float, Lerp, (app::FloatRange_1__Boxed * this_ptr, float t))
    IL2CPP_REGISTER_METHOD(0x00125780, float, Clamp, (app::FloatRange_1__Boxed * this_ptr, float value))
} // namespace app::classes::FloatRange

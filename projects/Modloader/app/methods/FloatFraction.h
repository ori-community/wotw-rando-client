#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FloatFraction__Boxed.h>

namespace app::classes::FloatFraction {
    IL2CPP_REGISTER_METHOD(0x00125480, void, ctor, app::FloatFraction__Boxed* this_ptr, float value, float max)
    IL2CPP_REGISTER_METHOD(0x00125490, float, GetNormalized, app::FloatFraction__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001254B0, void, SetToMax, app::FloatFraction__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001254C0, void, ClampMax, app::FloatFraction__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001254D0, void, ClampAtZero, app::FloatFraction__Boxed* this_ptr)
} // namespace app::classes::FloatFraction

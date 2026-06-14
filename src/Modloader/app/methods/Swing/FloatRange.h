#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FloatRange.h>
#include <Modloader/app/structs/FloatRange__Boxed.h>

namespace app::classes::Swing::FloatRange {
    IL2CPP_REGISTER_METHOD(0x00125480, void, ctor, app::FloatRange__Boxed* this_ptr, float _min, float _max)
    IL2CPP_REGISTER_METHOD(0x0182ACD0, app::FloatRange, op_Implicit, float _f)
    IL2CPP_REGISTER_METHOD(0x0182ACE0, app::FloatRange, op_Multiply, app::FloatRange _r, float _f)
    IL2CPP_REGISTER_METHOD(0x0182AD10, app::FloatRange, op_Division, app::FloatRange _r, float _f)
    IL2CPP_REGISTER_METHOD(0x0014B260, float, lerp, app::FloatRange__Boxed* this_ptr, float _t)
    IL2CPP_REGISTER_METHOD(0x0014B280, float, inverseLerp, app::FloatRange__Boxed* this_ptr, float _value)
    IL2CPP_REGISTER_METHOD(0x0014B2A0, float, inverseLerpClamped, app::FloatRange__Boxed* this_ptr, float _value)
    IL2CPP_REGISTER_METHOD(0x0014B2B0, float, clamp, app::FloatRange__Boxed* this_ptr, float _value)
    IL2CPP_REGISTER_METHOD(0x0014B2D0, float, get_random, app::FloatRange__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014B2E0, float, get_length, app::FloatRange__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014B2F0, float, get_avg, app::FloatRange__Boxed* this_ptr)
    inline app::FloatRange operator*(app::FloatRange _r, float _f) { return op_Multiply(_r, _f); }
    inline app::FloatRange operator/(app::FloatRange _r, float _f) { return op_Division(_r, _f); }
} // namespace app::classes::Swing::FloatRange

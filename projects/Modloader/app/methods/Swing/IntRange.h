#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IntRange.h>
#include <Modloader/app/structs/IntRange__Boxed.h>

namespace app::classes::Swing::IntRange {
    IL2CPP_REGISTER_METHOD(0x00115520, void, ctor, app::IntRange__Boxed* this_ptr, int32_t _min, int32_t _max)
    IL2CPP_REGISTER_METHOD(0x0182B510, app::IntRange, op_Implicit, int32_t _i)
    IL2CPP_REGISTER_METHOD(0x0182B170, app::IntRange, op_Multiply, app::IntRange _r, int32_t _mult)
    IL2CPP_REGISTER_METHOD(0x0014B800, int32_t, get_random, app::IntRange__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014B8E0, int32_t, get_length, app::IntRange__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014B8F0, float, get_avg, app::IntRange__Boxed* this_ptr)
    inline app::IntRange operator*(app::IntRange _r, int32_t _mult) { return op_Multiply(_r, _mult); }
} // namespace app::classes::Swing::IntRange

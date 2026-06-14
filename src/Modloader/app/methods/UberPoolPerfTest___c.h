#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_String_System_ValueTuple_2_.h>
#include <Modloader/app/structs/UberPoolPerfTest_c.h>
#include <Modloader/app/structs/ValueTuple_2_Int32_String_.h>

namespace app::classes::UberPoolPerfTest___c {
    IL2CPP_REGISTER_METHOD(0x00FE5290, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UberPoolPerfTest_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00FE53D0,
        int32_t,
        _DeduplicateStrings_b__60_0,
        app::UberPoolPerfTest_c* this_ptr,
        app::KeyValuePair_2_System_String_System_ValueTuple_2_ kvp
    )
    IL2CPP_REGISTER_METHOD(
        0x00FE5450,
        app::ValueTuple_2_Int32_String_,
        _DeduplicateStrings_b__60_1,
        app::UberPoolPerfTest_c* this_ptr,
        app::KeyValuePair_2_System_String_System_ValueTuple_2_ kvp
    )
} // namespace app::classes::UberPoolPerfTest___c

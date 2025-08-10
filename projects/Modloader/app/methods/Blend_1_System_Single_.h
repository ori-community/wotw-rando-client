#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Blend_1_System_Single_.h>
#include <Modloader/app/structs/Func_2_Single_Single_.h>
#include <Modloader/app/structs/Func_4_Single_Single_Single_Single_.h>

namespace app::classes::Blend_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(
        0x019D84A0,
        void,
        ctor,
        app::Blend_1_System_Single_* this_ptr,
        app::Func_2_Single_Single_* ease,
        app::Func_4_Single_Single_Single_Single_* lerp
    )
    IL2CPP_REGISTER_METHOD(0x019D84C0, float, get_Current, app::Blend_1_System_Single_* this_ptr)
} // namespace app::classes::Blend_1_System_Single_

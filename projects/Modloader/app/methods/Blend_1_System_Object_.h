#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Blend_1_System_Object_.h>
#include <Modloader/app/structs/Func_2_Single_Single_.h>
#include <Modloader/app/structs/Func_4_Object_Object_Single_Object_.h>

namespace app::classes::Blend_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x019D8380, app::Object*, get_Current, (app::Blend_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019D8360, void, ctor, (app::Blend_1_System_Object_ * this_ptr, app::Func_2_Single_Single_* ease, app::Func_4_Object_Object_Single_Object_* lerp))
} // namespace app::classes::Blend_1_System_Object_

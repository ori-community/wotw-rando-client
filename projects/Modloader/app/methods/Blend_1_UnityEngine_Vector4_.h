#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Blend_1_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/Func_2_Single_Single_.h>
#include <Modloader/app/structs/Func_4_UnityEngine_Vector4_UnityEngine_Vector4_Single_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::Blend_1_UnityEngine_Vector4_ {
    IL2CPP_REGISTER_METHOD(0x019D8780, void, ctor, (app::Blend_1_UnityEngine_Vector4_ * this_ptr, app::Func_2_Single_Single_* ease, app::Func_4_UnityEngine_Vector4_UnityEngine_Vector4_Single_UnityEngine_Vector4_* lerp))
    IL2CPP_REGISTER_METHOD(0x019D87A0, app::Vector4, get_Current, (app::Blend_1_UnityEngine_Vector4_ * this_ptr))
} // namespace app::classes::Blend_1_UnityEngine_Vector4_

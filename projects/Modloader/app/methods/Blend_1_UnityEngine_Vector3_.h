#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Blend_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Func_2_Single_Single_.h>
#include <Modloader/app/structs/Func_4_UnityEngine_Vector3_UnityEngine_Vector3_Single_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Blend_1_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x019D85E0, void, ctor, (app::Blend_1_UnityEngine_Vector3_ * this_ptr, app::Func_2_Single_Single_* ease, app::Func_4_UnityEngine_Vector3_UnityEngine_Vector3_Single_UnityEngine_Vector3_* lerp))
    IL2CPP_REGISTER_METHOD(0x019D8600, app::Vector3, get_Current, (app::Blend_1_UnityEngine_Vector3_ * this_ptr))
} // namespace app::classes::Blend_1_UnityEngine_Vector3_

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_UnityEngine_Plane_UnityEngine_Matrix4x4_.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/Plane__Array.h>

namespace app::classes::System::Action_2_UnityEngine_Plane___UnityEngine_Matrix4x4_ {
    IL2CPP_REGISTER_METHOD(
        0x02C12660,
        void,
        Invoke,
        app::Action_2_UnityEngine_Plane_UnityEngine_Matrix4x4_* this_ptr,
        app::Plane__Array* arg1,
        app::Matrix4x4 arg2
    )
}

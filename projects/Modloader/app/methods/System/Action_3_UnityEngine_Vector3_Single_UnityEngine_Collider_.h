#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::System::Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02C16FF0,
        void,
        Invoke,
        app::Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_* this_ptr,
        app::Vector3 arg1,
        float arg2,
        app::Collider* arg3
    )
} // namespace app::classes::System::Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_

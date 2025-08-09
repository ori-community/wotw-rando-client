#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::System::Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02C16350,
        void,
        Invoke,
        app::Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean_* this_ptr,
        app::GameObject* arg1,
        app::Vector2 arg2,
        bool arg3
    )
} // namespace app::classes::System::Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean_

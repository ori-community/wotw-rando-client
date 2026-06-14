#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_UnityEngine_GameObject_System_Reflection_FieldInfo_.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::System::Action_2_UnityEngine_GameObject_System_Reflection_FieldInfo_ {
    IL2CPP_REGISTER_METHOD(
        0x015FE410,
        void,
        Invoke,
        app::Action_2_UnityEngine_GameObject_System_Reflection_FieldInfo_* this_ptr,
        app::GameObject* arg1,
        app::FieldInfo_1* arg2
    )
}

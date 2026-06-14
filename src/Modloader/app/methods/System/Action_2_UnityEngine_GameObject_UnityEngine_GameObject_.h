#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_UnityEngine_GameObject_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_2_UnityEngine_GameObject_UnityEngine_GameObject_ {
    IL2CPP_REGISTER_METHOD(
        0x015FE410,
        void,
        Invoke,
        app::Action_2_UnityEngine_GameObject_UnityEngine_GameObject_* this_ptr,
        app::GameObject* arg1,
        app::GameObject* arg2
    )
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_2_UnityEngine_GameObject_UnityEngine_GameObject_* this_ptr, app::Object* object, void* method_1)
} // namespace app::classes::System::Action_2_UnityEngine_GameObject_UnityEngine_GameObject_

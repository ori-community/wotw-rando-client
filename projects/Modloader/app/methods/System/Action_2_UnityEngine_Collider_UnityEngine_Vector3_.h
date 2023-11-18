#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_UnityEngine_Collider_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::System::Action_2_UnityEngine_Collider_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x02C13740, void, Invoke, (app::Action_2_UnityEngine_Collider_UnityEngine_Vector3_ * this_ptr, app::Collider* arg1, app::Vector3 arg2))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_2_UnityEngine_Collider_UnityEngine_Vector3_ * this_ptr, app::Object* object, void* method_1))
} // namespace app::classes::System::Action_2_UnityEngine_Collider_UnityEngine_Vector3_

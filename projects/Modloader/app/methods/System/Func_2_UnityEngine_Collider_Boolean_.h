#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_2_UnityEngine_Collider_Boolean_.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Func_2_UnityEngine_Collider_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x0167EC80, bool, Invoke, (app::Func_2_UnityEngine_Collider_Boolean_ * this_ptr, app::Collider* arg))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_UnityEngine_Collider_Boolean_ * this_ptr, app::Object* object, void* method_1))
} // namespace app::classes::System::Func_2_UnityEngine_Collider_Boolean_

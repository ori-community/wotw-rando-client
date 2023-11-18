#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Predicate_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Predicate_1_UnityEngine_Collider_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_UnityEngine_Collider_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0167EC80, bool, Invoke, (app::Predicate_1_UnityEngine_Collider_ * this_ptr, app::Collider* obj))
} // namespace app::classes::System::Predicate_1_UnityEngine_Collider_

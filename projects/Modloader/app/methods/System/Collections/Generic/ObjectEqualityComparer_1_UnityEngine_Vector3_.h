#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectEqualityComparer_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector3__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x0243A1E0, bool, Equals_1, (app::ObjectEqualityComparer_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 x, app::Vector3 y))
    IL2CPP_REGISTER_METHOD(0x0243A250, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 obj))
    IL2CPP_REGISTER_METHOD(0x0243A2B0, int32_t, IndexOf, (app::ObjectEqualityComparer_1_UnityEngine_Vector3_ * this_ptr, app::Vector3__Array* array, app::Vector3 value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0243A3B0, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_UnityEngine_Vector3_ * this_ptr, app::Vector3__Array* array, app::Vector3 value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_UnityEngine_Vector3_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_UnityEngine_Vector3_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_Vector3_

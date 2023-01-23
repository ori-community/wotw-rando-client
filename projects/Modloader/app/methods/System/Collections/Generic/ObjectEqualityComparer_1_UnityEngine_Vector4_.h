#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/Vector4__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_Vector4_ {
    IL2CPP_REGISTER_METHOD(0x0243A4B0, bool, Equals_1, (app::ObjectEqualityComparer_1_UnityEngine_Vector4_ * this_ptr, app::Vector4 x, app::Vector4 y))
    IL2CPP_REGISTER_METHOD(0x02438F20, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_UnityEngine_Vector4_ * this_ptr, app::Vector4 obj))
    IL2CPP_REGISTER_METHOD(0x0243A510, int32_t, IndexOf, (app::ObjectEqualityComparer_1_UnityEngine_Vector4_ * this_ptr, app::Vector4__Array* array, app::Vector4 value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0243A600, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_UnityEngine_Vector4_ * this_ptr, app::Vector4__Array* array, app::Vector4 value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_UnityEngine_Vector4_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_UnityEngine_Vector4_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_UnityEngine_Vector4_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_Vector4_

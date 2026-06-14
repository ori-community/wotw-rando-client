#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector2__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(0x02439F40, bool, Equals_1, app::ObjectEqualityComparer_1_UnityEngine_Vector2_* this_ptr, app::Vector2 x, app::Vector2 y)
    IL2CPP_REGISTER_METHOD(0x02439F90, int32_t, GetHashCode_1, app::ObjectEqualityComparer_1_UnityEngine_Vector2_* this_ptr, app::Vector2 obj)
    IL2CPP_REGISTER_METHOD(
        0x02439FE0,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_UnityEngine_Vector2_* this_ptr,
        app::Vector2__Array* array,
        app::Vector2 value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x0243A0E0,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_UnityEngine_Vector2_* this_ptr,
        app::Vector2__Array* array,
        app::Vector2 value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_UnityEngine_Vector2_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_UnityEngine_Vector2_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_UnityEngine_Vector2_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_Vector2_

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Bounds__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_UnityEngine_Bounds_.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_Bounds_ {
    IL2CPP_REGISTER_METHOD(0x02437C20, bool, Equals_1, app::ObjectEqualityComparer_1_UnityEngine_Bounds_* this_ptr, app::Bounds x, app::Bounds y)
    IL2CPP_REGISTER_METHOD(0x02437C90, int32_t, GetHashCode_1, app::ObjectEqualityComparer_1_UnityEngine_Bounds_* this_ptr, app::Bounds obj)
    IL2CPP_REGISTER_METHOD(
        0x02437CB0,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_UnityEngine_Bounds_* this_ptr,
        app::Bounds__Array* array,
        app::Bounds value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02437DC0,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_UnityEngine_Bounds_* this_ptr,
        app::Bounds__Array* array,
        app::Bounds value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_UnityEngine_Bounds_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_UnityEngine_Bounds_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_UnityEngine_Bounds_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_Bounds_

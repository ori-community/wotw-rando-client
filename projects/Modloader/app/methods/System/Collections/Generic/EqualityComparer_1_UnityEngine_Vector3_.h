#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector3__Array.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_UnityEngine_Vector3_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x02B595E0, app::EqualityComparer_1_UnityEngine_Vector3_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02B53BB0,
        int32_t,
        IndexOf,
        app::EqualityComparer_1_UnityEngine_Vector3_* this_ptr,
        app::Vector3__Array* array,
        app::Vector3 value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B53C90,
        int32_t,
        LastIndexOf,
        app::EqualityComparer_1_UnityEngine_Vector3_* this_ptr,
        app::Vector3__Array* array,
        app::Vector3 value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x02B53D80, int32_t, IEqualityComparer_GetHashCode, app::EqualityComparer_1_UnityEngine_Vector3_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x02B53E80, bool, IEqualityComparer_Equals, app::EqualityComparer_1_UnityEngine_Vector3_* this_ptr, app::Object* x, app::Object* y)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::EqualityComparer_1_UnityEngine_Vector3_* this_ptr)
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_UnityEngine_Vector3_

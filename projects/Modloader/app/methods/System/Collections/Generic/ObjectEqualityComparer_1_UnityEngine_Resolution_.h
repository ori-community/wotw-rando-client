#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_UnityEngine_Resolution_.h>
#include <Modloader/app/structs/Resolution.h>
#include <Modloader/app/structs/Resolution__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_Resolution_ {
    IL2CPP_REGISTER_METHOD(0x01CD3170, bool, Equals_1, app::ObjectEqualityComparer_1_UnityEngine_Resolution_* this_ptr, app::Resolution x, app::Resolution y)
    IL2CPP_REGISTER_METHOD(0x01CD0900, int32_t, GetHashCode_1, app::ObjectEqualityComparer_1_UnityEngine_Resolution_* this_ptr, app::Resolution obj)
    IL2CPP_REGISTER_METHOD(
        0x01CD3230,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_UnityEngine_Resolution_* this_ptr,
        app::Resolution__Array* array,
        app::Resolution value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD33B0,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_UnityEngine_Resolution_* this_ptr,
        app::Resolution__Array* array,
        app::Resolution value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_UnityEngine_Resolution_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_UnityEngine_Resolution_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_UnityEngine_Resolution_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_Resolution_

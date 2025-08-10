#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_Moon_Substr_.h>
#include <Modloader/app/structs/Substr.h>
#include <Modloader/app/structs/Substr__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_Moon_Substr_ {
    IL2CPP_REGISTER_METHOD(0x01CD1020, bool, Equals_1, app::ObjectEqualityComparer_1_Moon_Substr_* this_ptr, app::Substr x, app::Substr y)
    IL2CPP_REGISTER_METHOD(0x01CD10D0, int32_t, GetHashCode_1, app::ObjectEqualityComparer_1_Moon_Substr_* this_ptr, app::Substr obj)
    IL2CPP_REGISTER_METHOD(
        0x01CD1130,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_Moon_Substr_* this_ptr,
        app::Substr__Array* array,
        app::Substr value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD12A0,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_Moon_Substr_* this_ptr,
        app::Substr__Array* array,
        app::Substr value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_Moon_Substr_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_Moon_Substr_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_Moon_Substr_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_Moon_Substr_

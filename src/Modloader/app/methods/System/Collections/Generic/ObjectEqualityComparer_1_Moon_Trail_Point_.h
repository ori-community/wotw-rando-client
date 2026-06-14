#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_Moon_Trail_Point_.h>
#include <Modloader/app/structs/Trail_Point.h>
#include <Modloader/app/structs/Trail_Point__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_Moon_Trail_Point_ {
    IL2CPP_REGISTER_METHOD(0x026597A0, bool, Equals_1, app::ObjectEqualityComparer_1_Moon_Trail_Point_* this_ptr, app::Trail_Point x, app::Trail_Point y)
    IL2CPP_REGISTER_METHOD(0x01CD0900, int32_t, GetHashCode_1, app::ObjectEqualityComparer_1_Moon_Trail_Point_* this_ptr, app::Trail_Point obj)
    IL2CPP_REGISTER_METHOD(
        0x02659880,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_Moon_Trail_Point_* this_ptr,
        app::Trail_Point__Array* array,
        app::Trail_Point value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02659A40,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_Moon_Trail_Point_* this_ptr,
        app::Trail_Point__Array* array,
        app::Trail_Point value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_Moon_Trail_Point_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_Moon_Trail_Point_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_Moon_Trail_Point_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_Moon_Trail_Point_
